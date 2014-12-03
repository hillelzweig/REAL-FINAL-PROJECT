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
void REPORT_ARITHMETIC(){
	cout << "You got " << TRIES_ARITHMETIC[1] << " addition problems wrong.\n";
	cout << "You got " << TRIES_ARITHMETIC[2] << " subtraction problems wrong.\n";
	cout << "You got " << TRIES_ARITHMETIC[3] << " multiplication problems wrong.\n";
	cout << "You got " << TRIES_ARITHMETIC[4] << " division problems wrong.\n";
	cout << "You got " << TRIES_ARITHMETIC[5] << " retried problems wrong.\n";
	cout << endl;
	cout << "You got " << CORRECT_ARITHMETIC[1] << " addition problems right." << endl;
	cout << "You got " << CORRECT_ARITHMETIC[2] << " subtraction problems right." << endl;
	cout << "You got " << CORRECT_ARITHMETIC[3] << " multiplication problems right." << endl;
	cout << "You got " << CORRECT_ARITHMETIC[4] << " division problems right." << endl;
	cout << "You got " << CORRECT_ARITHMETIC[5] << " retried problems correct.\n";
	cout << endl;}
void REPORT_PERIMETER(){
	cout << "You got " << TRIES_PERIMETER[1] << " circumference problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[2] << " pythagorean theorem problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[3] << " square perimeter problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[4] << " rectangle perimeter problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[5] << " pentagon perimeter problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[6] << " hexagon perimeter problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[7] << " octagon perimeter problems wrong.\n";
	cout << "You got " << TRIES_PERIMETER[8] << " retried perimeter problems wrong.\n";
	cout << endl;
	cout << "You got " << CORRECT_PERIMETER[1] << " circumference problems right." << endl;
	cout << "You got " << CORRECT_PERIMETER[2] << " pythagorean theorem problems right." << endl;
	cout << "You got " << CORRECT_PERIMETER[3] << " square perimeter problems right." << endl;
	cout << "You got " << CORRECT_PERIMETER[4] << " rectangle perimeter problems right." << endl;
	cout << "You got " << CORRECT_PERIMETER[5] << " pentagon perimeter problems correct.\n";
	cout << "You got " << CORRECT_PERIMETER[6] << " hexagon perimeter problems correct.\n";
	cout << "You got " << CORRECT_PERIMETER[7] << " octagon perimeter problems correct.\n";
	cout << "You got " << CORRECT_PERIMETER[8] << " retried perimeter problems correct.\n";
	cout << endl;}
void REPORT_AREA(){
	cout << "You got " << TRIES_AREA[1] << " circular area problems wrong.\n";
	cout << "You got " << TRIES_AREA[2] << " traingular area problems wrong.\n";
	cout << "You got " << TRIES_AREA[3] << " square area problems wrong.\n";
	cout << "You got " << TRIES_AREA[4] << " rectangle area problems wrong.\n";
	cout << "You got " << TRIES_AREA[5] << " trapezoid area problems wrong.\n";
	cout << "You got " << TRIES_AREA[6] << " parallelogram area problems wrong.\n";
	cout << "You got " << TRIES_AREA[7] << " retried area problems wrong.\n";
	cout << endl;
	cout << "You got " << CORRECT_AREA[1] << " circular area problems right." << endl;
	cout << "You got " << CORRECT_AREA[2] << " traingular area problems right." << endl;
	cout << "You got " << CORRECT_AREA[3] << " square area problems right." << endl;
	cout << "You got " << CORRECT_AREA[4] << " rectangle area problems right." << endl;
	cout << "You got " << CORRECT_AREA[5] << " trapezoid area problems correct.\n";
	cout << "You got " << CORRECT_AREA[6] << " parallelogram area problems correct.\n";
	cout << "You got " << CORRECT_AREA[7] << " retried area problems correct.\n";
	cout << endl;}
void REPORT_VOLUME(){
	cout << "You got " << TRIES_VOLUME[1] << " sphere volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[2] << " cylinder volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[3] << " cube volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[4] << " triangular prisms volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[5] << " rectangular volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[6] << " conical volume problems wrong.\n";
	cout << "You got " << TRIES_VOLUME[7] << " retried volume problems wrong.\n";
	cout << endl;
	cout << "You got " << CORRECT_VOLUME[1] << " sphere volume problems right." << endl;
	cout << "You got " << CORRECT_VOLUME[2] << " cylinder volume problems right." << endl;
	cout << "You got " << CORRECT_VOLUME[3] << " cube volume problems right." << endl;
	cout << "You got " << CORRECT_VOLUME[4] << " triangular prisms volume problems right." << endl;
	cout << "You got " << CORRECT_VOLUME[5] << " rectangular volume problems correct.\n";
	cout << "You got " << CORRECT_VOLUME[6] << " conical volume problems correct.\n";
	cout << "You got " << CORRECT_VOLUME[7] << " retried volume problems correct.\n";
	cout << endl;}
void SCORE_REPORT(){
	double sum_add, sum_sub, sum_mult, sum_div, sum_perc=0;
	double p1, p2, p3, p4, p5,p6,p7,p8,p9;
	sum_add = CORRECT_ARITHMETIC[0];
	sum_sub = CORRECT_ARITHMETIC[0];
	sum_mult = CORRECT_ARITHMETIC[0];
	sum_div = CORRECT_ARITHMETIC[0];
	for (int i = 1; i < 6; i++)
	{
		sum_add = CORRECT_ARITHMETIC[1];
		sum_sub = CORRECT_ARITHMETIC[2];
		sum_mult = CORRECT_ARITHMETIC[3];
		sum_div = CORRECT_ARITHMETIC[4];
	}
	
	cout << "Your percentage for addition is " << (sum_add / 5) * 100 << "%." << endl;
	cout << "Your percentage for sub is " << (sum_sub / 5) * 100 << "%." << endl;
	cout << "Your percentage for mult is " << (sum_mult / 5) * 100 << "%." << endl;
	cout << "Your percentage for div is " << (sum_div / 5) * 100 << "%." << endl;
	p1 = (sum_add / 5) * 100;
	p2 = (sum_sub / 5) * 100;
	p3 = (sum_mult / 5) * 100;
	p4 = (sum_div / 5) * 100;
	if( sum_add < 1 ){p5 = 0;}
	else p5 = 1;
	if (sum_sub < 1){ p6 = 0; }
	else p6 = 1;
	if (sum_mult < 1){ p7 = 0; }
	else p7 = 1;
	if (sum_div < 1){ p8 = 0; }
	else p8 = 1;
	sum_perc = ((p1 + p2 + p3 + p4)/(p5+p6+p7+p8));

	/*for (int i = 1; i < 6; i++)
	{
		sum_perc = (((sum_add / 5) + (sum_sub / 5) + (sum_mult / 5) + (sum_div / 5)) * CORRECT_ARITHMETIC[i]) * 100;
	}*/
	cout << "Your total percentage for arithmetic is " << sum_perc << "%." << endl;

	/*cout << (sum_add / 5) * 100 << endl;
	cout << (sum_sub / 5) * 100 << endl;
	cout << (sum_mult / 5) * 100 << endl;
	cout << (sum_div / 5) * 100 << endl;*/
	
	/*cout << CORRECT_ARITHMETIC[1, 2, 3, 4, 5] / 5 << endl;
	cout << TRIES_PERIMETER[1, 2, 3, 4, 5, 6, 7] / 7 << endl;
	cout << CORRECT_AREA[1, 2, 3, 4, 5, 6, 7] / 7 << endl;
	cout << CORRECT_VOLUME[1, 2, 3, 4, 5, 6, 7] / 7 << endl;*/
}