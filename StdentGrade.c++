#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input student details
    string name, id, batch, department;
    int semester, numSubjects;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student ID: ";
    getline(cin, id);

    cout << "Enter batch: ";
    getline(cin, batch);

    cout << "Enter department: ";
    getline(cin, department);

    cout << "Enter semester number: ";
    cin >> semester;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Input subjects and grades
    string subject;
    double totalGrades = 0.0;

    for (int i = 1; i <= numSubjects; ++i)
    {
        cout << "Enter name of subject " << i << ": ";
        cin.ignore(); // To clear the newline character left in the buffer
        getline(cin, subject);

        double grade;
        cout << "Enter grade for " << subject << ": ";
        cin >> grade;

        // Check if grade is 0.00
        if (grade == 0.00)
        {
            cout << "You will retake " << subject << "." << endl;
        }
      else{
        totalGrades += grade;
}
    }

    // Calculate average
    double average = totalGrades / numSubjects;

    // Print result
    cout << "\nStudent Details:\n"
         << "Name: " << name << "\nID: " << id << "\nBatch: " << batch << "\nDepartment: " << department << "\nSemester: " << semester << endl;

    if (average >= 0.00)
    {
        cout << "Result: Pass\n";
    }
    else
    {
        cout << "Result: Fail\n";
    }

    // Check for retake
    if (average < 50.0)
    {
        cout << "You need to retake some subjects.\n";
    }

    // Print average
    cout << "Average Grade: " << average << endl;

    return 0;
}
