#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[50];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> s[i].roll;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\n--- Student Records ---\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll: " << s[i].roll
             << ", Name: " << s[i].name
             << ", Marks: " << s[i].marks << endl;
    }

    return 0;
}
