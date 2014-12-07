#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;

void ADDITION(){
	/*int choice;

	int TRIES_ARITHMETIC[5]={0,0,0,0,0}, CORRECT_ARITHMETIC[5]={0,0,0,0,0};*/

	int a = rand() % 100;
	int b = rand() % 100;
	double ans;
	for (int i = 0; i <= 4; i++){
		cout << endl;
		cout << "Let us work on addition problems.\n\n";
		cout << "What is the answer to " << a;
		cout << " + ";
		cout << b;
		cout << " ?\n\n";
		cout << "Answer: ";
		cin >> ans;
		cout << "Your answer: " << ans << endl;
		if (ans == a + b)
		{
			cout << "You passed.\n";
			CORRECT_ARITHMETIC[choice]++;
		}
		else
		{
			cout << "Sorry, nope.\n";
			cout << "Correct answer: " << a + b << endl;
			TRIES_ARITHMETIC[choice] ++;
		}
		cout << endl;
		cout << "---------------------------------------\n";
		a = rand() % 100;
		b = rand() % 100;
	}
}//REFACTORING
void SUBTRACTION(){
	/*int choice;

	int TRIES_ARITHMETIC[5]={0,0,0,0,0}, CORRECT_ARITHMETIC[5]={0,0,0,0,0};*/

	int a = rand() % 100;
	int b = rand() % 100;
	double ans;
	for (int i = 0; i <= 4; i++){
		cout << endl;
		cout << "Let us work on subtraction problems.\n\n";
		cout << "What is the answer to ";
		cout << a;
		cout << " - ";
		cout << b;
		cout << "?\n\n";
		cout << "Answer: ";
		cin >> ans;
		cout << "Your answer: " << ans << endl;
		if (ans == a - b)
		{
			cout << "You passed.\n";
			CORRECT_ARITHMETIC[choice]++;
		}
		else
		{
			cout << "Sorry, nope.\n";
			cout << "Correct answer: " << a - b << endl;
			TRIES_ARITHMETIC[choice] ++;
		}
		cout << endl;
		cout << "---------------------------------------\n";
		a = rand() % 100;
		b = rand() % 100;
	}
}//REFACTORING
void MULTIPLICATION(){
	/*int choice;

	int TRIES_ARITHMETIC[5]={0,0,0,0,0}, CORRECT_ARITHMETIC[5]={0,0,0,0,0};*/

	int a = rand() % 100;
	int b = rand() % 100;
	double ans;
	for (int i = 0; i <= 4; i++){
		cout << endl;
		cout << "Let us work on multiplication problems.\n\n";
		cout << "What is the answer to ";
		cout << a;
		cout << " * ";
		cout << b;
		cout << "?\n\n";
		cout << "Answer: ";
		cin >> ans;
		cout << "Your answer: " << ans << endl;
		if (ans == a * b)
		{
			cout << "You passed.\n";
			CORRECT_ARITHMETIC[choice]++;
		}
		else
		{
			cout << "Sorry, nope.\n";
			cout << "Correct answer: " << a * b << endl;
			TRIES_ARITHMETIC[choice] ++;
		}
		cout << endl;
		cout << "---------------------------------------\n";
		a = rand() % 100;
		b = rand() % 100;
	}
}//REFACTORING
void DIVISION(){
	/*int choice;

	int TRIES_ARITHMETIC[5]={0,0,0,0,0}, CORRECT_ARITHMETIC[5]={0,0,0,0,0};*/

	double a = rand() % 100;
	double b = rand() % 100 + 1;
	double ans;
	for (int i = 0; i <= 4; i++){
		cout << endl;
		cout << "Let us work on division problems.\n\n";
		cout << "What is the answer to ";
		cout << a;
		cout << " / ";
		cout << b;
		cout << "?\n\n";
		cout << "Answer to three decimal places: \n";
		cin >> ans;
		cout << "Your answer: " << ans << endl;
		double diff = (ans - (a / b));
		if (diff > -0.001 && diff < 0.001)
		{
			cout << "Close Enough. You passed.\n";
			CORRECT_ARITHMETIC[choice]++;
		}
		else
		{
			cout << "Sorry, nope.\n";
			cout << "Correct answer: " << a / b << endl;
			TRIES_ARITHMETIC[choice] ++;
		}
		cout << "---------------------------------------\n";
		a = rand() % 100;
		b = rand() % 100 + 1;
	}
}//REFACTORING