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
int main(){
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
	/*CHAR my_desktop[MAX_PATH];
	HRESULT result = SHGetFolderPath(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, my_desktop);
	if (result != S_OK)
		std::cout << "Error: " << result << "\n";
	else
		std::cout << "Path: " << my_desktop << "\n";*/
	ofstream fout;
	//char* outfile = strcat(my_desktop, "\\Your Grades.txt");
	fout.open("Your Grades.txt");
	if (fout.fail())
	{
		cout << "can't open file" << endl;
	}
	fout << date << "_" << name << endl;
	fout.close();
	//create student object and pass in student class and date
	MAIN_MENU();
	return 0;
} //REFACTORING
////Generic Functions
//void ASCII_ART(){
//cout << "00000000000000000000000000000000000000000000000000000000000000000000000000000000";
//cout << "01100001100002222222222000000000000033304400000000000555555500000000000000000000";
//cout << "01100001100000000000222000000000000333004400000000000550000555000000000000000000";
//cout << "01100001100000000002220000000000003330004400000000000550000055500000000000000000";
//cout << "01100001100000000022200000000000033300004400000000000550000005550000000000000000";
//cout << "01111111100000002220000000000000333000004400000000000550000055500000000000000000";
//cout << "01100001100000022200000000000003330000004400000000000555555550000000000000000000";
//cout << "01100001100000222000000000000033300000004400000000000550000055000000000000000000";
//cout << "0110000110..022200000000..000333000000004400000000..0550000005500..0000000000000";
//cout << "0110000110..022222222220..003330000000004444444440..0550000000550..0000000000000";
//cout << "00000000000000000000000000000000000000000000000000000000000000000000000000000000";
//cout << "01111111111111110000000000000000000000000000000000000000000000000000000000000000";
//cout << "01111111111111110000000000000000000000000000000000000000000000000000000000000000";
//cout << "00000001110000000000000000000000000000000000000000000000000000000000000000000000";
//cout << "00000001110000000000000000000000000000000000000000000000000000000000000000000000";
//cout << "00000001110000000000000000000000000000000000000000000000000000000000000000000000";
//cout << "000000011100000000000000000000000033300000000000000000000000000000000....0000000";
//cout << "00000001110000000000000000000000003330000000000000000000000000000000..00..000000";
//cout << "0000000111000000000000000000000000333000000000000000000000000000000..0000..00000";
//cout << "000000011100000000000000000000000033300000000000000000000000000000..000000..0000";
//cout << "00000001110000000222000000022203333333330004444000005550055500000..00.00.00..000";
//cout << "0000000111000000022200000002220333333333004444440000555055550000..0000000000..00";
//cout << "0000000111000000022200000002220000333000044400444000555500000000..00.0000.00..00";
//cout << "00000001110000000022200000022200003330004440000444005550000000000..00.00.00..000";
//cout << "000000011100000000022200002222000033300044400004440055500000000000..00..00..0000";
//cout << "0000000111000000000022200222220000333000044400444000555000000000000..0000..00000";
//cout << "00000001110000000000022222202200003330000044444400005550000000000000..00..000000";
//cout << "000000011100000000000022220022000033300000044440000055500000000000000....0000000";
//cout << "00000000000000000000000000000000000000000000000000000000000000000000000000000000";
//}//REFACTORING
//void WELCOME(){
//cout << endl;
//cout << "Welcome to the Hillel Zweig & Luke Reardon Math Tutor for basic \n";
//cout << "mathmatics, arithmetic, and geometry!\n";
//cout << endl;
//}//REFACTORING
////Arithmetic Functions
//void ADDITION(){
//int a = rand() % 100;
//int b = rand() % 100;
//double ans;
//for ( int i=0; i<=4; i++){
//cout << endl;
//cout << "Let us work on addition problems.\n\n";
//cout << "What is the answer to " << a;
//cout <<" + ";
//cout << b;
//cout <<" ?\n\n";
//cout << "Answer: "; 
//cin >> ans;
//cout << "Your answer: " << ans << endl;
//if ( ans == a + b )
//{cout << "You passed.\n";
//CORRECT_ARITHMETIC[choice]++;
//}
//else 
//{cout << "Sorry, nope.\n";
//cout << "Correct answer: " << a + b << endl;
//TRIES_ARITHMETIC[choice] ++;
//}
//cout << endl;
//cout << "---------------------------------------\n";
//a=rand()%100;
//b=rand()%100;}
//}//REFACTORING
//void SUBTRACTION(){
//int a = rand() % 100;
//int b = rand() % 100;
//double ans;
//for ( int i=0; i<=4; i++){
//cout << endl;
//cout << "Let us work on subtraction problems.\n\n";
//cout << "What is the answer to ";
//cout << a;
//cout << " - ";
//cout << b;
//cout << "?\n\n";
//cout << "Answer: "; 
//cin >> ans;
//cout << "Your answer: " << ans << endl;
//if ( ans == a - b )
//{cout << "You passed.\n";
//CORRECT_ARITHMETIC[choice]++;
//}
//else 
//{cout << "Sorry, nope.\n";
//cout << "Correct answer: " << a - b << endl;
//TRIES_ARITHMETIC[choice] ++;
//}
//cout << endl;
//cout << "---------------------------------------\n";
//a=rand()%100;
//b=rand()%100;}
//}//REFACTORING
//void MULTIPLICATION(){
//int a = rand() % 100;
//int b = rand() % 100;
//double ans;
//for ( int i=0; i<=4; i++){
//cout << endl;
//cout << "Let us work on multiplication problems.\n\n";
//cout << "What is the answer to ";
//cout << a;
//cout << " * ";
//cout << b;
//cout << "?\n\n";
//cout << "Answer: "; 
//cin >> ans;
//cout << "Your answer: " << ans << endl;
//if ( ans == a * b )
//{cout << "You passed.\n";
//CORRECT_ARITHMETIC[choice]++;
//}
//else 
//{cout << "Sorry, nope.\n";
//cout << "Correct answer: " << a * b << endl;
//TRIES_ARITHMETIC[choice] ++;
//}
//cout << endl;
//cout << "---------------------------------------\n";
//a=rand()%100;
//b=rand()%100;}
//}//REFACTORING
//void DIVISION(){
//double a = rand() % 100;
//double b = rand() % 100;
//double ans;
//for ( int i=0; i<=4; i++){
//cout << endl;
//cout << "Let us work on division problems.\n\n";
//cout << "What is the answer to ";
//cout << a;
//cout << " / ";
//cout << b;
//cout << "?\n\n";
//cout << "Answer to three decimal places: \n";
//cin >> ans;
//cout << "Your answer: " << ans << endl;
//double diff = (ans - (a / b));
//if ( diff > -0.001 && diff < 0.001 )
//{cout << "Close Enough. You passed.\n";
//CORRECT_ARITHMETIC[choice]++;
//}
//else 
//{cout << "Sorry, nope.\n";
//cout << "Correct answer: " << a / b << endl;
//TRIES_ARITHMETIC[choice] ++;
//}
//cout << "---------------------------------------\n";
//a=rand()%100;
//b=rand()%100;}
//}//REFACTORING
////Perimeter Functions
//void PERIMETER_CIRCLE()
//{
//int radius = rand () % 10;
//const double PI =3.14159265;
//cout << " The Perimeter of a cirle is 2 x PI x Radius. " << endl;
//cout << endl;
//for (int circ=1; circ <=5;circ++)
//{
//double Result = ((2*PI) * radius);
//double AreaC;
//cout << endl;
//cout << "What is the Perimeter of the cirlce with a radius of " << radius << "? ";
//cin >> AreaC;
//while (true)
//{
//if (! (((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))))
//{
//cout << "Incorrect. "<< endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if ((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//radius= rand () % 10;
//}
//}
//void PERIMETER_TRIANGLE()
//{
//cout << "The Perimeter of a Right Triangle is the sum of all three sides." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{int b = rand () % 10;
//int h = rand () % 10;
//double Per;
//Per= (((sqrt((b*b)+(h*h)))+b+h));
//double ans;
//cout << "What is the Perimeter of a Right Triangle with a Height of " << h << " and a Base of " << b << endl;
//cin >> ans;
//while (true)
//{
//if (! ((ans <= Per + 0.1)&&(ans>= Per -0.1)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if ((ans <= Per + 0.1)&&(ans>= Per -0.1))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
//void PERIMETER_SQUARE()
//{
//cout << "The Perimeter of a Square is 2L + 2W." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int w = rand () % 10;
//double Per;
//Per = (4*w);
//cout << "What is the Perimeter of a Square with a width of " << w << " and a length of " << w << endl;
//cin >> Per;
//while (true)
//{
//if (! (Per== (4*w)))
//{
//cout << "Incorrect ";
//TRIES_PERIMETER[choice]++;
//break;
//}
//if (Per == (4*w))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
//void PERIMETER_RECTANGLE()
//{
//cout << "The Perimeter of a Rectangle is 2L + 2W." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{int l = rand () % 10;
//int w = rand () % 10;
//double AreaR;
//AreaR = ((2*l)+(2*w));
//cout << "What is the Perimeter of a rectangle with a width of " << w << " and a length of " << l << endl;
//cin >> AreaR;
//while (true)
//{
//if (! (AreaR== ((2*l)+(2*w))))
//{
//cout << "Incorrect. " << endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if (AreaR == ((2*l)+(2*w)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
//void PERIMETER_PENTAGON()
//{
//cout << "A Pentagon has 5 Sides, all equal to eachother." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int l = rand () % 10;
//double Per;
//Per = (5*l);
//cout << "What is the Perimeter of a Pentagon with 5 equal Sides of " << l << "?" << endl;
//cin >> Per;
//while (true)
//{
//if (! (Per== (5*l)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if (Per == (5*l))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
//void PERIMETER_HEXAGON()
//{
//cout << "A Hexagon has 6 Sides, all equal to eachother." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int l = rand () % 10;
//double Per;
//Per = (6*l);
//cout << "What is the Perimeter of a Hexagon with 6 equal Sides of " << l << "?" << endl;
//cin >> Per;
//while (true)
//{
//if (! (Per== (6*l)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if (Per == (6*l))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
//void PERIMETER_OCTAGON()
//{
//cout << "A Octagon has 8 Sides, all equal to eachother." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int l = rand () % 10;
//double Per;
//Per = (8*l);
//cout << "What is the Perimeter of a Octagon with 8 equal Sides of " << l << "?" << endl;
//cin >> Per;
//while (true)
//{
//if (! (Per== (8*l)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_PERIMETER[choice]++;
//break;
//}
//if (Per == (8*l))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_PERIMETER[choice]++;
//break;
//}
//}
//}
//}
////Area Functions
//void AREA_CIRLCE()
//{
//int radius = rand () % 10;
//const double PI =3.14159265;
//cout << " The Area of a cirle is PI x Radius x Radius. " << endl;
//cout << endl;
//for (int circ=1; circ <=5;circ++)
//{
//double Result = PI * radius * radius;
//double AreaC;
//cout << endl;
//cout << "What is the Area of the cirlce with a radius of " << radius << "? ";
//cin >> AreaC;
//while (true)
//{
//if (! (((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if ((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//radius= rand () % 10;
//}
//}
//void AREA_TRIANGLE()
//{
//cout << "The Area of a Triangle is 1/2 x Base x Height." << endl;
//cout << endl;
//for (int tri=1; tri <=5;tri++)
//{
//int b = rand () % 10;
//int h = rand () % 10;
//double AreaT;
//AreaT = (0.5*b*h);
//cout << "What is the Area of a Triangle with a Base of " << b << " and a Height of " << h << endl;
//cin >> AreaT;
//while (true)
//{
//if (! (AreaT== (0.5*b*h)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if (AreaT == (0.5*b*h))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//}
//}
//void AREA_SQUARE()
//{
//cout << "The Area of a Square is Length x Width." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int b = rand () % 10;
//double Area;
//Area = b*b;
//cout << "What is the Area of a Square with a width of " << b << " and a length of " << b << endl;
//cin >> Area;
//while (true)
//{
//if (! (Area== b*b))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if (Area == b*b)
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//}
//}
//void AREA_RECTANGLE()
//{
//cout << "The Area of a Rectangle is Length x Width." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{int l = rand () % 10;
//int w = rand () % 10;
//double AreaR;
//AreaR = l*w;
//cout << "What is the Area of a rectangle with a width of " << w << " and a length of " << l << endl;
//cin >> AreaR;
//while (true)
//{
//if (! (AreaR== (l*w)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if (AreaR == (l*w))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//}
//}
//void AREA_TRAPEZOID()
//{
//cout << "The Area of a Trapezoid is 1/2 x (Base(1) + Base(2)) x Height." << endl;
//cout << endl;
//for (int trap=1; trap <=5; trap++)
//{
//int baseone = rand () % 10;
//int basetwo = rand () % 10;
//int h = rand () % 10;
//double AreaTrap;
//AreaTrap = ((0.5*(baseone + basetwo))*h);
//cout << "What is the Area of a Trapezoid with Base(1) of " << baseone << endl;
//cout << " and base(2) of " << basetwo << " and a Height of " << h << "?" << endl;
//cin >> AreaTrap;
//while (true)
//{
//if (! (AreaTrap== ((0.5*(baseone + basetwo))*h)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if (AreaTrap == (0.5*(baseone + basetwo)*h))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//}
//}
//void AREA_PARALLELOGRAM()
//{
//cout << "The Area of a Parallelogram is Base x Height." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{int l = rand () % 10;
//int w = rand () % 10;
//double AreaR;
//AreaR = (l*w);
//cout << "What is the Area of a Parallelogram with a Base of " << l << " and a Height of " << w << endl;
//cin >> AreaR;
//while (true)
//{
//if (! (AreaR== (l*w)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_AREA[choice]++;
//break;
//}
//if (AreaR == (l*w))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_AREA[choice]++;
//break;
//}
//}
//}
//}
////Volume Functions
//void VOLUME_SPHERE()
//{
//int radius = rand () % 10;
//const double PI =3.14159265;
//cout << " The Volume of a Sphere  is 4/3 * PI * radius^3. " << endl;
//cout << endl;
//for (int circ=1; circ <=5;circ++)
//{
//double Result = (((1.333333)* PI) * (radius * radius* radius));
//double AreaC;
//cout << endl;
//cout << "What is the Volume of a Sphere with a radius of " << radius << "? ";
//cin >> AreaC;
//while (true)
//{
//if (! (((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))))
//{
//cout << "Incorrect. " << endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if ((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//radius= rand () % 10;
//}
//}
//void VOLUME_CYLINDER()
//{
//int radius = rand () % 10;
//int h = rand () % 10;
//const double PI =3.14159;
//cout << " The Volume of a Cylinder is Base x Height. Base = PI * Radius^2. " << endl;
//cout << endl;
//for (int circ=1; circ <=5;circ++)
//{
//double Result = ((PI * radius * radius)*h);
//double AreaC;
//cout << endl;
//cout << "What is the Volume of a Sphere with a radius of " << radius << " and a Height of " << h <<"? ";
//cin >> AreaC;
//while (true)
//{
//if (! (((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))))
//{
//cout << "Incorrect. "<< endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if ((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//radius= rand () % 10;
//h = rand () % 10;
//}
//}
//void VOLUME_CUBE()
//{
//cout << "The Volume of a Cube is Length x Width x Height." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int b = rand () % 10;
//double Area;
//Area = b*b*b;
//cout << "What is the Volume of a Cube with a width of " << b << " and a length of " << b << endl;
//cout << "and Height of " << b << endl;
//cin >> Area;
//while (true)
//{
//if (! (Area== b*b*b))
//{
//cout << "Incorrect. "<< endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if (Area == b*b*b)
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//}
//}
//void VOLUME_REGULAR_TRIANGLULAR_PRISMS()
//{
//cout << "The Volume of a Triangular Prism is 1/2*Base*Height*Length." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int b = rand () % 10;
//int h = rand () % 10;
//int l = rand () % 10;
//double Area;
//Area = ((((0.5)*b)*h)*l);
//cout << "What is the Volume of a Triangular Prism with a Base of " << b << " and a height of " << h << endl;
//cout << "and length of " << l << endl;
//cin >> Area;
//while (true)
//{
//if (! (Area== ((((0.5)*b)*h)*l)))
//{
//cout << "Incorrect. "<< endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if (Area == ((((0.5)*b)*h)*l))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//}
//}
//void VOLUME_REGULAR_RECTANGULAR_PRISMS()
//{
//cout << "The Volume of a Rectangular Prism is Length x Width x Height." << endl;
//cout << endl;
//for (int rect=1; rect <=5;rect++)
//{
//int a = rand () % 10;
//int b = rand () % 10;
//int c = rand () % 10;
//double Area;
//Area = a*b*c;
//cout << "What is the Volume of a Rectangular Prism with a width of " << a << " and a length of " << b << endl;
//cout << "and Height of " << c << endl;
//cin >> Area;
//while (true)
//{
//if (! (Area== a*b*c))
//{
//cout << "Incorrect. "<< endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if (Area == (a*b*c))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//}
//}
//void VOLUME_CONES()
//{
//int radius = rand () % 10;
//int h = rand () % 10;
//const double PI =3.14159265;
//cout << " The Volume of a Cone is 1/3 *Base x Height. Base = PI * Radius^2. " << endl;
//cout << endl;
//for (int circ=1; circ <=5;circ++)
//{
//double Result = (((PI * radius * radius)*h)/3);
//double AreaC;
//cout << endl;
//cout << "What is the Cone of a Sphere with a radius of " << radius << " and a Height of " << h <<"? ";
//cin >> AreaC;
//while (true)
//{
//if (! (((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))))
//{
//cout << "Incorrect. "<< endl;
//TRIES_VOLUME[choice]++;
//break;
//}
//if ((AreaC <= (Result + .01))&&(AreaC >= (Result -0.1)))
//{
//cout << "Correct! Good job!\n";
//cout << endl;
//CORRECT_VOLUME[choice]++;
//break;
//}
//}
//radius= rand () % 10;
//h = rand () % 10;
//}
//}
////Retry Functions
//void RETRY_ARITHMETIC(){
//if (CORRECT_ARITHMETIC[1]!=5){cout << "You should try more addition problems.\n";
//ADDITION();
//cout << endl;}
//else cout << "Good job in addition!!!\n" << endl;
//if (CORRECT_ARITHMETIC[2]!=5){cout << "You should try more subtraction problems.\n";
//SUBTRACTION();
//cout << endl;}
//else cout << "Good job in subtraction!!!\n" << endl;
//if (CORRECT_ARITHMETIC[3]!=5){cout << "You should try more multiplication problems.\n";
//MULTIPLICATION();
//cout << endl;}
//else cout << "Good job in multiplication!!!\n" << endl ;
//if (CORRECT_ARITHMETIC[4]!=5){cout << "You should try more division problems.\n";
//DIVISION();
//cout << endl;}
//else cout << "Good job in division!!!\n" << endl;
//}
//void RETRY_PERIMETER(){
//if (CORRECT_PERIMETER[1]!=5){cout << "You should try more circumference problems.\n";
//PERIMETER_CIRCLE();
//cout << endl;}
//else cout << "Good job in circumference!!!\n" << endl;
//if (CORRECT_PERIMETER[2]!=5){cout << "You should try more pythagorean thorem problems.\n";
//PERIMETER_TRIANGLE();
//cout << endl;}
//else cout << "Good job in pythagorean theorem!!!\n" << endl;
//if (CORRECT_PERIMETER[3]!=5){cout << "You should try more square perimeter problems.\n";
//PERIMETER_SQUARE();
//cout << endl;}
//else cout << "Good job in square perimeter!!!\n" << endl ;
//if (CORRECT_PERIMETER[4]!=5){cout << "You should try more rectangle perimeter problems.\n";
//PERIMETER_RECTANGLE();
//cout << endl;}
//else cout << "Good job in rectangle perimeter!!!\n" << endl;
//if (CORRECT_PERIMETER[5]!=5){cout << "You should try more pentagon perimeter problems.\n";
//PERIMETER_PENTAGON();
//cout << endl;}
//else cout << "Good job inpentagon perinmmeter!!!\n" << endl;
//if (CORRECT_PERIMETER[6]!=5){cout << "You should try more hexagon perimeter problems.\n";
//PERIMETER_HEXAGON();
//cout << endl;}
//else cout << "Good job in hexagon perimeter!!!\n" << endl;
//if (CORRECT_PERIMETER[7]!=5){cout << "You should try more octagon perimeter problems.\n";
//PERIMETER_OCTAGON();
//cout << endl;}
//else cout << "Good job in octagon perimeter!!!\n" << endl;
//}
//void RETRY_AREA(){
//if (CORRECT_AREA[1]!=5){cout << "You should try more circle area problems.\n";
//AREA_CIRLCE();
//cout << endl;}
//else cout << "Good job in circle area!!!\n" << endl;
//if (CORRECT_AREA[2]!=5){cout << "You should try more triangular area problems.\n";
//AREA_TRIANGLE();
//cout << endl;}
//else cout << "Good job in triangular area!!!\n" << endl;
//if (CORRECT_AREA[3]!=5){cout << "You should try more square area problems.\n";
//AREA_SQUARE();
//cout << endl;}
//else cout << "Good job in square area!!!\n" << endl ;
//if (CORRECT_AREA[4]!=5){cout << "You should try more rectangular area problems.\n";
//AREA_RECTANGLE();
//cout << endl;}
//else cout << "Good job in rectangular area!!!\n" << endl;
//if (CORRECT_AREA[5]!=5){cout << "You should try more trapezoid area problems.\n";
//AREA_TRAPEZOID();
//cout << endl;}
//else cout << "Good job in trapezoid area!!!\n" << endl;
//if (CORRECT_AREA[6]!=5){cout << "You should try more parallelogram area problems.\n";
//AREA_PARALLELOGRAM();
//cout << endl;}
//else cout << "Good job in parallelogram area!!!\n" << endl;
//}
//void RETRY_VOLUME(){
//if (CORRECT_VOLUME[1]!=5){cout << "You should try more sphere volume problems.\n";
//VOLUME_SPHERE();
//cout << endl;}
//else cout << "Good job in sphere volume!!!\n" << endl;
//if (CORRECT_VOLUME[2]!=5){cout << "You should try more cylinder volume problems.\n";
//VOLUME_CYLINDER();
//cout << endl;}
//else cout << "Good job in cylinder volume!!!\n" << endl;
//if (CORRECT_VOLUME[3]!=5){cout << "You should try more cube volume problems.\n";
//VOLUME_CUBE();
//cout << endl;}
//else cout << "Good job in cube volume!!!\n" << endl ;
//if (CORRECT_VOLUME[4]!=5){cout << "You should try more triangular prism problems.\n";
//VOLUME_REGULAR_TRIANGLULAR_PRISMS();
//cout << endl;}
//else cout << "Good job in triangular prism!!!\n" << endl;
//if (CORRECT_VOLUME[5]!=5){cout << "You should try more rectangular prism problems.\n";
//VOLUME_REGULAR_RECTANGULAR_PRISMS();
//cout << endl;}
//else cout << "Good job in rectangular prism!!!\n" << endl;
//if (CORRECT_VOLUME[6]!=5){cout << "You should try more conical volume problems.\n";
//VOLUME_CONES();
//cout << endl;}
//else cout << "Good job in conical volume!!!\n" << endl;
//}
////Report Functions
//void REPORT_ARITHMETIC(){
//cout << "You got " << TRIES_ARITHMETIC[1] << " addition problems wrong.\n";
//cout << "You got " << TRIES_ARITHMETIC[2] << " subtraction problems wrong.\n";
//cout << "You got " << TRIES_ARITHMETIC[3] << " multiplication problems wrong.\n";
//cout << "You got " << TRIES_ARITHMETIC[4] << " division problems wrong.\n";
//cout << "You got " << TRIES_ARITHMETIC[5] << " retried problems wrong.\n";
//cout << endl;
//cout << "You got " << CORRECT_ARITHMETIC[1] << " addition problems right." << endl;
//cout << "You got " << CORRECT_ARITHMETIC[2] << " subtraction problems right." << endl;
//cout << "You got " << CORRECT_ARITHMETIC[3] << " multiplication problems right." << endl;
//cout << "You got " << CORRECT_ARITHMETIC[4] << " division problems right." << endl;
//cout << "You got " << CORRECT_ARITHMETIC[5] << " retried problems correct.\n";
//cout << endl;}
//void REPORT_PERIMETER(){
//cout << "You got " << TRIES_PERIMETER[1] << " circumference problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[2] << " pythagorean theorem problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[3] << " square perimeter problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[4] << " rectangle perimeter problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[5] << " pentagon perimeter problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[6] << " hexagon perimeter problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[7] << " octagon perimeter problems wrong.\n";
//cout << "You got " << TRIES_PERIMETER[8] << " retried perimeter problems wrong.\n";
//cout << endl;
//cout << "You got " << CORRECT_PERIMETER[1] << " circumference problems right." << endl;
//cout << "You got " << CORRECT_PERIMETER[2] << " pythagorean theorem problems right." << endl;
//cout << "You got " << CORRECT_PERIMETER[3] << " square perimeter problems right." << endl;
//cout << "You got " << CORRECT_PERIMETER[4] << " rectangle perimeter problems right." << endl;
//cout << "You got " << CORRECT_PERIMETER[5] << " pentagon perimeter problems correct.\n";
//cout << "You got " << CORRECT_PERIMETER[6] << " hexagon perimeter problems correct.\n";
//cout << "You got " << CORRECT_PERIMETER[7] << " octagon perimeter problems correct.\n";
//cout << "You got " << CORRECT_PERIMETER[8] << " retried perimeter problems correct.\n";
//cout << endl;}
//void REPORT_AREA(){
//cout << "You got " << TRIES_AREA[1] << " circular area problems wrong.\n";
//cout << "You got " << TRIES_AREA[2] << " traingular area problems wrong.\n";
//cout << "You got " << TRIES_AREA[3] << " square area problems wrong.\n";
//cout << "You got " << TRIES_AREA[4] << " rectangle area problems wrong.\n";
//cout << "You got " << TRIES_AREA[5] << " trapezoid area problems wrong.\n";
//cout << "You got " << TRIES_AREA[6] << " parallelogram area problems wrong.\n";
//cout << "You got " << TRIES_AREA[7] << " retried area problems wrong.\n";
//cout << endl;
//cout << "You got " << CORRECT_AREA[1] << " circular area problems right." << endl;
//cout << "You got " << CORRECT_AREA[2] << " traingular area problems right." << endl;
//cout << "You got " << CORRECT_AREA[3] << " square area problems right." << endl;
//cout << "You got " << CORRECT_AREA[4] << " rectangle area problems right." << endl;
//cout << "You got " << CORRECT_AREA[5] << " trapezoid area problems correct.\n";
//cout << "You got " << CORRECT_AREA[6] << " parallelogram area problems correct.\n";
//cout << "You got " << CORRECT_AREA[7] << " retried area problems correct.\n";
//cout << endl;}
//void REPORT_VOLUME(){
//cout << "You got " << TRIES_VOLUME[1] << " sphere volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[2] << " cylinder volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[3] << " cube volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[4] << " triangular prisms volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[5] << " rectangular volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[6] << " conical volume problems wrong.\n";
//cout << "You got " << TRIES_VOLUME[7] << " retried volume problems wrong.\n";
//cout << endl;
//cout << "You got " << CORRECT_VOLUME[1] << " sphere volume problems right." << endl;
//cout << "You got " << CORRECT_VOLUME[2] << " cylinder volume problems right." << endl;
//cout << "You got " << CORRECT_VOLUME[3] << " cube volume problems right." << endl;
//cout << "You got " << CORRECT_VOLUME[4] << " triangular prisms volume problems right." << endl;
//cout << "You got " << CORRECT_VOLUME[5] << " rectangular volume problems correct.\n";
//cout << "You got " << CORRECT_VOLUME[6] << " conical volume problems correct.\n";
//cout << "You got " << CORRECT_VOLUME[7] << " retried volume problems correct.\n";
//cout << endl;}
////Menu Functions
//void ARITHMETIC_MENU(){
//while(true)
//{
//cout << "Select what you would like to study from the list below: \n";
//cout << endl;
//cout << "1) Addition\n";
//cout << "2) Subtraction\n";
//cout << "3) Multiplication\n";
//cout << "4) Division\n";
//cout << "5) Retry incorect problems\n";
//cout << "6) Exit to Main Menu\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, 5 or 6: ";
//cin >> choice;
//cout << "---------------------------------------\n";
//switch (choice) {
//case 1: //Do the addition problem
//{ADDITION();}
//break;
//case 2: //Do the subtraction problem
//{SUBTRACTION();}
//break;
//case 3: //Do the multiplication problem
//{MULTIPLICATION();}
//break;
//case 4: //Do the division problem
//{DIVISION();}
//break;
//case 5: //Redo the incorrect problem
//{RETRY_ARITHMETIC();}
//break;
//case 6: //Exit the program & report
//{REPORT_ARITHMETIC();
//MAIN_MENU();}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, 5, or 6\n";
//}
//}
//}//REFACTORING
//void PERIMETER_MENU(){
//while(true)
//{
//cout << "Select what shape you would like to study from the list below: \n";
//cout << endl;
//cout << "1) Circle\n";
//cout << "2) Triangle\n";
//cout << "3) Square\n";
//cout << "4) Rectangle\n";
//cout << "5) Pentagon\n";
//cout << "6) Hexagon\n";
//cout << "7) Octagon\n";
//cout << "8) Retry incorrect problems\n";
//cout << "9) Exit to Main Menu\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7, 8, or 9: ";
//cin >> choice;
//cout << "---------------------------------------\n";
//switch (choice) {
//case 1: //Do the addition problem
//{PERIMETER_CIRCLE();}
//break;
//case 2: //Do the subtraction problem
//{PERIMETER_TRIANGLE();}
//break;
//case 3: //Do the multiplication problem
//{PERIMETER_SQUARE();}
//break;
//case 4: //Do the division problem
//{PERIMETER_RECTANGLE();}
//break;
//case 5: //Do the division problem
//{PERIMETER_PENTAGON();}
//break;
//case 6: //Do the division problem
//{PERIMETER_HEXAGON();}
//break;
//case 7: //Do the division problem
//{PERIMETER_OCTAGON();}
//break;
//case 8: //Redo the incorrect problem
//{RETRY_PERIMETER();}
//break;
//case 9: //Report & exit the program to the main menu
//{REPORT_PERIMETER();
//MAIN_MENU();}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, 8, or 9\n";
//}
//}
//}
//void AREA_MENU(){
//while(true)
//{
//cout << "Select what area you would like to study from the list below: \n";
//cout << endl;
//cout << "1) Circle\n";
//cout << "2) Triangle\n";
//cout << "3) Square\n";
//cout << "4) Rectangle\n";
//cout << "5) Trapezoid\n";
//cout << "6) Parallelogram\n";
//cout << "7) Retry incorect problems\n";
//cout << "8) Exit to Main Menu\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7 or 8: ";
//cin >> choice;
//cout << "---------------------------------------\n";
//switch (choice) {
//case 1: //Do the addition problem
//{AREA_CIRLCE();}
//break;
//case 2: //Do the subtraction problem
//{AREA_TRIANGLE();}
//break;
//case 3: //Do the multiplication problem
//{AREA_SQUARE();}
//break;
//case 4: //Do the division problem
//{AREA_RECTANGLE();}
//break;
//case 5: //Do the division problem
//{AREA_TRAPEZOID();}
//break;
//case 6: //Do the division problem
//{AREA_PARALLELOGRAM();}
//break;
//case 7: //Redo the incorrect problem
//{RETRY_AREA();}
//break;
//case 8: //Report & exit the program to the main menu
//{REPORT_AREA();
//MAIN_MENU();}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, or 8\n";
//}
//}
//}
//void VOLUME_MENU(){
//while(true)
//{
//cout << "Select what volume you would like to study from the list below: \n";
//cout << endl;
//cout << "1) Sphere\n";
//cout << "2) Cylinder\n";
//cout << "3) Cube\n";
//cout << "4) Regular Triangular prisms\n";
//cout << "5) Regular Rectangular prisms\n";
//cout << "6) Cones\n";
//cout << "7) Retry incorect problems\n";
//cout << "8) Exit to Main Menu\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, 5, 6, 7, or 8: ";
//cin >> choice;
//cout << "---------------------------------------\n";
//switch (choice) {
//case 1: //Do the addition problem
//{VOLUME_SPHERE();}
//break;
//case 2: //Do the subtraction problem
//{VOLUME_CYLINDER();}
//break;
//case 3: //Do the multiplication problem
//{VOLUME_CUBE();}
//break;
//case 4: //Do the division problem
//{VOLUME_REGULAR_TRIANGLULAR_PRISMS();}
//break;
//case 5: //Do the division problem
//{VOLUME_REGULAR_RECTANGULAR_PRISMS();}
//break;
//case 6: //Do the division problem
//{VOLUME_CONES();}
//break;
//case 7: //Redo the incorrect problem
//{RETRY_VOLUME();}
//break;
//case 8: //Report & exit the program to the main menu
//{REPORT_VOLUME();
//MAIN_MENU();}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, 5, 6, 7, or 8\n";
//}
//}
//}
//void RETRY_MENU(){
//while (true){
//cout << "RETRY MENU:\n";
//cout << "Select what subject you would like to retry from the list below: \n";
//cout << endl;
//cout << "1) Arithmetic\n";
//cout << "2) Perimeter\n";
//cout << "3) Area\n";
//cout << "4) Volume\n";
//cout << "5) Exit to Main Menu\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, or 5: ";
//cin >> main_choice;
//cout << "---------------------------------------\n";
//switch (main_choice) {
//case 1: //Do the arithmetic problem
//{ARITHMETIC_MENU();}
//break;
//case 2: //Do the perimeter problem
//{PERIMETER_MENU();}
//break;
//case 3: //Do the area problem
//{AREA_MENU();}
//break;
//case 4: //Do the volume problem
//{VOLUME_MENU();}
//break;
//case 5: //Exit the program to the main menu
//{MAIN_MENU();}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, or 5\n";
//}
//}
//}
//void MAIN_MENU(){
//while (true){
//cout << "MAIN MENU:\n";
//cout << "Select what subject you would like to study from the list below: \n";
//cout << endl;
//cout << "1) Arithmetic\n";
//cout << "2) Perimeter\n";
//cout << "3) Area\n";
//cout << "4) Volume\n";
//cout << "5) Retry incorrect problems\n";
//cout << "6) Exit\n";
//cout << "---------------------------------------\n";
//cout << "Enter your choice: 1, 2, 3, 4, 5, or 6: ";
//cin >> main_choice;
//cout << "---------------------------------------\n";
//switch (main_choice) {
//case 1: //Do the arithmetic problem
//{ARITHMETIC_MENU();}
//break;
//case 2: //Do the perimeter problem
//{PERIMETER_MENU();}
//break;
//case 3: //Do the area problem
//{AREA_MENU();}
//break;
//case 4: //Do the volume problem
//{VOLUME_MENU();}
//break;
//case 5: //Redo the incorrect problem
//{RETRY_MENU();}
//break;
//case 6: //Exit the program
//{cout << "\nHave a nice day!\n\n";
//exit(0);}
//default:
//cout << "Invalid choice.  Try 1, 2, 3, 4, 5, or 6\n";
//}
//}
//}
