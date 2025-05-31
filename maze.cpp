#include <iostream>
#include <conio.h>   // For _kbhit() and _getch()
#include <windows.h> // For Sleep()
using namespace std;

const int width = 10;
const int height = 10;

// Simple maze layout
char maze[height][width + 1] = {
    "##########",
    "#P       #",
    "# ###### #",
    "#      # #",
    "###### # #",
    "#      # #",
    "# ###### #",
    "#        #",
    "# ######G#",
    "##########"};

int playerX = 1;
int playerY = 1;

void drawMaze()
{
    system("cls");
    for (int i = 0; i < height; i++)
    {
        cout << maze[i] << "\n";
    }
}

void movePlayer(int dx, int dy)
{
    int newX = playerX + dx;
    int newY = playerY + dy;

    if (maze[newY][newX] != '#')
    { // Check wall
        // Move player
        maze[playerY][playerX] = ' ';
        playerX = newX;
        playerY = newY;
        maze[playerY][playerX] = 'P';
    }
}

int main()
{
    drawMaze();
    cout << "Use W A S D to move. Reach the G to win!\n";

    while (true)
    {
        if (_kbhit())
        {
            char ch = tolower(_getch());
            if (ch == 'w')
                movePlayer(0, -1);
            else if (ch == 's')
                movePlayer(0, 1);
            else if (ch == 'a')
                movePlayer(-1, 0);
            else if (ch == 'd')
                movePlayer(1, 0);
            else if (ch == 'q')
                break; // Quit

            drawMaze();

            if (maze[playerY][playerX] == 'G')
            {
                cout << "You reached the goal! Congratulations!\n";
                break;
            }
        }
        Sleep(50);
    }

    return 0;
}
