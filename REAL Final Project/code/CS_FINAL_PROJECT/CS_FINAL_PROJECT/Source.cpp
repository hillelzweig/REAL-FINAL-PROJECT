////////////////////////////
// Program Name: FINAL PROJECT
// Name: HILLEL ZWEIG & HANNES KRAHN
// Date: 12/9/2014
// Class and section: CS172-1
////////////////////////////
#include <windows.h>
#include <iostream>
#include <shlobj.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <fstream>
#include "Header.h"
#include "Student.h"
#pragma comment(lib, "shell32.lib")

using namespace std;
//REFACTORING
int main_choice, choice, name;
int TRIES_ARITHMETIC[5] = { 0, 0, 0, 0, 0 }, CORRECT_ARITHMETIC[5] = { 0, 0, 0, 0, 0 };
int TRIES_PERIMETER[8] = { 0, 0, 0, 0, 0, 0, 0, 0 }, CORRECT_PERIMETER[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
int TRIES_AREA[7] = { 0, 0, 0, 0, 0, 0, 0 }, CORRECT_AREA[7] = { 0, 0, 0, 0, 0, 0, 0 };
int TRIES_VOLUME[7] = { 0, 0, 0, 0, 0, 0, 0 }, CORRECT_VOLUME[7] = { 0, 0, 0, 0, 0, 0, 0 };
int main(Student& s){
	srand(time(NULL));
	string name, date;
	ASCII_ART();
	WELCOME();
	cout << "What is today's date?";
	getline(cin, date); //Allows users to enter the date
	cout << "What is your name? ";
	getline(cin, name); //Allows users to enter their name
	cout << endl;
	cout << "Welcome to the Hillel Zweig & Hannes Krahn Math Tutor " << name << "!\n";
	cout << endl;
	//create student object and pass in student class and date
	MAIN_MENU();
	return 0;
} 