#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

struct student
{
    string firstName;
    string lastName;
    string ID;
    string course;
    float midtermGrade;
    float finalGrade;
    float averageGrade;
};

void DisplayStudentInfo(student s)
{
    cout << "\nID: " << s.ID;
    cout << "\nName: " << s.firstName << " " << s.lastName;
    cout << "\nCourse: " << s.course;
    cout << "\nAverage: " << fixed << setprecision(2) << s.averageGrade;

    if (s.averageGrade >= 75)
        cout << "\nRemarks: PASSED" << endl;
    else
        cout << "Remarks: FAILED" << endl;
}

int main()
{
    student students[5];

    cout << "========== STUDENT RECORD SYSTEM ==========";

    for (int i = 0; i < 5; i++) {

        cout << "\nEnter Record for Student #" << i + 1 << endl;

        cout << "Student ID: ";
        getline(cin, students[i].ID);

        cout << "First Name: ";
        getline(cin, students[i].firstName);

        cout << "Last Name: ";
        getline(cin, students[i].lastName);

        cout << "Course: ";
        getline(cin, students[i].course);

        cout << "Midterm Grade: ";
        cin >> students[i].midtermGrade;

        cout << "Final Grade: ";
        cin >> students[i].finalGrade;

        cin.ignore();

        // Compute average
        students[i].averageGrade =
            (students[i].midtermGrade + students[i].finalGrade) / 2;
    }

    cout << "\n========== STUDENT RECORDS ==========" << endl;

    for (int i = 0; i < 5; i++) {
        DisplayStudentInfo(students[i]);
    }

    return 0;


}