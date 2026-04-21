#include <iostream>
#include <conio.h>
using namespace std;

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

    while (true)
    {
        system("cls");
        system("color 60");

        cout << "---------------------------------------------------" << endl;
        cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "\n  1. Admin";
        cout << "\n  2. User";
        cout << "\n  0. Exit"; // using 0 for exit cuz its easy to exit fastly while testing

        cout << "\n\n Select An Option : ";
        string mainOption;
        cin >> mainOption;

        // ADMIN LOGIN AREA AND CODE
        if (mainOption == "1")
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

                        if (adminOption == "1") // show all games
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
                        else if (adminOption == "2") // add an extra game
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
                        else if (adminOption == "3") // update the price of any game
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
                        else if (adminOption == "4") // delete any game
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

                            // shift everything left
                            for (int i = index; i < gameCount - 1; i++)
                            {
                                gameNames[i] = gameNames[i + 1];
                                gamePrices[i] = gamePrices[i + 1];
                                gameSold[i] = gameSold[i + 1];
                            }

                            gameCount--;

                            cout << "\nGame Has Been Deleted Successfully.";
                        }
                        else if (adminOption == "5") // search any game
                        {
                            system("cls");
                            cout << "---------------------------------------------------" << endl;
                            cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                            cout << "---------------------------------------------------" << endl;

                            string search;
                            cout << "Enter Name : ";
                            cin.ignore(); // i googled the solution that's why using here as sir gave the permission to use it
                            getline(cin, search);

                            for (int i = 0; i < gameCount; i++)
                            {
                                if (gameNames[i] == search)
                                {
                                    cout << gameNames[i] << " Is Present In Our Game Library." << endl;
                                }
                                else
                                {
                                    cout << "No Game Found With This Name.";
                                }
                            }
                        }
                        else if (adminOption == "6") // sort games
                        {
                            for (int i = 0; i < gameCount; i++)
                            {
                                for (int j = i; j < gameCount; j++)
                                {
                                    if (gamePrices[i] > gamePrices[j])
                                    {
                                        // swaping game prices
                                        int tempPrice = gamePrices[i];
                                        gamePrices[i] = gamePrices[j];
                                        gamePrices[j] = tempPrice;

                                        // swaping games names
                                        string tempName = gameNames[i];
                                        gameNames[i] = gameNames[j];
                                        gameNames[j] = tempName;

                                        // swaping sold amounts
                                        int tempSold = gameSold[i];
                                        gameSold[i] = gameSold[j];
                                        gameSold[j] = tempSold;
                                    }
                                }
                            }
                            cout << "\nGames List Has Been Sorted.";
                        }
                        else if (adminOption == "7") // total sales
                        {
                            int total = 0;
                            for (int i = 0; i < gameCount; i++)
                            {
                                total = total + (gamePrices[i] * gameSold[i]);
                            }
                            cout << "\nTotal Sales Are : Rs." << total << endl;
                        }
                        else if (adminOption == "8") // most popular game
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
                        else if (adminOption == "0") // exit
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

        // USER LOGIN AREA AND CODE
        else if (mainOption == "2")
        {
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
                            currentUser = i; //just to remember which user logged in
                        }
                    }

                    if (found = true)
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

                            cout << "\n--- "<<usernames[currentUser]<<"'s Account ---\n\n"; //this will display the name of whichever user is logged in

                            cout<<"1. View Games"<<endl;
                            cout<<"2. Buy Game"<<endl;
                            cout<<"3. Refund Game"<<endl;
                            cout<<"4. Your Library"<<endl;
                            cout<<"5. Search Game"<<endl;
                            cout<<"6. Sort Games Library"<<endl;
                            cout<<"7. Apply Coupon"<<endl;
                            cout<<"8. History Of Purchased Games"<<endl;
                            cout<<"9. Account Settings"<<endl;
                            cout<<"0. Exit"<<endl;

                            string userAccountOption;
                            cout<<"\nChoose An Option : ";
                            cin >> userAccountOption;

                            if (userAccountOption == "1") //To view games
                            {
                                system("cls");
                                cout << "---------------------------------------------------" << endl;
                                cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                                cout << "---------------------------------------------------" << endl;

                                cout << "\n--- "<<usernames[currentUser]<<"'s Account ---\n\n";

                                for (int i = 0; i < gameCount; i++)
                                {
                                    cout << i + 1 << ". " << gameNames[i] << " ---- " << gamePrices[i] << endl;
                                }
                            }

                            else if (userAccountOption == "2") // To buy games
                            {
                                system("cls");
                                cout << "---------------------------------------------------" << endl;
                                cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                                cout << "---------------------------------------------------" << endl;

                                cout << "\n--- "<<usernames[currentUser]<<"'s Account ---\n\n";

                                for (int i = 0; i < gameCount; i++)
                                {
                                    cout << i + 1 << ". " << gameNames[i] << endl;
                                }

                                int n;
                                cout << "\nEnter Game Code To Buy : ";
                                cin >> n;

                                bool gameOwned = false;
                                for (int i = 0; i < gameCount; i++) // this loop is to check wether user already own the game or not
                                {
                                    if (library[i] == n - 1)
                                    {
                                        gameOwned = true;
                                    }
                                }

                                if (gameOwned = true)
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
                                        cout<<"Coupen Code Applied Successfully!\nYou Got 10 Percent Discount On This Beatifull Game\nEnjoy!!!! :)";
                                    }
                                    else if (coupon == "SAVE20")
                                    {
                                        price = price - (price * 20 / 100);
                                        cout<<"Coupen Code Applied Successfully!\nYou Got 20 Percent Discount On This Beatifull Game\nEnjoy!!!! :)";
                                    }
                                    else
                                    {
                                        cout<<"This Coupen Is Not Available.\nPlease Check Your Coupen Code.";
                                    }

                                    library[libraryCount++] = n - 1;
                                    gameSold[n - 1]++;

                                    // HISTORY FOR LAST 5 PURCHASES
                                    if (historyCount < 5)
                                    {
                                        history[historyCount + 1] = n - 1;
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

                            else if (userAccountOption == "3") //To refund games
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

                            else if (userAccountOption == "4") // To see Your library
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

                            else if (userAccountOption == "5") // To search any game
                            {
                                system("cls");
                                cout << "---------------------------------------------------" << endl;
                                cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                                cout << "---------------------------------------------------" << endl;

                                string s;
                                cin.ignore();
                                getline(cin, s);

                                for (int i = 0; i < gameCount; i++)
                                {
                                    if (gameNames[i] == s)
                                    {
                                        cout << "Found\n";
                                    }
                                }
                            }

                            else if (userAccountOption == "6") //to sort your library games
                            {
                                for (int i = 0; i < gameCount; i++)
                                {
                                    for (int j = i; j < gameCount; j++)
                                    {
                                        if (gamePrices[i] > gamePrices[j])
                                        {
                                            swap(gamePrices[i], gamePrices[j]);
                                            swap(gameNames[i], gameNames[j]);
                                            swap(gameSold[i], gameSold[j]);
                                        }
                                    }
                                }

                                cout<<"Library Sorted.";
                            }

                            else if (userAccountOption == "7") // To apply coupen
                            {
                                cout << "\nUse Coupon While Buying.\n 'SAVE10' For 10 Percent Discount.\n 'SAVE20' For 20 Percent Discount.";
                            }

                            else if (userAccountOption == "8") // To see your last 5 pucrhaces history
                            {
                                system("cls");
                                cout << "---------------------------------------------------" << endl;
                                cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
                                cout << "---------------------------------------------------" << endl;

                                cout << "Your Recent Purchases Are:\n";
                                for (int i = 0; i < historyCount; i++)
                                {
                                    cout <<i + 1 <<". "<< gameNames[history[i]] << endl;
                                }
                            }

                            else if (userAccountOption == "0") // to log out
                            {
                                break;
                            }
                            else
                            {
                                cout<<"Inavlid Option. Try Again."<<endl;
                            }

                            cout<<"\nPress Any Key To Countinue.......";    
                            getch();
                        }
                    }
                    else
                    {
                        cout << "Wrong Login!";
                        cout<<"\nPress Any Key To Continue......";
                        getch();
                    }
                }
                else if (userOption == "0") // to return to menu
                {
                    cout << "\nReturning To Main Menu";
                    break;
                }
            }
        }

        // EXIT CODE
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