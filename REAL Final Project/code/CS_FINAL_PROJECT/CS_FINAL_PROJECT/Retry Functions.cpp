#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "Header.h"
using namespace std;
//int TRIES_ARITHMETIC[5]={0,0,0,0,0}, CORRECT_ARITHMETIC[5]={0,0,0,0,0};
//int TRIES_PERIMETER[8]={0,0,0,0,0,0,0,0}, CORRECT_PERIMETER[8]={0,0,0,0,0,0,0,0};
//int TRIES_AREA[7]={0,0,0,0,0,0,0}, CORRECT_AREA[7]={0,0,0,0,0,0,0};
//int TRIES_VOLUME[7]={0,0,0,0,0,0,0}, CORRECT_VOLUME[7]={0,0,0,0,0,0,0};
void RETRY_ARITHMETIC(){
	if (CORRECT_ARITHMETIC[1]!=5){cout << "You should try more addition problems.\n";
	ADDITION();
	cout << endl;}
	else cout << "Good job in addition!!!\n" << endl;
	if (CORRECT_ARITHMETIC[2]!=5){cout << "You should try more subtraction problems.\n";
	SUBTRACTION();
	cout << endl;}
	else cout << "Good job in subtraction!!!\n" << endl;
	if (CORRECT_ARITHMETIC[3]!=5){cout << "You should try more multiplication problems.\n";
	MULTIPLICATION();
	cout << endl;}
	else cout << "Good job in multiplication!!!\n" << endl ;
	if (CORRECT_ARITHMETIC[4]!=5){cout << "You should try more division problems.\n";
	DIVISION();
	cout << endl;}
	else cout << "Good job in division!!!\n" << endl;
}
void RETRY_PERIMETER(){
	if (CORRECT_PERIMETER[1]!=5){cout << "You should try more circumference problems.\n";
	PERIMETER_CIRCLE();
	cout << endl;}
	else cout << "Good job in circumference!!!\n" << endl;
	if (CORRECT_PERIMETER[2]!=5){cout << "You should try more pythagorean thorem problems.\n";
	PERIMETER_TRIANGLE();
	cout << endl;}
	else cout << "Good job in pythagorean theorem!!!\n" << endl;
	if (CORRECT_PERIMETER[3]!=5){cout << "You should try more square perimeter problems.\n";
	PERIMETER_SQUARE();
	cout << endl;}
	else cout << "Good job in square perimeter!!!\n" << endl ;
	if (CORRECT_PERIMETER[4]!=5){cout << "You should try more rectangle perimeter problems.\n";
	PERIMETER_RECTANGLE();
	cout << endl;}
	else cout << "Good job in rectangle perimeter!!!\n" << endl;
	if (CORRECT_PERIMETER[5]!=5){cout << "You should try more pentagon perimeter problems.\n";
	PERIMETER_PENTAGON();
	cout << endl;}
	else cout << "Good job inpentagon perinmmeter!!!\n" << endl;
	if (CORRECT_PERIMETER[6]!=5){cout << "You should try more hexagon perimeter problems.\n";
	PERIMETER_HEXAGON();
	cout << endl;}
	else cout << "Good job in hexagon perimeter!!!\n" << endl;
	if (CORRECT_PERIMETER[7]!=5){cout << "You should try more octagon perimeter problems.\n";
	PERIMETER_OCTAGON();
	cout << endl;}
	else cout << "Good job in octagon perimeter!!!\n" << endl;
}
void RETRY_AREA(){
	if (CORRECT_AREA[1]!=5){cout << "You should try more circle area problems.\n";
	AREA_CIRCLE();
	cout << endl;}
	else cout << "Good job in circle area!!!\n" << endl;
	if (CORRECT_AREA[2]!=5){cout << "You should try more triangular area problems.\n";
	AREA_TRIANGLE();
	cout << endl;}
	else cout << "Good job in triangular area!!!\n" << endl;
	if (CORRECT_AREA[3]!=5){cout << "You should try more square area problems.\n";
	AREA_SQUARE();
	cout << endl;}
	else cout << "Good job in square area!!!\n" << endl ;
	if (CORRECT_AREA[4]!=5){cout << "You should try more rectangular area problems.\n";
	AREA_RECTANGLE();
	cout << endl;}
	else cout << "Good job in rectangular area!!!\n" << endl;
	if (CORRECT_AREA[5]!=5){cout << "You should try more trapezoid area problems.\n";
	AREA_TRAPEZOID();
	cout << endl;}
	else cout << "Good job in trapezoid area!!!\n" << endl;
	if (CORRECT_AREA[6]!=5){cout << "You should try more parallelogram area problems.\n";
	AREA_PARALLELOGRAM();
	cout << endl;}
	else cout << "Good job in parallelogram area!!!\n" << endl;
}
void RETRY_VOLUME(){
	if (CORRECT_VOLUME[1]!=5){cout << "You should try more sphere volume problems.\n";
	VOLUME_SPHERE();
	cout << endl;}
	else cout << "Good job in sphere volume!!!\n" << endl;
	if (CORRECT_VOLUME[2]!=5){cout << "You should try more cylinder volume problems.\n";
	VOLUME_CYLINDER();
	cout << endl;}
	else cout << "Good job in cylinder volume!!!\n" << endl;
	if (CORRECT_VOLUME[3]!=5){cout << "You should try more cube volume problems.\n";
	VOLUME_CUBE();
	cout << endl;}
	else cout << "Good job in cube volume!!!\n" << endl ;
	if (CORRECT_VOLUME[4]!=5){cout << "You should try more triangular prism problems.\n";
	VOLUME_REGULAR_TRIANGLULAR_PRISMS();
	cout << endl;}
	else cout << "Good job in triangular prism!!!\n" << endl;
	if (CORRECT_VOLUME[5]!=5){cout << "You should try more rectangular prism problems.\n";
	VOLUME_REGULAR_RECTANGULAR_PRISMS();
	cout << endl;}
	else cout << "Good job in rectangular prism!!!\n" << endl;
	if (CORRECT_VOLUME[6]!=5){cout << "You should try more conical volume problems.\n";
	VOLUME_CONES();
	cout << endl;}
	else cout << "Good job in conical volume!!!\n" << endl;
}