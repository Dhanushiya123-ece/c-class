#include <windows.h>
#include <iostream>
#include <conio.h> // for _kbhit() and _getch()
#include <iomanip> // for std::setw and std::setfill

void printTime(LONGLONG elapsed, LONGLONG freq)
{
    double seconds = static_cast<double>(elapsed) / freq;
    int mins = static_cast<int>(seconds) / 60;
    double secs = seconds - mins * 60;

    std::cout << "\rElapsed time: "
              << std::setw(2) << std::setfill('0') << mins << ":"
              << std::fixed << std::setprecision(3) << secs << "  " << std::flush;
}

int main()
{
    LARGE_INTEGER frequency, start, end;
    QueryPerformanceFrequency(&frequency);

    bool running = false;
    LONGLONG elapsedTime = 0;
    LARGE_INTEGER lastStart;

    std::cout << "Console Stopwatch\n";
    std::cout << "Press 's' to start/stop, 'r' to reset, 'q' to quit.\n";

    while (true)
    {
        if (_kbhit())
        {
            char ch = _getch();
            if (ch == 's' || ch == 'S')
            {
                if (!running)
                {
                    QueryPerformanceCounter(&lastStart);
                    running = true;
                }
                else
                {
                    QueryPerformanceCounter(&end);
                    elapsedTime += end.QuadPart - lastStart.QuadPart;
                    running = false;
                }
            }
            else if (ch == 'r' || ch == 'R')
            {
                elapsedTime = 0;
                if (running)
                {
                    QueryPerformanceCounter(&lastStart);
                }
                std::cout << "\rElapsed time: 00:0.000  " << std::flush;
            }
            else if (ch == 'q' || ch == 'Q')
            {
                break;
            }
        }

        if (running)
        {
            QueryPerformanceCounter(&end);
            printTime(elapsedTime + (end.QuadPart - lastStart.QuadPart), frequency.QuadPart);
        }
        else
        {
            printTime(elapsedTime, frequency.QuadPart);
        }

        Sleep(10); // Update roughly every 10ms
    }

    std::cout << "\nStopwatch exited.\n";
    return 0;
}
