#include <iostream>
#include <conio.h>
using namespace std;

// FUNCTION DECLARATIONS
void adminPanel(string gameNames[], int gamePrices[], int gameSold[], int &gameCount);
void userPanel(string usernames[], string passwords[], int &userIndex,
               string gameNames[], int gamePrices[], int gameSold[], int gameCount);

main()
{
    // GAME STORE DATA
    int totalGames = 20;
    int gameCount = 20;
    int gameSold[50] = {0};

    string gameNames[50] = {"Resident Evil 4", "Elden Ring", "Persona 5 Royal", "Sekiro", "GTA V",
                            "Nier Automata", "Dark Souls 3", "Cyberpunk 2077", "Hollow Knight Silksong", "God Of War",
                            "Spiderman", "Tekken 7", "Street Fighter 6", "Read Dead Redemption 2", "Call Of Duty",
                            "Battlefield 5", "Assassin Creed", "Ghost of Tsushima", "Final Fantasy XV", "Silent Hill 2"};

    int gamePrices[50] = {5000, 7000, 6000, 6500, 4000, 5500, 6200, 6800, 3000, 7200,
                          7100, 3500, 3600, 7500, 5000, 4800, 5300, 6900, 6100, 5800};

    // USER DATA
    string usernames[20];
    string passwords[20];
    int userIndex = 0;

    system("cls");
    system("color 60");

    cout << "---------------------------------------------------" << endl;
    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << endl;
    cout << "\n\tWELCOME IN THE HEAVEN OF GAMES." << endl;
    cout << "\tHERE YOU CAN BUY DIFFERENT TYPE OF GAMES" << endl;
    cout << "\n\n\tPress Any Key To Continue......";
    getch();

    while (true)
    {
        system("cls");
        system("color 60");

        cout << "---------------------------------------------------" << endl;
        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "\n  1. Admin";
        cout << "\n  2. User";
        cout << "\n  0. Exit";

        cout << "\n\n Select An Option : ";
        string mainOption;
        cin >> mainOption;

        if (mainOption == "1")
        {
            adminPanel(gameNames, gamePrices, gameSold, gameCount);
        }
        else if (mainOption == "2")
        {
            userPanel(usernames, passwords, userIndex,
                      gameNames, gamePrices, gameSold, gameCount);
        }
        else if (mainOption == "0")
        {
            cout << "Thank You For Using Our Game Store Application!\nBe Proud To Be A Gamer :) ";
            system("color 07");
            break;
        }
        else
        {
            cout << "Inavlid Option. Try Again." << endl;
        }

        cout << "\nPress Any Key To Continue.....";
        getch();
    }
}

// ================= ADMIN FUNCTION =================
void adminPanel(string gameNames[], int gamePrices[], int gameSold[], int &gameCount)
{
    for (int i = 3; i > 0; i--)
    {
        system("cls");
        system("color C0");

        cout << "---------------------------------------------------" << endl;
        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "\n----- ADMIN LOGIN -----\n\n";

        string adminUsername;
        string adminPassword;
        cout << "Enter Your Username : ";
        cin >> adminUsername;
        cout << "Enter Your Password : ";
        cin >> adminPassword;

        if (adminUsername == "Admin" && adminPassword == "1234")
        {
            cout << "Login Success!";
            getch();

            while (true)
            {
                system("cls");
                cout << "---------------------------------------------------" << endl;
                cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                cout << "---------------------------------------------------" << endl;

                cout << "\n--- ADMIN MENU ---\n\n";
                cout << "1. Show Games" << endl;
                cout << "2. Add Game " << endl;
                cout << "3. Update Price" << endl;
                cout << "4. Delete Game" << endl;
                cout << "5. Search Game" << endl;
                cout << "6. Sort Games" << endl;
                cout << "7. Total Sales" << endl;
                cout << "8. Most Popular" << endl;
                cout << "0. Exit" << endl;

                string adminOption;
                cout << "\nSelect An Option : ";
                cin >> adminOption;
                cout << endl;

                if (adminOption == "1")
                {
                    system("cls");
                    cout << "\nShowing All Available Games\n\n";
                    for (int i = 0; i < gameCount; i++)
                    {
                        cout << i + 1 << "." << gameNames[i] << "   ------  Rs." << gamePrices[i] << endl;
                    }
                }
                else if (adminOption == "2")
                {
                    cout << "\nEnter Game Name : ";
                    cin >> gameNames[gameCount];
                    cout << "Enter Game Price : ";
                    cin >> gamePrices[gameCount];
                    gameCount++;
                    cout << "Game Added.";
                }
                else if (adminOption == "0")
                {
                    break;
                }

                cout << "\nPress Any Key To Continue.....";
                getch();
            }
            break;
        }
        else
        {
            cout << "Wrong Login.\nAttempts Left : " << i - 1;
            getch();
        }
    }
}

// ================= USER FUNCTION =================
void userPanel(string usernames[], string passwords[], int &userIndex,
               string gameNames[], int gamePrices[], int gameSold[], int gameCount)
{
    int library[50];
    int libraryCount = 0;

    int history[5];
    int historyCount = 0;

    while (true)
    {
        system("cls");
        system("color 90");
        cout << "---------------------------------------------------" << endl;
        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << endl;

        cout << "\n   1. Sign Up" << endl;
        cout << "   2. Login" << endl;
        cout << "   0. Exit" << endl;

        string userOption;
        cin >> userOption;

        if (userOption == "1")
        {
            cin >> usernames[userIndex];
            cin >> passwords[userIndex];
            userIndex++;
            cout << "\nAccount Created!";
            getch();
        }
        else if (userOption == "0")
        {
            break;
        }
    }
}