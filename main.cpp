#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 25,height = 25;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail = 2;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void gotoxy(int x, int y) 
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setup()
{
    srand(time(0));
    gameOver = false;
    dir = RIGHT;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % (width-2) + 1;
    fruitY = rand() % (height-2) + 1;

    for (int i = 0; i < nTail; i++) 
    {
        tailX[i] = x - (i + 1); 
        tailY[i] = y;
    }
}

void draw()
{
    gotoxy(0,0);
    for(int i=0; i<height; i++)
    {
        cout << "#";
        for(int j=0; j<width-2; j++)
        {
            if(i==0 || i==height-1)
            {
                cout << "#";
            }
            else if(i==y && j==x) cout << "O";
            else if(i==fruitY && j==fruitX) cout << "F";
            else 
            {
                bool print = false;
                for(int k=0; k<nTail; k++)
                {                    
                    if(tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if(print != true) cout << " ";
            }
        }
        cout << "#" << endl;
    }
    cout << "Score : " << score;
}
void input()
{
    if(_kbhit())
    {
        switch(_getch())
        {
            case 'w':
                dir = UP;
                break;
            case 's':
                dir =DOWN;
                break;
            case 'a':
                dir = LEFT;
                break;  
            case 'd':
                dir = RIGHT;
                break;  
            case 'x':
                gameOver = true;         
        }

    }
}
void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for(int i=1; i<nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch(dir)
    {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;   
        default:
            break;         
    }

    if(x == width-1 || x==0 || y == height-1 || y == 0) gameOver = true;

    for(int i=-0; i<nTail; i++)
    {
        if(tailX[i] == x && tailY[i] == y)
        gameOver = true;
    }
    if(x==fruitX && y==fruitY)
    {
        score+=10;
        fruitX = rand() % (width-2)+1;
        fruitY = rand() % (height-2)+1;
        nTail++;
    }
}

void gameOverScreen()
{
    gotoxy(width / 3, height / 2); 
    cout << "=============" << endl;
    gotoxy(width / 3, (height / 2) + 1);
    cout << " GAME OVER " << endl;
    gotoxy(width / 3, (height / 2) + 2);
    cout << "=============" << endl;
    gotoxy(width / 3, (height / 2) + 4);
    cout << "Final Score: " << score << endl;
    for(int i=0; i<15; i++)
    {
        cout << endl;
    }
}


int main()
{
    
    setup();
    while(gameOver!=true)
    {
        draw();
        input();
        logic();
        Sleep(50);
    }

    gameOverScreen();

    return 0;
}
