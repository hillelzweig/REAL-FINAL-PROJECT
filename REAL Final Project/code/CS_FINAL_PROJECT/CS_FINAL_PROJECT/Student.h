#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string grade;
	double percentage;
public:
	Student(string newName) { name = newName; }
	Student(string newGrade) { grade = newGrade; }
	string getName(){ return name; }
	string getGrade(double percentage)
	{
		if (percentage >= 97) { grade = "A+"; cout << grade; }
		if (percentage = 96 || percentage >= 94) { grade = "A"; cout << grade; }
		if (percentage = 93 || percentage >= 90) { grade = "A-"; cout << grade; }
		if (percentage = 89 || percentage >= 87) { grade = "B+"; cout << grade; }
		if (percentage = 86 || percentage >= 84) { grade = "B"; cout << grade; }
		if (percentage = 83 || percentage >= 80) { grade = "B-"; cout << grade; }
		if (percentage = 79 || percentage >= 77) { grade = "C+"; cout << grade; }
		if (percentage = 76 || percentage >= 74) { grade = "C"; cout << grade; }
		if (percentage = 73 || percentage >= 70) { grade = "C-"; cout << grade; }
		if (percentage = 69 || percentage >= 67) { grade = "D+"; cout << grade; }
		if (percentage = 66 || percentage >= 64) { grade = "D"; cout << grade; }
		if (percentage = 63 || percentage >= 60) { grade = "D-"; cout << grade; }
		else { grade = "F"; cout << grade; }
	}
	void showStudent(Student& s)
	{
		cout << "Student " << s.getName() << " has the grade of " << s.getGrade(percentage);
		cout << endl;
	}
};




#endif