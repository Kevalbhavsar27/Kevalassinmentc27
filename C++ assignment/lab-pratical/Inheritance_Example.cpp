#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int grade;

    void getStudentData() {
        getData();
        cout << "Enter grade: ";
        cin >> grade;
    }

    void showStudentData() {
        showData();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void getTeacherData() {
        getData();
        cout << "Enter subject: ";
        cin >> subject;
    }

    void showTeacherData() {
        showData();
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "--- Enter Student Details ---" << endl;
    s.getStudentData();

    cout << "\n--- Enter Teacher Details ---" << endl;
    t.getTeacherData();

    cout << "\n--- Student Information ---" << endl;
    s.showStudentData();

    cout << "\n--- Teacher Information ---" << endl;
    t.showTeacherData();

    
}

