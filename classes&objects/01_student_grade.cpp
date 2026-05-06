#include<iostream>
using namespace std;
class Student {
    private:
    string name;
    int rollNo;
    float marks;
    public:
    Student(string n, int r, float m){
        name = n;
        rollNo = r;
 
    if(m >= 0 && m <= 100){
        marks = m;
    }
    else {
        cout << "Invalid marks! Setting to 0.\n";
        marks = 0;
    }
    }
    char calculateGrade(){
         if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else return 'F';
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};
int main(){
        Student s1("Ali", 101, 99);
        s1.display();

    return 0;
}
