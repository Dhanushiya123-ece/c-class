#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int width = 20;
const int height = 20;

int x, y, foodX, foodY, score;
int dirX = 0, dirY = 0;
bool gameOver = false;

vector<pair<int, int>> snake;

void Setup()
{
    srand(time(0));
    x = width / 2;
    y = height / 2;
    foodX = rand() % width;
    foodY = rand() % height;
    score = 0;
    snake.clear();
    snake.push_back({x, y});
}

void Draw()
{
    system("cls");

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";

            bool printed = false;
            if (i == y && j == x)
            {
                cout << "O"; // head
                printed = true;
            }
            else if (i == foodY && j == foodX)
            {
                cout << "*";
                printed = true;
            }
            else
            {
                for (auto s : snake)
                {
                    if (s.first == j && s.second == i)
                    {
                        cout << "o"; // body
                        printed = true;
                        break;
                    }
                }
            }

            if (!printed)
                cout << " ";
            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << "\nScore: " << score << endl;
}

void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'w':
            dirX = 0;
            dirY = -1;
            break;
        case 's':
            dirX = 0;
            dirY = 1;
            break;
        case 'a':
            dirX = -1;
            dirY = 0;
            break;
        case 'd':
            dirX = 1;
            dirY = 0;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic()
{
    x += dirX;
    y += dirY;

    // Check wall hit
    if (x < 0 || x >= width || y < 0 || y >= height)
    {
        gameOver = true;
        return;
    }

    // Check self hit
    for (int i = 1; i < snake.size(); i++)
    {
        if (snake[i].first == x && snake[i].second == y)
        {
            gameOver = true;
            return;
        }
    }

    // Move snake
    snake.insert(snake.begin(), {x, y});
    if (x == foodX && y == foodY)
    {
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
    }
    else
    {
        snake.pop_back(); // remove tail
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(100); // controls speed
    }

    cout << "\nGame Over! Final Score: " << score << endl;
    return 0;
}
