#include<iostream>
#include<windows.h>
#include<fstream>
#include<string>
#include<ctime>

using namespace std;

// ---------------- GLOBAL VARIABLES ----------------

string maze[30];

int rows = 21;

int pacmanX = 5;
int pacmanY = 5;

int initialPacmanX = 5;
int initialPacmanY = 5;

int score = 0;
int lives = 3;

bool powerMode = false;
int powerTimer = 0;

// Ghost 1 Horizontal
int ghost1X = 20;
int ghost1Y = 5;
string ghost1Direction = "Right";

// Ghost 2 Vertical
int ghost2X = 40;
int ghost2Y = 10;
string ghost2Direction = "Down";

// Ghost 3 Random
int ghost3X = 25;
int ghost3Y = 15;

// Ghost 4 Follower
int ghost4X = 55;
int ghost4Y = 15;

// ---------------- FUNCTION DECLARATIONS ----------------

void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);

void loadMaze();
void printMaze();

void printPacman();
void erasePacman();

void movePacmanLeft();
void movePacmanRight();
void movePacmanUp();
void movePacmanDown();

void collectDots();
void checkPowerPellet();

void printGhost1();
void eraseGhost1();
void moveGhost1();

void printGhost2();
void eraseGhost2();
void moveGhost2();

void printGhost3();
void eraseGhost3();
void moveGhost3();

void printGhost4();
void eraseGhost4();
void moveGhost4();

void checkCollision();
void loseLife();

void printScore();
void resetGhosts();

// ---------------- MAIN ----------------

main()
{
    srand(time(0));

    system("cls");
    system("color 0E");

    loadMaze();
    printMaze();

    printPacman();

    printGhost1();
    printGhost2();
    printGhost3();
    printGhost4();

    int timer = 0;

    while(true)
    {
        printScore();

        if(GetAsyncKeyState(VK_LEFT))
        {
            movePacmanLeft();
        }

        if(GetAsyncKeyState(VK_RIGHT))
        {
            movePacmanRight();
        }

        if(GetAsyncKeyState(VK_UP))
        {
            movePacmanUp();
        }

        if(GetAsyncKeyState(VK_DOWN))
        {
            movePacmanDown();
        }

        collectDots();
        checkPowerPellet();

        if(timer == 2)
        {
            moveGhost1();
            moveGhost2();
            moveGhost3();
            moveGhost4();

            timer = 0;
        }

        checkCollision();

        if(powerMode == true)
        {
            powerTimer++;

            if(powerTimer >= 30)
            {
                powerMode = false;
                powerTimer = 0;
            }
        }

        timer++;

        Sleep(100);
    }
}

// ---------------- MAZE ----------------

void loadMaze()
{
    ifstream file("maze.txt");

    for(int i = 0; i < rows; i++)
    {
        getline(file, maze[i]);
    }

    file.close();
}

void printMaze()
{
    for(int i = 0; i < rows; i++)
    {
        cout << maze[i] << endl;
    }
}

// ---------------- PACMAN ----------------

void printPacman()
{
    gotoxy(pacmanX, pacmanY);
    cout << "C";
}

void erasePacman()
{
    gotoxy(pacmanX, pacmanY);
    cout << " ";
}

void movePacmanLeft()
{
    char next = getCharAtxy(pacmanX - 1, pacmanY);

    if(next != '#')
    {
        erasePacman();
        pacmanX--;
        printPacman();
    }
}

void movePacmanRight()
{
    char next = getCharAtxy(pacmanX + 1, pacmanY);

    if(next != '#')
    {
        erasePacman();
        pacmanX++;
        printPacman();
    }
}

void movePacmanUp()
{
    char next = getCharAtxy(pacmanX, pacmanY - 1);

    if(next != '#')
    {
        erasePacman();
        pacmanY--;
        printPacman();
    }
}

void movePacmanDown()
{
    char next = getCharAtxy(pacmanX, pacmanY + 1);

    if(next != '#')
    {
        erasePacman();
        pacmanY++;
        printPacman();
    }
}

void collectDots()
{
    char current = getCharAtxy(pacmanX, pacmanY);

    if(current == '.')
    {
        score = score + 10;

        gotoxy(pacmanX, pacmanY);
        cout << " ";

        printPacman();
    }
}

void checkPowerPellet()
{
    char current = getCharAtxy(pacmanX, pacmanY);

    if(current == 'O')
    {
        powerMode = true;
        powerTimer = 0;

        gotoxy(pacmanX, pacmanY);
        cout << " ";

        printPacman();
    }
}

// ---------------- GHOST 1 ----------------

void printGhost1()
{
    gotoxy(ghost1X, ghost1Y);
    cout << "H";
}

void eraseGhost1()
{
    gotoxy(ghost1X, ghost1Y);
    cout << " ";
}

void moveGhost1()
{
    if(ghost1Direction == "Right")
    {
        char next = getCharAtxy(ghost1X + 1, ghost1Y);

        if(next != '#')
        {
            eraseGhost1();
            ghost1X++;
            printGhost1();
        }
        else
        {
            ghost1Direction = "Left";
        }
    }

    if(ghost1Direction == "Left")
    {
        char next = getCharAtxy(ghost1X - 1, ghost1Y);

        if(next != '#')
        {
            eraseGhost1();
            ghost1X--;
            printGhost1();
        }
        else
        {
            ghost1Direction = "Right";
        }
    }
}

// ---------------- GHOST 2 ----------------

void printGhost2()
{
    gotoxy(ghost2X, ghost2Y);
    cout << "V";
}

void eraseGhost2()
{
    gotoxy(ghost2X, ghost2Y);
    cout << " ";
}

void moveGhost2()
{
    if(ghost2Direction == "Down")
    {
        char next = getCharAtxy(ghost2X, ghost2Y + 1);

        if(next != '#')
        {
            eraseGhost2();
            ghost2Y++;
            printGhost2();
        }
        else
        {
            ghost2Direction = "Up";
        }
    }

    if(ghost2Direction == "Up")
    {
        char next = getCharAtxy(ghost2X, ghost2Y - 1);

        if(next != '#')
        {
            eraseGhost2();
            ghost2Y--;
            printGhost2();
        }
        else
        {
            ghost2Direction = "Down";
        }
    }
}

// ---------------- GHOST 3 RANDOM ----------------

void printGhost3()
{
    gotoxy(ghost3X, ghost3Y);
    cout << "R";
}

void eraseGhost3()
{
    gotoxy(ghost3X, ghost3Y);
    cout << " ";
}

void moveGhost3()
{
    int direction = rand() % 4;

    if(direction == 0)
    {
        char next = getCharAtxy(ghost3X + 1, ghost3Y);

        if(next != '#')
        {
            eraseGhost3();
            ghost3X++;
            printGhost3();
        }
    }

    if(direction == 1)
    {
        char next = getCharAtxy(ghost3X - 1, ghost3Y);

        if(next != '#')
        {
            eraseGhost3();
            ghost3X--;
            printGhost3();
        }
    }

    if(direction == 2)
    {
        char next = getCharAtxy(ghost3X, ghost3Y + 1);

        if(next != '#')
        {
            eraseGhost3();
            ghost3Y++;
            printGhost3();
        }
    }

    if(direction == 3)
    {
        char next = getCharAtxy(ghost3X, ghost3Y - 1);

        if(next != '#')
        {
            eraseGhost3();
            ghost3Y--;
            printGhost3();
        }
    }
}

// ---------------- GHOST 4 FOLLOWER ----------------

void printGhost4()
{
    gotoxy(ghost4X, ghost4Y);
    cout << "F";
}

void eraseGhost4()
{
    gotoxy(ghost4X, ghost4Y);
    cout << " ";
}

void moveGhost4()
{
    if(pacmanX > ghost4X)
    {
        char next = getCharAtxy(ghost4X + 1, ghost4Y);

        if(next != '#')
        {
            eraseGhost4();
            ghost4X++;
            printGhost4();
        }
    }

    else if(pacmanX < ghost4X)
    {
        char next = getCharAtxy(ghost4X - 1, ghost4Y);

        if(next != '#')
        {
            eraseGhost4();
            ghost4X--;
            printGhost4();
        }
    }

    if(pacmanY > ghost4Y)
    {
        char next = getCharAtxy(ghost4X, ghost4Y + 1);

        if(next != '#')
        {
            eraseGhost4();
            ghost4Y++;
            printGhost4();
        }
    }

    else if(pacmanY < ghost4Y)
    {
        char next = getCharAtxy(ghost4X, ghost4Y - 1);

        if(next != '#')
        {
            eraseGhost4();
            ghost4Y--;
            printGhost4();
        }
    }
}

// ---------------- COLLISION ----------------

void checkCollision()
{
    if((pacmanX == ghost1X && pacmanY == ghost1Y) ||
       (pacmanX == ghost2X && pacmanY == ghost2Y) ||
       (pacmanX == ghost3X && pacmanY == ghost3Y) ||
       (pacmanX == ghost4X && pacmanY == ghost4Y))
    {
        if(powerMode == true)
        {
            score = score + 50;
            resetGhosts();
        }
        else
        {
            loseLife();
        }
    }
}

void loseLife()
{
    lives--;

    erasePacman();

    pacmanX = initialPacmanX;
    pacmanY = initialPacmanY;

    printPacman();

    if(lives <= 0)
    {
        system("cls");

        cout << "GAME OVER" << endl;
        cout << "Final Score : " << score;

        exit(0);
    }
}

void resetGhosts()
{
    eraseGhost1();
    eraseGhost2();
    eraseGhost3();
    eraseGhost4();

    ghost1X = 20;
    ghost1Y = 5;

    ghost2X = 40;
    ghost2Y = 10;

    ghost3X = 25;
    ghost3Y = 15;

    ghost4X = 55;
    ghost4Y = 15;

    printGhost1();
    printGhost2();
    printGhost3();
    printGhost4();
}

// ---------------- SCORE ----------------

void printScore()
{
    gotoxy(0, 23);

    cout << "Score : " << score;
    cout << "   Lives : " << lives;

    if(powerMode == true)
    {
        cout << "   POWER MODE";
    }
    else
    {
        cout << "               ";
    }
}

// ---------------- CONSOLE FUNCTIONS ----------------

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};

    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;

    return ReadConsoleOutput(
        GetStdHandle(STD_OUTPUT_HANDLE),
        &ci,
        coordBufSize,
        xy,
        &rect
    ) ? ci.Char.AsciiChar : ' ';
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;

    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE),
        coordinates
    );
}
