#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;
//int main_choice, choice, name;

void ARITHMETIC_MENU(){
	while (true)
	{
		cout << "Select what you would like to study from the list below: \n";
		cout << endl;
		cout << "1) Addition\n";
		cout << "2) Subtraction\n";
		cout << "3) Multiplication\n";
		cout << "4) Division\n";
		cout << "5) Retry incorect problems\n";
		cout << "6) Exit to Main Menu\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, 5 or 6: ";
		cin >> choice;
		cout << "---------------------------------------\n";
		switch (choice) {
		case 1: //Do the addition problem
		{ADDITION(); }
			break;
		case 2: //Do the subtraction problem
		{SUBTRACTION(); }
			break;
		case 3: //Do the multiplication problem
		{MULTIPLICATION(); }
			break;
		case 4: //Do the division problem
		{DIVISION(); }
			break;
		case 5: //Redo the incorrect problem
		{RETRY_ARITHMETIC(); }
			break;
		case 6: //Exit the program & report
		{REPORT_ARITHMETIC();
		MAIN_MENU(); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, 5, or 6\n";
		}
	}
}//REFACTORING
void PERIMETER_MENU(){
	while (true)
	{
		cout << "Select what shape you would like to study from the list below: \n";
		cout << endl;
		cout << "1) Circle\n";
		cout << "2) Triangle\n";
		cout << "3) Square\n";
		cout << "4) Rectangle\n";
		cout << "5) Pentagon\n";
		cout << "6) Hexagon\n";
		cout << "7) Octagon\n";
		cout << "8) Retry incorrect problems\n";
		cout << "9) Exit to Main Menu\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7, 8, or 9: ";
		cin >> choice;
		cout << "---------------------------------------\n";
		switch (choice) {
		case 1: //Do the addition problem
		{PERIMETER_CIRCLE(); }
			break;
		case 2: //Do the subtraction problem
		{PERIMETER_TRIANGLE(); }
			break;
		case 3: //Do the multiplication problem
		{PERIMETER_SQUARE(); }
			break;
		case 4: //Do the division problem
		{PERIMETER_RECTANGLE(); }
			break;
		case 5: //Do the division problem
		{PERIMETER_PENTAGON(); }
			break;
		case 6: //Do the division problem
		{PERIMETER_HEXAGON(); }
			break;
		case 7: //Do the division problem
		{PERIMETER_OCTAGON(); }
			break;
		case 8: //Redo the incorrect problem
		{RETRY_PERIMETER(); }
			break;
		case 9: //Report & exit the program to the main menu
		{REPORT_PERIMETER();
		MAIN_MENU(); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, 8, or 9\n";
		}
	}
}
void AREA_MENU(){
	while (true)
	{
		cout << "Select what area you would like to study from the list below: \n";
		cout << endl;
		cout << "1) Circle\n";
		cout << "2) Triangle\n";
		cout << "3) Square\n";
		cout << "4) Rectangle\n";
		cout << "5) Trapezoid\n";
		cout << "6) Parallelogram\n";
		cout << "7) Retry incorect problems\n";
		cout << "8) Exit to Main Menu\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7 or 8: ";
		cin >> choice;
		cout << "---------------------------------------\n";
		switch (choice) {
		case 1: //Do the addition problem
		{AREA_CIRCLE(); }
			break;
		case 2: //Do the subtraction problem
		{AREA_TRIANGLE(); }
			break;
		case 3: //Do the multiplication problem
		{AREA_SQUARE(); }
			break;
		case 4: //Do the division problem
		{AREA_RECTANGLE(); }
			break;
		case 5: //Do the division problem
		{AREA_TRAPEZOID(); }
			break;
		case 6: //Do the division problem
		{AREA_PARALLELOGRAM(); }
			break;
		case 7: //Redo the incorrect problem
		{RETRY_AREA(); }
			break;
		case 8: //Report & exit the program to the main menu
		{REPORT_AREA();
		MAIN_MENU(); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, or 8\n";
		}
	}
}
void VOLUME_MENU(){
	while (true)
	{
		cout << "Select what volume you would like to study from the list below: \n";
		cout << endl;
		cout << "1) Sphere\n";
		cout << "2) Cylinder\n";
		cout << "3) Cube\n";
		cout << "4) Regular Triangular prisms\n";
		cout << "5) Regular Rectangular prisms\n";
		cout << "6) Cones\n";
		cout << "7) Retry incorect problems\n";
		cout << "8) Exit to Main Menu\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7, or 8: ";
		cin >> choice;
		cout << "---------------------------------------\n";
		switch (choice) {
		case 1: //Do the addition problem
		{VOLUME_SPHERE(); }
			break;
		case 2: //Do the subtraction problem
		{VOLUME_CYLINDER(); }
			break;
		case 3: //Do the multiplication problem
		{VOLUME_CUBE(); }
			break;
		case 4: //Do the division problem
		{VOLUME_REGULAR_TRIANGLULAR_PRISMS(); }
			break;
		case 5: //Do the division problem
		{VOLUME_REGULAR_RECTANGULAR_PRISMS(); }
			break;
		case 6: //Do the division problem
		{VOLUME_CONES(); }
			break;
		case 7: //Redo the incorrect problem
		{RETRY_VOLUME(); }
			break;
		case 8: //Report & exit the program to the main menu
		{REPORT_VOLUME();
		MAIN_MENU(); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, or 8\n";
		}
	}
}
void RETRY_MENU(){
	while (true){
		cout << "RETRY MENU:\n";
		cout << "Select what subject you would like to retry from the list below: \n";
		cout << endl;
		cout << "1) Arithmetic\n";
		cout << "2) Perimeter\n";
		cout << "3) Area\n";
		cout << "4) Volume\n";
		cout << "5) Exit to Main Menu\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, or 5: ";
		cin >> main_choice;
		cout << "---------------------------------------\n";
		switch (main_choice) {
		case 1: //Do the arithmetic problem
		{ARITHMETIC_MENU(); }
			break;
		case 2: //Do the perimeter problem
		{PERIMETER_MENU(); }
			break;
		case 3: //Do the area problem
		{AREA_MENU(); }
			break;
		case 4: //Do the volume problem
		{VOLUME_MENU(); }
			break;
		case 5: //Exit the program to the main menu
		{MAIN_MENU(); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, or 5\n";
		}
	}
}
void MAIN_MENU(){
	while (true){
		cout << "MAIN MENU:\n";
		cout << "Select what subject you would like to study from the list below: \n";
		cout << endl;
		cout << "1) Arithmetic\n";
		cout << "2) Perimeter\n";
		cout << "3) Area\n";
		cout << "4) Volume\n";
		cout << "5) Retry incorrect problems\n";
		cout << "6) View Scores\n";
		cout << "7) Exit\n";
		cout << "---------------------------------------\n";
		cout << "Enter your choice: 1, 2, 3, 4, 5, 6, or 7: ";
		cin >> main_choice;
		cout << "---------------------------------------\n";
		switch (main_choice) {
		case 1: //Do the arithmetic problem
		{ARITHMETIC_MENU(); }
			break;
		case 2: //Do the perimeter problem
		{PERIMETER_MENU(); }
			break;
		case 3: //Do the area problem
		{AREA_MENU(); }
			break;
		case 4: //Do the volume problem
		{VOLUME_MENU(); }
			break;
		case 5: //Redo the incorrect problem
		{RETRY_MENU(); }
			break;
		case 6: //View Scores
		{SCORE_REPORT(); }
			break;
		case 7: //Exit the program
		{cout << "\nHave a nice day!\n\n";
		exit(0); }
		default:
			cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, or 7\n";
		}
	}
}