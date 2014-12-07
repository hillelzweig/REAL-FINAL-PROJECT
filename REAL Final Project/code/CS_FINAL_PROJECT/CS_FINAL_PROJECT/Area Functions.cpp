#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;
void AREA_CIRCLE()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	int radius = rand() % 20;
	const double PI = 3.14159265;
	cout << " The Area of a cirle is PI x Radius x Radius. " << endl;
	cout << endl;
	for (int circ = 1; circ <= 5; circ++)
	{
		double Result = PI * radius * radius;
		double AreaC;
		cout << endl;
		cout << "What is the Area of the cirlce with a radius of " << radius << "? ";
		cin >> AreaC;
		if (!(((AreaC <= (Result + .01)) && (AreaC >= (Result - 0.1)))))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		radius = rand() % 20;
	}
}
void AREA_TRIANGLE()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	cout << "The Area of a Triangle is 1/2 x Base x Height." << endl;
	cout << endl;
	for (int tri = 1; tri <= 5; tri++)
	{
		int b = rand() % 20;
		int h = rand() % 20;
		double AreaT;
		AreaT = (0.5*b*h);
		cout << "What is the Area of a Triangle with a Base of " << b << " and a Height of " << h << endl;
		cin >> AreaT;
		if (!(AreaT == (0.5*b*h)))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		b = rand() % 20;
		h = rand() % 20;
	}
}
void AREA_SQUARE()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	cout << "The Area of a Square is Length x Width." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int b = rand() % 20;
		double Area;
		Area = b*b;
		cout << "What is the Area of a Square with a width of " << b << " and a length of " << b << endl;
		cin >> Area;
		if (!(Area == b*b))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		b = rand() % 20;
	}
}
void AREA_RECTANGLE()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	cout << "The Area of a Rectangle is Length x Width." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		int w = rand() % 20;
		double AreaR;
		AreaR = l*w;
		cout << "What is the Area of a rectangle with a width of " << w << " and a length of " << l << endl;
		cin >> AreaR;
		if (!(AreaR == (l*w)))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		l = rand() % 20;
		w = rand() % 20;
	}
}
void AREA_TRAPEZOID()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	cout << "The Area of a Trapezoid is 1/2 x (Base(1) + Base(2)) x Height." << endl;
	cout << endl;
	for (int trap = 1; trap <= 5; trap++)
	{
		int baseone = rand() % 20;
		int basetwo = rand() % 20;
		int h = rand() % 20;
		double AreaTrap;
		AreaTrap = ((0.5*(baseone + basetwo))*h);
		cout << "What is the Area of a Trapezoid with Base(1) of " << baseone << endl;
		cout << " and base(2) of " << basetwo << " and a Height of " << h << "?" << endl;
		cin >> AreaTrap;
		if (!(AreaTrap == ((0.5*(baseone + basetwo))*h)))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		baseone = rand() % 20;
		basetwo = rand() % 20;
		h = rand() % 20;
	}
}
void AREA_PARALLELOGRAM()
{/*int choice;

int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};*/


	cout << "The Area of a Parallelogram is Base x Height." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int l = rand() % 20;
		int w = rand() % 20;
		double AreaR;
		AreaR = (l*w);
		cout << "What is the Area of a Parallelogram with a Base of " << l << " and a Height of " << w << endl;
		cin >> AreaR;
		if (!(AreaR == (l*w)))
		{
			cout << "Incorrect. " << endl;
			TRIES_AREA[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_AREA[choice]++;
		}
		l = rand() % 20;
		w = rand() % 20;
	}
}
