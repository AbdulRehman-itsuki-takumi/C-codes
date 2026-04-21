#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    //this code is completely written by me no ai is used
    //some ideas are totally mine like color chaning and cls using in some places
    int total_students = 1000;
    int index = 0;
    int seats_CS = 2;
    int seats_CE = 2;
    int seats_EE = 2;

    string stu_names[total_students];
    int stu_age[total_students];
    float stu_matric_marks[total_students];
    float stu_inter_marks[total_students];
    float stu_ecat_marks[total_students];
    float stu_aggregate[total_students];
    string stu_pref1[total_students];
    string stu_pref2[total_students];
    string stu_pref3[total_students];
    string stu_department[1000]; // to store allocated department

    while (true)
    {
        system("cls");
        system("color 60");
        cout << "---------------------------------------------------" << endl;
        cout << "--------- UNIVERSITY MANAGEMENT SYSTEM ------------" << endl;
        cout << "---------------------------------------------------" << endl;

        cout << "\n------USER MENU------" << endl;
        cout << "\n  1--> Admin" << endl;
        cout << "  2--> Student" << endl;
        cout << "  3--> Exit" << endl;

        cout << "  Select An Option : ";
        string userOption;
        cin >> userOption;
        cout << "\nYou Choosed " << userOption << endl;

        if (userOption == "1")
        {
            // Admin Code
            for (int i = 3; i > 0; i--)
            {
                system("cls");
                system("color C0");
                // Admin Menu Code
                cout << "---------------------------------------------------" << endl;
                cout << "--------- UNIVERSITY MANAGEMENT SYSTEM ------------" << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "\n       WELCOME TO ADMIN LOGIN MENU.\n"
                     << endl;

                // Login Area
                cout << " Enter Username : ";
                string username;
                cin >> username;
                cout << " Enter Password : ";
                string password;
                cin >> password;

                if (username == "Admin" && password == "1234")
                {
                    cout << " Login Successfull\n";
                    cout << "Press Any Button To Continue . . . .";
                    getch();

                    while (true)
                    {
                        // After Successfull Login Code
                        system("cls");
                        system("color C0");
                        cout << "---------------------------------------------------" << endl;
                        cout << "--------- UNIVERSITY MANAGEMENT SYSTEM ------------" << endl;
                        cout << "---------------------------------------------------" << endl;

                        cout << "\n\t------ ADMIN MENU ------" << endl;
                        cout << "\n  1--> Show All Students Data" << endl;
                        cout << "  2--> Search Any Student" << endl;
                        cout << "  3--> Update Student Records" << endl;
                        cout << "  4--> Generate Merit List" << endl;
                        cout << "  5--> Delete Student Record" << endl;
                        cout << "  6--> Allocate Seats For Departments" << endl;
                        cout << "  7--> Exit To The Main Menu" << endl;
                        cout << "\n Select An Option : ";
                        string adminOption;
                        cin >> adminOption;
                        cout << endl;
                        // Admin MEnu Option Code
                        if (adminOption == "1")
                        {
                            // show all students records
                            cout << "--------------------------------------ALL STUDENTS RECORDS-------------------------------------" << endl;
                            cout << "\nNAME     \tAGE\tMATRIC\tINTER\tECAT\tPREF1\tPREF2\tPREF3\tAGGREGATE" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (stu_names[i] != "")
                                {
                                    cout << stu_names[i] << "     \t" << stu_age[i] << "\t" << stu_matric_marks[i] << "\t" << stu_inter_marks[i] << "\t"
                                         << stu_ecat_marks[i] << "\t" << stu_pref1[i] << "\t" << stu_pref2[i] << "\t" << stu_pref3[i] << "\t" << stu_aggregate[i] << "\n";
                                }
                            }
                        }
                        else if (adminOption == "2")
                        {
                            // search any student
                            cout << "--------------------------------------ALL STUDENTS RECORDS-------------------------------------" << endl;
                            cout << "\n Enter The Student Name You Want To Find : ";
                            string name;
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (stu_names[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "\nThere Is No Data Available For The Student Name : " << name << endl;
                            }
                            else
                            {
                                cout << "\nNAME     \tAGE\tMATRIC\tINTER\tECAT\tPREF1\tPREF2\tPREF3\tAGGREGATE" << endl;
                                cout << stu_names[foundindex] << "     \t" << stu_age[foundindex] << "\t" << stu_matric_marks[foundindex] << "\t" << stu_inter_marks[foundindex] << "\t"
                                     << stu_ecat_marks[foundindex] << "\t" << stu_pref1[foundindex] << "\t" << stu_pref2[foundindex] << "\t" << stu_pref3[foundindex] << "\t" << stu_aggregate[foundindex] << "\n";
                            }
                        }
                        else if (adminOption == "3")
                        {
                            // update student records
                            cout << "--------------------------------------ALL STUDENTS RECORDS-------------------------------------" << endl;
                            cout << "\n Enter The Student Name You Want To Update Record : ";
                            string name;
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (stu_names[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "No Record Available For The Student Name : " << name << endl;
                            }
                            else
                            {
                                cout << "\nNAME     \tAGE\tMATRIC\tINTER\tECAT\tPREF1\tPREF2\tPREF3\tAGGREGATE" << endl;
                                cout << stu_names[foundindex] << "     \t" << stu_age[foundindex] << "\t" << stu_matric_marks[foundindex] << "\t" << stu_inter_marks[foundindex] << "\t"
                                     << stu_ecat_marks[foundindex] << "\t" << stu_pref1[foundindex] << "\t" << stu_pref2[foundindex] << "\t" << stu_pref3[foundindex] << "\t" << stu_aggregate[foundindex] << "\n";

                                cout << "\n-----------NOW PLEASE ENTER THE UPDATED DATA-----------" << endl;
                                cout << "\n  Enter Your Name : ";
                                string name;
                                cin >> name;
                                cout << "  Enter Your Age : ";
                                int age;
                                cin >> age;
                                cout << "  Enter Your Matric Marks : ";
                                float matric_marks;
                                cin >> matric_marks;
                                cout << "  Enter Your Intermediate Marks : ";
                                float inter_marks;
                                cin >> inter_marks;
                                cout << "  Enter Your Ecat Marks : ";
                                float ecat_marks;
                                cin >> ecat_marks;
                                cout << "\nNow Please Enter Your Subject Prefrences From The Options Available Below\n";
                                cout << "Available Subjects Are\n1. CS\n2. CE\n3. EE\n\n";

                                string pref1;
                                string pref2;
                                string pref3;

                                while (true)
                                {
                                    cout << "  Enter Your 1st Prefrence : ";
                                    cin >> pref1;
                                    if (pref1 == "CS" || pref1 == "CE" || pref1 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                                    }
                                }
                                while (true)
                                {
                                    cout << "  Enter Your 2nd Prefrence : ";
                                    cin >> pref2;
                                    if (pref2 == "CS" || pref2 == "CE" || pref2 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                                    }
                                }
                                while (true)
                                {
                                    cout << "  Enter Your 3rd Prefrence : ";
                                    cin >> pref3;
                                    if (pref3 == "CS" || pref3 == "CE" || pref3 == "EE")
                                    {
                                        break;
                                    }
                                    else
                                    {
                                        cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                                    }
                                }

                                // assigning values to arrays
                                stu_names[foundindex] = name;
                                stu_age[foundindex] = age;
                                stu_matric_marks[foundindex] = matric_marks;
                                stu_inter_marks[foundindex] = inter_marks;
                                stu_ecat_marks[foundindex] = ecat_marks;
                                stu_pref1[foundindex] = pref1;
                                stu_pref2[foundindex] = pref2;
                                stu_pref3[foundindex] = pref3;
                                stu_aggregate[foundindex] = (ecat_marks / 400) * 33 + (matric_marks / 1100) * 17 + (inter_marks / 560) * 50;

                                cout << "\nLoading . . . .\n\nYour Data Has Been Updated";
                            }
                        }
                        else if (adminOption == "4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (stu_aggregate[i] < stu_aggregate[j])
                                    {
                                        // swap names
                                        string temp_name = stu_names[i];
                                        stu_names[i] = stu_names[j];
                                        stu_names[j] = temp_name;

                                        // swap age
                                        int temp_age = stu_age[i];
                                        stu_age[i] = stu_age[j];
                                        stu_age[j] = temp_age;

                                        // swap matric marks
                                        float temp_matric = stu_matric_marks[i];
                                        stu_matric_marks[i] = stu_matric_marks[j];
                                        stu_matric_marks[j] = temp_matric;

                                        // swap inter marks
                                        float temp_inter = stu_inter_marks[i];
                                        stu_inter_marks[i] = stu_inter_marks[j];
                                        stu_inter_marks[j] = temp_inter;

                                        // swap ecat marks
                                        float temp_ecat = stu_ecat_marks[i];
                                        stu_ecat_marks[i] = stu_ecat_marks[j];
                                        stu_ecat_marks[j] = temp_ecat;

                                        // swap aggregate
                                        float temp_aggregate = stu_aggregate[i];
                                        stu_aggregate[i] = stu_aggregate[j];
                                        stu_aggregate[j] = temp_aggregate;

                                        // swap pref1
                                        string temp_pref1 = stu_pref1[i];
                                        stu_pref1[i] = stu_pref1[j];
                                        stu_pref1[j] = temp_pref1;

                                        // swap pref2
                                        string temp_pref2 = stu_pref2[i];
                                        stu_pref2[i] = stu_pref2[j];
                                        stu_pref2[j] = temp_pref2;

                                        // swap pref1
                                        string temp_pref3 = stu_pref3[i];
                                        stu_pref3[i] = stu_pref3[j];
                                        stu_pref3[j] = temp_pref3;
                                    }
                                }
                            }
                            // Reset seats (important if run multiple times)
                            int temp_CS = seats_CS;
                            int temp_CE = seats_CE;
                            int temp_EE = seats_EE;

                            for (int i = 0; i < index; i++)
                            {
                                stu_department[i] = "Not Allocated";

                                // Check Preference 1
                                if (stu_pref1[i] == "CS" && temp_CS > 0)
                                {
                                    stu_department[i] = "CS";
                                    temp_CS--;
                                }
                                else if (stu_pref1[i] == "CE" && temp_CE > 0)
                                {
                                    stu_department[i] = "CE";
                                    temp_CE--;
                                }
                                else if (stu_pref1[i] == "EE" && temp_EE > 0)
                                {
                                    stu_department[i] = "EE";
                                    temp_EE--;
                                }

                                // Check Preference 2
                                else if (stu_pref2[i] == "CS" && temp_CS > 0)
                                {
                                    stu_department[i] = "CS";
                                    temp_CS--;
                                }
                                else if (stu_pref2[i] == "CE" && temp_CE > 0)
                                {
                                    stu_department[i] = "CE";
                                    temp_CE--;
                                }
                                else if (stu_pref2[i] == "EE" && temp_EE > 0)
                                {
                                    stu_department[i] = "EE";
                                    temp_EE--;
                                }

                                // Check Preference 3
                                else if (stu_pref3[i] == "CS" && temp_CS > 0)
                                {
                                    stu_department[i] = "CS";
                                    temp_CS--;
                                }
                                else if (stu_pref3[i] == "CE" && temp_CE > 0)
                                {
                                    stu_department[i] = "CE";
                                    temp_CE--;
                                }
                                else if (stu_pref3[i] == "EE" && temp_EE > 0)
                                {
                                    stu_department[i] = "EE";
                                    temp_EE--;
                                }
                            }

                            cout << "--------------------------------------ALL STUDENTS RECORDS-------------------------------------" << endl;
                            cout << "\nNAME\tAGE\tAGGREGATE\tDEPARTMENT" << endl;

                            for (int i = 0; i < index; i++)
                            {
                                if (stu_names[i] != "")
                                {
                                    cout << stu_names[i] << "\t"
                                         << stu_age[i] << "\t"
                                         << stu_aggregate[i] << "\t\t"
                                         << stu_department[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == "5")
                        {
                            // Delete Student Record
                            cout << "--------------------------------------ALL STUDENTS RECORDS-------------------------------------" << endl;
                            cout << "\n Enter The Student Name You Want To Delete Record : ";
                            string name;
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (stu_names[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                stu_names[foundindex] = "";
                                stu_age[foundindex] = 0;
                                stu_matric_marks[foundindex] = 0;
                                stu_inter_marks[foundindex] = 0;
                                stu_ecat_marks[foundindex] = 0;
                                stu_aggregate[foundindex] = 0;
                                stu_pref1[foundindex] = "";
                                stu_pref2[foundindex] = "";
                                stu_pref3[foundindex] = "";
                                cout << "\nThe Record Of Student " << name << " Has Been Deleted.";
                            }
                            else
                            {
                                cout << "Record With This Name Not Found." << endl;
                            }
                        }
                        else if (adminOption == "6")
                        {
                            cout << "\nEnter Seats For CS : ";
                            cin >> seats_CS;

                            cout << "Enter Seats For CE : ";
                            cin >> seats_CE;

                            cout << "Enter Seats For EE : ";
                            cin >> seats_EE;

                            cout << "\nSeats Updated Successfully!";
                        }
                        else if (adminOption == "7")
                        {
                            cout << "Exiting Admin Page\n";
                            cout << "\nLoading . . . .\n";
                            break;
                        }
                        else
                        {
                            cout << "Invalid Option.\nPlease Enter The Right Option" << endl;
                        }
                        cout << "\nPress Any Button To Continue. . . . .";
                        getch();
                    }
                    cout << "\nPress Any Button To Continue. . . . .";
                    getch();
                    break;
                }
                else
                {
                    cout << " \nWrong Username Or Password\n";
                    cout << " Please Try Again\n";
                    cout << " Attempts Left : " << i - 1 << endl;
                    cout << " Password Hint : 1***\n";
                    cout << "Press Any Key To Conitnue . . . . ";
                }

                getch();
            }
        }
        else if (userOption == "2")
        {
            // Student Code
            system("cls");
            system("color 90");
            // Taking data From Student
            cout << "---------------------------------------------------" << endl;
            cout << "--------- UNIVERSITY MANAGEMENT SYSTEM ------------" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "\n       WELCOME TO UNIVERSITY MANAGEMENT SYSTEM.\n"
                 << endl;

            cout << "  Enter Your Name : ";
            string name;
            cin >> name;
            cout << "  Enter Your Age : ";
            int age;
            cin >> age;
            cout << "  Enter Your Matric Marks : ";
            float matric_marks;
            cin >> matric_marks;
            cout << "  Enter Your Intermediate Marks : ";
            float inter_marks;
            cin >> inter_marks;
            cout << "  Enter Your Ecat Marks : ";
            float ecat_marks;
            cin >> ecat_marks;
            cout << "\nNow Please Enter Your Subject Prefrences From The Options Available Below\n";
            cout << "Available Subjects Are\n1. CS\n2. CE\n3. EE\n\n";

            string pref1;
            string pref2;
            string pref3;

            while (true)
            {
                cout << "  Enter Your 1st Prefrence : ";
                cin >> pref1;
                if (pref1 == "CS" || pref1 == "CE" || pref1 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                }
            }
            while (true)
            {
                cout << "  Enter Your 2nd Prefrence : ";
                cin >> pref2;
                if (pref2 == "CS" || pref2 == "CE" || pref2 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                }
            }
            while (true)
            {
                cout << "  Enter Your 3rd Prefrence : ";
                cin >> pref3;
                if (pref3 == "CS" || pref3 == "CE" || pref3 == "EE")
                {
                    break;
                }
                else
                {
                    cout << "\nPrefrence Not Available\nPlease Enter From The Available Options.\n\n";
                }
            }

            // assigning values to arrays
            stu_names[index] = name;
            stu_age[index] = age;
            stu_matric_marks[index] = matric_marks;
            stu_inter_marks[index] = inter_marks;
            stu_ecat_marks[index] = ecat_marks;
            stu_pref1[index] = pref1;
            stu_pref2[index] = pref2;
            stu_pref3[index] = pref3;
            stu_aggregate[index] = (ecat_marks / 400) * 33 + (matric_marks / 1100) * 17 + (inter_marks / 560) * 50;
            index++;

            cout << "\nLoading . . . .\n\nYour Data Has Been Saved\nPress Any Button For Main Menu\n";
            getch();
        }
        else if (userOption == "3")
        {
            cout << "Exiting University Management System" << endl;
            cout << "\nLoading. . . . .\n"
                 << endl;
            cout << "Thank You For Using Our Software" << endl;
            system("color 07");
            break;
        }
        else
        {
            cout << "Invalid Option.\nPlease Enter The Right Option" << endl;
            cout << "Press Any Key To Continue . . . . ";
            getch();
        }
    }
}