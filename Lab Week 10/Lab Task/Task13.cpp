#include <iostream>
using namespace std;
const int MAX = 100;

bool login();
void menue();
void addStudent(string names[], int ages[], int &count);
void viewStudents(string names[], int ages[], int count);
void addCourse(string courses[], int &courseCount);

int main()
{
    if (!login())
        return 0;

    string studentNames[MAX];
    int studentAges[MAX];
    string courses[MAX];

    
    int studentCount = 0;
    int courseCount = 0;
    int choice;
    while (true)
    {
        menue();
        cin >> choice;

        if (choice == 1)
        {
            addStudent(studentNames, studentAges, studentCount);
        }
        else if (choice == 2)
        {
            viewStudents(studentNames, studentAges, studentCount);
        }
        else if (choice == 3)
        {
            addCourse(courses, courseCount);
        }
        else if (choice == 4)
        {
            cout << "Exiting..." << endl;
            return 0;
        }
        else
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}
bool login()
{
    string username, password;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if (username == "admin" && password == "password")
        {
            cout << "Login successful!" << endl;
            return true;
        }
        else
        {
            cout << "Wrong login credentials. Please try again." << endl;
        }
    }
    cout << " Too many failed attempts. Program End." << endl;
    return false;
}
void menue()
{
    cout << "\n------University Management System------" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Add Course" << endl;
    cout << "4. Exit " << endl;
    cout << " Enter Choice: ";
}

void addStudent(string names[], int ages[], int &count)
{
    if (count >= MAX)
    {
        cout << "Storage Full!." << endl;
        return;
    }
    cout << "Enter student name: ";
    cin >> names[count];
    cout << "Enter student age: ";
    cin >> ages[count];
    count++;
    cout << "Student added successfully!" << endl;
}
void viewStudents(string names[], int ages[], int count)
{
    if (count == 0)
    {
        cout << "No students record found." << endl;
        return;
    }
    cout << "\n------Student List------" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Age: " << ages[i] << endl;
        cout << "-----------------------" << endl;
    }
}
void addCourse(string courses[], int &courseCount)
{
    if (courseCount >= MAX)
    {
        cout << "Storage Full!." << endl;
        return;
    }
    cout << "Enter course name: ";
    cin >> courses[courseCount];
    courseCount++;
    cout << "Course added successfully!" << endl;
}