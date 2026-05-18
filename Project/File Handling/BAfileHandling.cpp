#include <iostream>
#include <conio.h>
#include <fstream>  
using namespace std;

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
int currentUser = -1; // i dont wanna put it 0 bcz maybe its user on 2 index logged in and it will not update so -1 is better

int library[50];
int libraryCount = 0;
int history[5];
int historyCount = 0;

void saveGamesToFile()
{
    fstream file;
    file.open("games.txt", ios::out);  
    file << gameCount << "\n";
    for (int i = 0; i < gameCount; i++)
    {
        file << gameNames[i] << "\n";
        file << gamePrices[i] << "\n";
        file << gameSold[i] << "\n";
    }
    file.close();
}

void loadGamesFromFile()
{
    fstream file;
    file.open("games.txt", ios::in); 
    file >> gameCount;

    for (int i = 0; i < gameCount; i++)
    {
        getline(file, gameNames[i]);
        file >> gamePrices[i];
        file >> gameSold[i];
    }
    file.close();
}


void saveUserToFile(string username, string password)
{
    fstream file;
    file.open("users.txt", ios::app);
    file << username << "\n";
    file << password << "\n";
    file.close();
}

void loadUsersFromFile()
{
    fstream file;
    file.open("users.txt", ios::in); 
    while (file >> usernames[userIndex] >> passwords[userIndex])
    {
        userIndex++;
    }
    file.close();
}

void saveLibraryToFile()
{
    fstream file;
    file.open("library.txt", ios::out);
    file << libraryCount << "\n";
    for (int i = 0; i < libraryCount; i++)
    {
        file << library[i] << "\n";
    }
    file.close();
}

void loadLibraryFromFile()
{
    fstream file;
    file.open("library.txt", ios::in);
    file >> libraryCount;
    for (int i = 0; i < libraryCount; i++)
    {
        file >> library[i];
    }
    file.close();
}

void showHeader();

void adminLogin();
void adminMenu();
void adminShowGames();
void adminAddGame();
void adminUpdatePrice();
void adminDeleteGame();
void adminSearchGame();
void adminSortGames();
void adminTotalSales();
void adminMostPopular();

void userSignUp();
bool userLogin();
void userViewGames();
void userBuyGame();
void userRefundGame();
void userViewLibrary();
void userSearchGame();
void userSortLibrary();
void userViewHistory();
void userMenu();
void userArea();

main()
{
    loadGamesFromFile();
    loadUsersFromFile();
    loadLibraryFromFile();

    system("cls");
    system("color 60");
    showHeader();
    cout << "\n\tWELCOME IN THE HEAVEN OF GAMES." << endl;
    cout << "\tHERE YOU CAN BUY DIFFERENT TYPE OF GAMES" << endl;
    cout << "\n\n\tPress Any Key To Continue......";
    getch();

    while (true)
    {
        system("cls");
        system("color 60");
        showHeader();

        cout << "\n  1. Admin";
        cout << "\n  2. User";
        cout << "\n  0. Exit";

        cout << "\n\n Select An Option : ";
        string mainOption;
        cin >> mainOption;

        if (mainOption == "1")
        {
            adminLogin();
        }
        else if (mainOption == "2")
        {
            userArea();
        }
        else if (mainOption == "0")
        {
            cout << "Thank You For Using Our Game Store Application!\nBe Proud To Be A Gamer :) ";
            system("color 07"); // i am using this to turn the cmd color black so it actually feels like its closed 
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

void showHeader()
{
    cout << "---------------------------------------------------" << endl;
    cout << "-------------- JAPANESE GAME STORE ----------------" << endl;
    cout << "---------------------------------------------------" << endl;
}

void adminLogin()
{
    for (int i = 3; i > 0; i--)
    {
        system("cls");
        system("color C0");
        showHeader();

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
            adminMenu();
            break;
        }
        else
        {
            cout << "Wrong Login.\nAttempts Left : " << i - 1;
            getch();
        }
    }
}

void adminMenu()
{
    while (true)
    {
        system("cls");
        showHeader();
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
            adminShowGames();
        }
        else if (adminOption == "2") 
        {
            adminAddGame();
        }
        else if (adminOption == "3")
        { 
            adminUpdatePrice();
        }
        else if (adminOption == "4") 
        {
            adminDeleteGame();
        }
        else if (adminOption == "5") 
        {
            adminSearchGame();
        }
        else if (adminOption == "6") 
        {
            adminSortGames();
        }
        else if (adminOption == "7") 
        {
            adminTotalSales();
        }
        else if (adminOption == "8") 
        {
            adminMostPopular();
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
}

void adminShowGames()
{
    system("cls");
    showHeader();
    cout << "\nShowing All Available Games\n\n";
    for (int i = 0; i < gameCount; i++)
    {
        cout << i + 1 << "." << gameNames[i] << "   ------  Rs." << gamePrices[i] << endl;
    }
}

void adminAddGame()
{
    system("cls");
    showHeader();
    cout << "\nEnter Game Name : ";
    cin >> gameNames[gameCount];
    cout << "Enter Game Price : ";
    cin >> gamePrices[gameCount];
    gameCount++;
    saveGamesToFile(); 
    cout << "Game Name And Price Has Been Added Successfully.";
}

void adminUpdatePrice()
{
    system("cls");
    showHeader();
    cout << "Showing All Available Games\n\n";
    for (int i = 0; i < gameCount; i++)
    {
        cout << i + 1 << "." << gameNames[i] << " ----- Rs." << gamePrices[i] << endl;
    }

    int n;
    cout << "\nEnter Game Number : ";
    cin >> n;
    cout << "\nOld Price For This Game Is : Rs" << gamePrices[n - 1]; // minus 1 cuz index starts with 0
    cout << "\nEnter New Price For This Game : ";
    cin >> gamePrices[n - 1];
    saveGamesToFile(); // price willl be updated as well in file
    cout << "\nGame Price Has Been Updated Successfully.";
}

void adminDeleteGame()
{
    system("cls");
    showHeader();
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
    saveGamesToFile();

    cout << "\nGame Has Been Deleted Successfully.";
}

void adminSearchGame()
{
    system("cls");
    showHeader();
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

void adminSortGames()
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
    saveGamesToFile();
    cout << "\nGames List Has Been Sorted In An Accending Order Of Price.";
}

void adminTotalSales()
{
    int total = 0;
    for (int i = 0; i < gameCount; i++)
    {
        total = total + (gamePrices[i] * gameSold[i]);
    }
    cout << "\nTotal Sales Are : Rs." << total << endl;
}

void adminMostPopular()
{
    //might not work properly cuz double user entries are not fully programmed yet i am working on it
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

void userArea()
{
    while (true)
    {
        system("cls");
        system("color 90");
        showHeader();

        cout << "\n   1. Sign Up" << endl;
        cout << "   2. Login" << endl;
        cout << "   0. Exit" << endl;

        string userOption;
        cout << "\nChoose An Option : ";
        cin >> userOption;

        if (userOption == "1")
        {
            userSignUp();
        }
        else if (userOption == "2")
        {
            bool found = userLogin();

            if (found = true)
            {
                cout << "\nLogin Successfull!";
                cout << "\nPress Any Key To Continue.....";
                getch();
                userMenu();
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

void userSignUp()
{
    cout << "\nUsername : ";
    cin >> usernames[userIndex];
    cout << "Password : ";
    cin >> passwords[userIndex];
    saveUserToFile(usernames[userIndex], passwords[userIndex]);
    userIndex++;
    cout << "\nAccount Created!";
    getch();
}

bool userLogin()
{
    string userUsername;
    string userPassword;

    cout << "\nEnter Your Username : ";
    cin >> userUsername;
    cout << "Enter Your Password : ";
    cin >> userPassword;

    for (int i = 0; i < userIndex; i++)
    {
        if (usernames[i] == userUsername && passwords[i] == userPassword)
        {
            currentUser = i;
            return true;
        }
    }
    return false;
}

void userMenu()
{
    while (true)
    {
        system("cls");
        system("color 90");
        showHeader();

        cout << "\n--- " << usernames[currentUser] << "'s Account ---\n\n";
        cout << " 1. View Games" << endl;
        cout << " 2. Buy Game" << endl;
        cout << " 3. Refund Game" << endl;
        cout << " 4. Your Library" << endl;
        cout << " 5. Search Game" << endl;
        cout << " 6. Sort Games Library" << endl;
        cout << " 7. Apply Coupon" << endl;
        cout << " 8. History Of Purchased Games" << endl;
        cout << " 9. Account Settings (Warning! Option Available Right Now)" << endl;
        cout << "10. Check Wallet (Warning! Option Available Right Now)" << endl;
        cout << " 0. Exit" << endl;

        string userAccountOption;
        cout << "\nChoose An Option : ";
        cin >> userAccountOption;

        if (userAccountOption == "1") 
        {
            userViewGames();
        }
        else if (userAccountOption == "2") 
        {
            userBuyGame();
        }
        else if (userAccountOption == "3") 
        {
            userRefundGame();
        }
        else if (userAccountOption == "4") 
        {
            userViewLibrary();
        }
        else if (userAccountOption == "5") 
        {
            userSearchGame();
        }
        else if (userAccountOption == "6") 
        {
            userSortLibrary();
        }
        else if (userAccountOption == "7")
        {
            cout << "\nUse Coupon While Buying.\n\n'SAVE10' For 10 Percent Discount.\n 'SAVE20' For 20 Percent Discount.";
        }
        else if (userAccountOption == "8") 
        {
            userViewHistory();
        }
        else if (userAccountOption == "9")
        {
            system("cls");
            showHeader();
            cout << "\n You Can Change Your Username And Password Here." << endl;
            cout << "\nUnfortunately This Option Is Not Available Right Now" << endl;
        }
        else if (userAccountOption == "10")
        {
            system("cls");
            showHeader();
            cout << "\n You Can See Your Wallet Balance And Top Up Your Balance Here" << endl;
            cout << "\nUnfortunately This Option Is Not Available Right Now" << endl;
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

void userViewGames()
{
    system("cls");
    showHeader();
    cout << "\n--- " << usernames[currentUser] << "'s Account ---\n\n";
    for (int i = 0; i < gameCount; i++)
    {
        cout << i + 1 << ". " << gameNames[i] << " ---- " << gamePrices[i] << endl;
    }
}

void userBuyGame()
{
    system("cls");
    showHeader();
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
        cout << "Enter Coupon (or None) : ";
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

        saveLibraryToFile();

        cout << "Game Bought After Discount Only For : Rs" << price << endl;
    }
}

void userRefundGame()
{
    system("cls");
    showHeader();
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
    saveLibraryToFile();
}

void userViewLibrary()
{
    system("cls");
    showHeader();
    for (int i = 0; i < libraryCount; i++)
    {
        cout << gameNames[library[i]] << endl;
    }
}

void userSearchGame()
{
    system("cls");
    showHeader();
    cout << "Enter Game Name : ";
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

void userSortLibrary()
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

void userViewHistory()
{
    system("cls");
    showHeader();
    cout << "Your Recent Purchases Are:\n";
    for (int i = 0; i < historyCount; i++)
    {
        cout << i + 1 << ". " << gameNames[history[i]] << endl;
    }
}
