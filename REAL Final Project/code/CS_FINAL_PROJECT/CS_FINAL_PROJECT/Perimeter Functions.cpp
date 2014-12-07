#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;
void PERIMETER_CIRCLE()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	int radius = rand() % 20;
	const double PI = 3.14159265;
	cout << " The Perimeter of a cirle is 2 x PI x Radius. " << endl;
	cout << endl;
	for (int circ = 0; circ <= 4; circ++)
	{
		double Result = ((2 * PI) * radius);
		double AreaC;
		cout << endl;
		cout << "What is the Perimeter of the cirlce with a radius of " << radius << "? ";
		cin >> AreaC;
		if (!(((AreaC <= (Result + .01)) && (AreaC >= (Result - 0.1)))))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}

		radius = rand() % 20;
	}
}
void PERIMETER_TRIANGLE()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "The Perimeter of a Right Triangle is the sum of all three sides." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int b = rand() % 20;
		int h = rand() % 20;
		double Per;
		Per = (((sqrt((b*b) + (h*h))) + b + h));
		double ans;
		cout << "What is the Perimeter of a Right Triangle with a Height of " << h << " and a Base of " << b << endl;
		cin >> ans;
		if (!((ans <= Per + 0.1) && (ans >= Per - 0.1)))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		b = rand() % 20;
		h = rand() % 20;
	}
}
void PERIMETER_SQUARE()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "The Perimeter of a Square is 2L + 2W." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int w = rand() % 20;
		double Per;
		Per = (4 * w);
		cout << "What is the Perimeter of a Square with a width of " << w << " and a length of " << w << endl;
		cin >> Per;
		if (!(Per == (4 * w)))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		w = rand() % 20;
	}
}
void PERIMETER_RECTANGLE()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "The Perimeter of a Rectangle is 2L + 2W." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		int w = rand() % 20;
		double AreaR;
		AreaR = ((2 * l) + (2 * w));
		cout << "What is the Perimeter of a rectangle with a width of " << w << " and a length of " << l << endl;
		cin >> AreaR;
		if (!(AreaR == ((2 * l) + (2 * w))))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		l = rand() % 20;
		w = rand() % 20;
	}
}
void PERIMETER_PENTAGON()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "A Pentagon has 5 Sides, all equal to eachother." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		double Per;
		Per = (5 * l);
		cout << "What is the Perimeter of a Pentagon with 5 equal Sides of " << l << "?" << endl;
		cin >> Per;
		if (!(Per == (5 * l)))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		l = rand() % 20;
	}
}
void PERIMETER_HEXAGON()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "A Hexagon has 6 Sides, all equal to eachother." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		double Per;
		Per = (6 * l);
		cout << "What is the Perimeter of a Hexagon with 6 equal Sides of " << l << "?" << endl;
		cin >> Per;
		if (!(Per == (6 * l)))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		l = rand() % 20;
	}
}
void PERIMETER_OCTAGON()
{/*int choice;

int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};*/


	cout << "A Octagon has 8 Sides, all equal to eachother." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		double Per;
		Per = (8 * l);
		cout << "What is the Perimeter of a Octagon with 8 equal Sides of " << l << "?" << endl;
		cin >> Per;
		if (!(Per == (8 * l)))
		{
			cout << "Incorrect. " << endl;
			TRIES_PERIMETER[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_PERIMETER[choice]++;
		}
		l = rand() % 20;
	}
}