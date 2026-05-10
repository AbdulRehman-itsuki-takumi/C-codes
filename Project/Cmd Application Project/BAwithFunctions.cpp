#include <iostream>
#include <conio.h>
using namespace std;

void adminArea(string gameNames[], int gamePrices[], int gameSold[], int &gameCount)
{
    // ADMIN LOGIN AREA AND CODE
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
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    cout << "\nShowing All Available Games\n\n";
                    for (int i = 0; i < gameCount; i++)
                    {
                        cout << i + 1 << "." << gameNames[i] << "   ------  Rs." << gamePrices[i] << endl;
                    }
                }
                else if (adminOption == "2")
                {
                    system("cls");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    cout << "\nEnter Game Name : ";
                    cin >> gameNames[gameCount];

                    cout << "Enter Game Price : ";
                    cin >> gamePrices[gameCount];
                    gameCount++;

                    cout << "Game Name And Price Has Been Added Successfully.";
                }
                else if (adminOption == "3")
                {
                    system("cls");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    cout << "Showing All Available Games\n\n";
                    for (int i = 0; i < gameCount; i++)
                    {
                        cout << i + 1 << "." << gameNames[i] << " ----- Rs." << gamePrices[i] << endl;
                    }
                    int n;
                    cout << "\nEnter Game Number : ";
                    cin >> n;
                    cout << "\nOld Price For This Game Is : Rs" << gamePrices[n - 1];
                    cout << "Enter New Price For This Game : ";
                    cin >> gamePrices[n - 1];

                    cout << "\nGame Price Has Been Updated Successfully.";
                }
                else if (adminOption == "4")
                {
                    system("cls");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    cout << "\nShowing All Available Games\n\n";
                    for (int i = 0; i < gameCount; i++)
                    {
                        cout << i + 1 << "." << gameNames[i] << "   ------  Rs." << gamePrices[i] << endl;
                    }

                    int n;
                    cout << "Enter Game Number : ";
                    cin >> n;

                    int index = n - 1;

                    for (int i = index; i < gameCount - 1; i++)
                    {
                        gameNames[i] = gameNames[i + 1];
                        gamePrices[i] = gamePrices[i + 1];
                        gameSold[i] = gameSold[i + 1];
                    }

                    gameCount--;

                    cout << "\nGame Has Been Deleted Successfully.";
                }
                else if (adminOption == "5")
                {
                    system("cls");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    string search;
                    cout << "Enter Name : ";
                    cin.ignore();
                    getline(cin, search);

                    bool found = false;

                    for (int i = 0; i < gameCount; i++)
                    {
                        if (gameNames[i] == search)
                        {
                            cout << gameNames[i] << " Is Present In Our Game Library." << endl;
                            found = true;
                        }
                    }

                    if (found == false)
                    {
                        cout << "No Game Found With This Name.";
                    }
                }
                else if (adminOption == "6")
                {
                    for (int i = 0; i < gameCount; i++)
                    {
                        for (int j = i; j < gameCount; j++)
                        {
                            if (gamePrices[i] > gamePrices[j])
                            {
                                int tempPrice = gamePrices[i];
                                gamePrices[i] = gamePrices[j];
                                gamePrices[j] = tempPrice;

                                string tempName = gameNames[i];
                                gameNames[i] = gameNames[j];
                                gameNames[j] = tempName;

                                int tempSold = gameSold[i];
                                gameSold[i] = gameSold[j];
                                gameSold[j] = tempSold;
                            }
                        }
                    }
                    cout << "\nGames List Has Been Sorted.";
                }
                else if (adminOption == "7")
                {
                    int total = 0;
                    for (int i = 0; i < gameCount; i++)
                    {
                        total = total + (gamePrices[i] * gameSold[i]);
                    }
                    cout << "\nTotal Sales Are : Rs." << total << endl;
                }
                else if (adminOption == "8")
                {
                    int max = 0;
                    for (int i = 1; i < gameCount; i++)
                    {
                        if (gameSold[i] > gameSold[max])
                        {
                            max = i;
                        }
                    }

                    cout << "\nMost Popular Game Is: " << gameNames[max] << endl;
                }
                else if (adminOption == "0")
                {
                    cout << "Returning To Main Menu.......";
                    break;
                }
                else
                {
                    cout << "Invalid Option." << endl;
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

void userArea(string gameNames[], int gamePrices[], int gameSold[], int &gameCount,
               string usernames[], string passwords[], int &userIndex,
               int library[], int &libraryCount,
               int history[], int &historyCount)
{
    // USER LOGIN AREA AND CODE
    while (true)
    {
        system("cls");
        system("color 90");
        cout << "---------------------------------------------------" << endl;
        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "\n   1. Sign Up" << endl;
        cout << "   2. Login" << endl;
        cout << "   0. Exit" << endl;

        string userOption;
        cout << "\nChoose An Option : ";
        cin >> userOption;

        if (userOption == "1")
        {
            cout << "\nUsername : ";
            cin >> usernames[userIndex];
            cout << "Password : ";
            cin >> passwords[userIndex];
            userIndex++;
            cout << "\nAccount Created!";
            getch();
        }

        else if (userOption == "2")
        {
            string userUsername;
            string userPassword;

            cout << "\nEnter Your Username : ";
            cin >> userUsername;

            cout << "Enter Your Password : ";
            cin >> userPassword;

            bool found = false;
            int currentUser = -1;

            for (int i = 0; i < userIndex; i++)
            {
                if (usernames[i] == userUsername && passwords[i] == userPassword)
                {
                    found = true;
                    currentUser = i;
                }
            }

            if (found == true)
            {
                cout << "\nLogin Successfull!";
                cout << "\nPress Any Key To Continue.....";
                getch();

                while (true)
                {
                    system("cls");
                    system("color 90");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                    cout << "---------------------------------------------------" << endl;

                    cout << "\n--- " << usernames[currentUser] << "'s Account ---\n\n";

                    cout << "1. View Games" << endl;
                    cout << "2. Buy Game" << endl;
                    cout << "3. Refund Game" << endl;
                    cout << "4. Your Library" << endl;
                    cout << "5. Search Game" << endl;
                    cout << "6. Sort Games Library" << endl;
                    cout << "7. Apply Coupon" << endl;
                    cout << "8. History Of Purchased Games" << endl;
                    cout << "0. Exit" << endl;

                    string userAccountOption;
                    cout << "\nChoose An Option : ";
                    cin >> userAccountOption;

                    if (userAccountOption == "1")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        cout << "\n--- " << usernames[currentUser] << "'s Account ---\n\n";

                        for (int i = 0; i < gameCount; i++)
                        {
                            cout << i + 1 << ". " << gameNames[i] << " ---- " << gamePrices[i] << endl;
                        }
                    }

                    else if (userAccountOption == "2")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        cout << "\n--- " << usernames[currentUser] << "'s Account ---\n\n";

                        for (int i = 0; i < gameCount; i++)
                        {
                            cout << i + 1 << ". " << gameNames[i] << endl;
                        }

                        int n;
                        cout << "\nEnter Game Code To Buy : ";
                        cin >> n;

                        bool gameOwned = false;
                        for (int i = 0; i < libraryCount; i++)
                        {
                            if (library[i] == n - 1)
                            {
                                gameOwned = true;
                            }
                        }

                        if (gameOwned == true)
                        {
                            cout << "\nGreat! You Already Own This Game! Isn't It A Masterpiece!!";
                        }
                        else
                        {
                            int price = gamePrices[n - 1];

                            string coupon;
                            cout << "Enter Coupon (or NONE) : ";
                            cin >> coupon;

                            if (coupon == "SAVE10")
                            {
                                price = price - (price * 10 / 100);
                                cout << "Coupen Code Applied Successfully!\nYou Got 10 Percent Discount On This Beatifull Game\nEnjoy!!!! :)" << endl;
                            }
                            else if (coupon == "SAVE20")
                            {
                                price = price - (price * 20 / 100);
                                cout << "Coupen Code Applied Successfully!\nYou Got 20 Percent Discount On This Beatifull Game\nEnjoy!!!! :)" << endl;
                            }
                            else if (coupon == "None")
                            {
                                cout << "No Coupen Code Is Applied Original Price Will Be Applied." << endl;
                            }
                            else
                            {
                                cout << "This Coupen Is Not Available.\nPlease Check Your Coupen Code." << endl;
                            }

                            library[libraryCount++] = n - 1;
                            gameSold[n - 1]++;

                            if (historyCount < 5)
                            {
                                history[historyCount] = n - 1;
                                historyCount++;
                            }
                            else
                            {
                                for (int i = 0; i < 4; i++)
                                {
                                    history[i] = history[i + 1];
                                }
                                history[4] = n - 1;
                            }

                            cout << "Game Bought After Discount Only For : Rs" << price << endl;
                        }
                    }

                    else if (userAccountOption == "3")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        for (int i = 0; i < libraryCount; i++)
                        {
                            cout << i + 1 << ". " << gameNames[library[i]] << endl;
                        }

                        int r;
                        cin >> r;

                        for (int i = r - 1; i < libraryCount - 1; i++)
                        {
                            library[i] = library[i + 1];
                        }

                        libraryCount--;
                    }

                    else if (userAccountOption == "4")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        for (int i = 0; i < libraryCount; i++)
                        {
                            cout << gameNames[library[i]] << endl;
                        }
                    }

                    else if (userAccountOption == "5")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        string s;
                        cin.ignore();
                        getline(cin, s);

                        bool found = false;

                        for (int i = 0; i < gameCount; i++)
                        {
                            if (gameNames[i] == s)
                            {
                                cout << "Game Found\n";
                                found = true;
                            }
                        }

                        if (found == false)
                        {
                            cout << "Game Not Found\n";
                        }
                    }

                    else if (userAccountOption == "6")
                    {
                        for (int i = 0; i < gameCount; i++)
                        {
                            for (int j = i; j < gameCount; j++)
                            {
                                if (gamePrices[i] > gamePrices[j])
                                {
                                    int tempPrice = gamePrices[i];
                                    gamePrices[i] = gamePrices[j];
                                    gamePrices[j] = tempPrice;

                                    string tempName = gameNames[i];
                                    gameNames[i] = gameNames[j];
                                    gameNames[j] = tempName;

                                    int tempSold = gameSold[i];
                                    gameSold[i] = gameSold[j];
                                    gameSold[j] = tempSold;
                                }
                            }
                        }

                        cout << "Library Sorted.";
                    }

                    else if (userAccountOption == "7")
                    {
                        cout << "\nUse Coupon While Buying.\n 'SAVE10' For 10 Percent Discount.\n 'SAVE20' For 20 Percent Discount.";
                    }

                    else if (userAccountOption == "8")
                    {
                        system("cls");
                        cout << "---------------------------------------------------" << endl;
                        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        cout << "Your Recent Purchases Are:\n";
                        for (int i = 0; i < historyCount; i++)
                        {
                            cout << i + 1 << ". " << gameNames[history[i]] << endl;
                        }
                    }

                    else if (userAccountOption == "0")
                    {
                        break;
                    }
                    else
                    {
                        cout << "Inavlid Option. Try Again." << endl;
                    }

                    cout << "\nPress Any Key To Countinue.......";
                    getch();
                }
            }
            else
            {
                cout << "Wrong Login!";
                cout << "\nPress Any Key To Continue......";
                getch();
            }
        }
        else if (userOption == "0")
        {
            cout << "\nReturning To Main Menu";
            break;
        }
    }
}

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

    // USER LIBRARY CODE + CODE FOR ITS HISTORY
    int library[50];
    int libraryCount = 0;

    int history[5];
    int historyCount = 0;

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
            adminArea(gameNames, gamePrices, gameSold, gameCount);
        }

        else if (mainOption == "2")
        {
            userArea(gameNames, gamePrices, gameSold, gameCount,
                     usernames, passwords, userIndex,
                     library, libraryCount,
                     history, historyCount);
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