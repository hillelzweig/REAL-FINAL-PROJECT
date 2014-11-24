#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;
void VOLUME_SPHERE()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	int radius = rand() % 10;
	const double PI = 3.14159265;
	cout << " The Volume of a Sphere  is 4/3 * PI * radius^3. " << endl;
	cout << endl;
	for (int circ = 1; circ <= 5; circ++)
	{
		double Result = (((1.333333)* PI) * (radius * radius* radius));
		double AreaC;
		cout << endl;
		cout << "What is the Volume of a Sphere with a radius of " << radius << "? ";
		cin >> AreaC;
		if (!(((AreaC <= (Result + .01)) && (AreaC >= (Result - 0.1)))))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
	radius = rand() % 10;
}
void VOLUME_CYLINDER()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	int radius = rand() % 10;
	int h = rand() % 10;
	const double PI = 3.14159;
	cout << " The Volume of a Cylinder is Base x Height. Base = PI * Radius^2. " << endl;
	cout << endl;
	for (int circ = 1; circ <= 5; circ++)
	{
		double Result = ((PI * radius * radius)*h);
		double AreaC;
		cout << endl;
		cout << "What is the Volume of a Sphere with a radius of " << radius << " and a Height of " << h << "? ";
		cin >> AreaC;
		if (!(((AreaC <= (Result + .01)) && (AreaC >= (Result - 0.1)))))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
	radius = rand() % 10;
	h = rand() % 10;
}
void VOLUME_CUBE()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	cout << "The Volume of a Cube is Length x Width x Height." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int b = rand() % 10;
		double Area;
		Area = b*b*b;
		cout << "What is the Volume of a Cube with a width of " << b << " and a length of " << b << endl;
		cout << "and Height of " << b << endl;
		cin >> Area;
		if (!(Area == b*b*b))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
}
void VOLUME_REGULAR_TRIANGLULAR_PRISMS()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	cout << "The Volume of a Triangular Prism is 1/2*Base*Height*Length." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int b = rand() % 10;
		int h = rand() % 10;
		int l = rand() % 10;
		double Area;
		Area = ((((0.5)*b)*h)*l);
		cout << "What is the Volume of a Triangular Prism with a Base of " << b << " and a height of " << h << endl;
		cout << "and length of " << l << endl;
		cin >> Area;
		if (!(Area == ((((0.5)*b)*h)*l)))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
}
void VOLUME_REGULAR_RECTANGULAR_PRISMS()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	cout << "The Volume of a Rectangular Prism is Length x Width x Height." << endl;
	cout << endl;
	for (int rect = 1; rect <= 5; rect++)
	{
		int a = rand() % 10;
		int b = rand() % 10;
		int c = rand() % 10;
		double Area;
		Area = a*b*c;
		cout << "What is the Volume of a Rectangular Prism with a width of " << a << " and a length of " << b << endl;
		cout << "and Height of " << c << endl;
		cin >> Area;
		if (!(Area == a*b*c))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
}
void VOLUME_CONES()
{/*int choice;

int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};*/


	int radius = rand() % 10;
	int h = rand() % 10;
	const double PI = 3.14159265;
	cout << " The Volume of a Cone is 1/3 *Base x Height. Base = PI * Radius^2. " << endl;
	cout << endl;
	for (int circ = 1; circ <= 5; circ++)
	{
		double Result = (((PI * radius * radius)*h) / 3);
		double AreaC;
		cout << endl;
		cout << "What is the Cone of a Sphere with a radius of " << radius << " and a Height of " << h << "? ";
		cin >> AreaC;
		if (!(((AreaC <= (Result + .01)) && (AreaC >= (Result - 0.1)))))
		{
			cout << "Incorrect. " << endl;
			TRIES_VOLUME[choice]++;
		}
		else
		{
			cout << "Correct! Good job!\n";
			cout << endl;
			CORRECT_VOLUME[choice]++;
		}
	}
	radius = rand() % 10;
	h = rand() % 10;
}