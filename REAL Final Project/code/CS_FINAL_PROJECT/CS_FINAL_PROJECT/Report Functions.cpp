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
	cout << endl;
}
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
	cout << endl;
}
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
	cout << endl;
}
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
	cout << endl;
}
void SCORE_REPORT(){
	cout << endl;
	//ARITHMETIC
	double sum_add, sum_sub, sum_mult, sum_div, sum_perc = 0;
	double p1, p2, p3, p4, p5, p6, p7, p8, p9;
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
	p1 = (sum_add / 5) * 100;
	p2 = (sum_sub / 5) * 100;
	p3 = (sum_mult / 5) * 100;
	p4 = (sum_div / 5) * 100;
	if (sum_add < 1){ p5 = 0; }
	else p5 = 1;
	if (sum_sub < 1){ p6 = 0; }
	else p6 = 1;
	if (sum_mult < 1){ p7 = 0; }
	else p7 = 1;
	if (sum_div < 1){ p8 = 0; }
	else p8 = 1;
	if ((p5 + p6 + p7 + p8) == 0) { sum_perc = 0; }
	else sum_perc = ((p1 + p2 + p3 + p4) / (p5 + p6 + p7 + p8));
	cout << "Addition: " << (sum_add / 5) * 100 << "%." << endl;
	cout << "Subtraction: " << (sum_sub / 5) * 100 << "%." << endl;
	cout << "Multiplication: " << (sum_mult / 5) * 100 << "%." << endl;
	cout << "Division: " << (sum_div / 5) * 100 << "%." << endl;
	cout << "Total percentage: " << sum_perc << "%." << endl << endl;

	//AREA
	double sum_circ, sum_tri, sum_sqr, sum_rec, sum_trap, sum_para, sum_perc2 = 0;
	double q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;
	sum_circ = CORRECT_AREA[0];
	sum_tri = CORRECT_AREA[0];
	sum_sqr = CORRECT_AREA[0];
	sum_rec = CORRECT_AREA[0];
	sum_trap = CORRECT_AREA[0];
	sum_para = CORRECT_AREA[0];
	for (int i = 1; i < 6; i++)
	{
		sum_circ = CORRECT_AREA[1];
		sum_tri = CORRECT_AREA[2];
		sum_sqr = CORRECT_AREA[3];
		sum_rec = CORRECT_AREA[4];
		sum_trap = CORRECT_AREA[5];
		sum_para = CORRECT_AREA[6];
	}
	q1 = (sum_circ / 5) * 100;
	q2 = (sum_tri / 5) * 100;
	q3 = (sum_sqr / 5) * 100;
	q4 = (sum_rec / 5) * 100;
	q5 = (sum_trap / 5) * 100;
	q6 = (sum_para / 5) * 100;
	if (sum_circ < 1){ q7 = 0; }
	else q7 = 1;
	if (sum_tri < 1){ q8 = 0; }
	else q8 = 1;
	if (sum_sqr < 1){ q9 = 0; }
	else q9 = 1;
	if (sum_rec < 1){ q10 = 0; }
	else q10 = 1;
	if (sum_trap < 1){ q11 = 0; }
	else q11 = 1;
	if (sum_para < 1){ q12 = 0; }
	else q12 = 1;
	if ((q7 + q8 + q9 + q10 + q11 + q12) == 0) { sum_perc2 = 0; }
	else sum_perc2 = ((q1 + q2 + q3 + q4 + q5 + q6) / (q7 + q8 + q9 + q10 + q11 + q12));
	cout << "Area Circles: " << (sum_circ / 5) * 100 << "%." << endl;
	cout << "Area Triangles: " << (sum_tri / 5) * 100 << "%." << endl;
	cout << "Area Squares: " << (sum_sqr / 5) * 100 << "%." << endl;
	cout << "Area Rectangles: " << (sum_rec / 5) * 100 << "%." << endl;
	cout << "Area Trapazoids: " << (sum_trap / 5) * 100 << "%." << endl;
	cout << "Area Parallelograms: " << (sum_para / 5) * 100 << "%." << endl;
	cout << "Area Total percentage: " << sum_perc2 << "%." << endl << endl;

	//PERIMETER
	double per_circ, per_tri, per_sqr, per_rec, per_pent, per_hex, per_oct, sum_perc3 = 0;
	double r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14;
	per_circ = CORRECT_PERIMETER[0];
	per_tri = CORRECT_PERIMETER[0];
	per_sqr = CORRECT_PERIMETER[0];
	per_rec = CORRECT_PERIMETER[0];
	per_pent = CORRECT_PERIMETER[0];
	per_hex = CORRECT_PERIMETER[0];
	per_oct = CORRECT_PERIMETER[0];
	for (int i = 1; i < 6; i++)
	{
		per_circ = CORRECT_PERIMETER[1];
		per_tri = CORRECT_PERIMETER[2];
		per_sqr = CORRECT_PERIMETER[3];
		per_rec = CORRECT_PERIMETER[4];
		per_pent = CORRECT_PERIMETER[5];
		per_hex = CORRECT_PERIMETER[6];
		per_oct = CORRECT_PERIMETER[7];
	}
	r1 = (per_circ / 5) * 100;
	r2 = (per_tri / 5) * 100;
	r3 = (per_sqr / 5) * 100;
	r4 = (per_rec / 5) * 100;
	r5 = (per_pent / 5) * 100;
	r6 = (per_hex / 5) * 100;
	r7 = (per_hex / 5) * 100;
	if (per_circ < 1){ r8 = 0; }
	else r8 = 1;
	if (per_tri < 1){ r9 = 0; }
	else r9 = 1;
	if (per_sqr < 1){ r10 = 0; }
	else r10 = 1;
	if (per_rec < 1){ r11 = 0; }
	else r11 = 1;
	if (per_pent < 1){ r12 = 0; }
	else r12 = 1;
	if (per_hex < 1){ r13 = 0; }
	else r13 = 1;
	if (per_oct < 1){ r14 = 0; }
	else r14 = 1;
	if ((r8 + r9 + r10 + r11 + r12 + r13 + r14) == 0) { sum_perc2 = 0; }
	else sum_perc3 = ((r1 + r2 + r3 + r4 + r5 + r6 + r7) / (r8 + r9 + r10 + r11 + r12 + r13 + r14));
	cout << "Perimeter Circles: " << (per_circ / 5) * 100 << "%." << endl;
	cout << "Perimeter Triangles: " << (per_tri / 5) * 100 << "%." << endl;
	cout << "Perimeter Squares: " << (per_sqr / 5) * 100 << "%." << endl;
	cout << "Perimeter Rectangles: " << (per_rec / 5) * 100 << "%." << endl;
	cout << "Perimeter Pentagons: " << (per_pent / 5) * 100 << "%." << endl;
	cout << "Perimeter Hexagons: " << (per_hex / 5) * 100 << "%." << endl;
	cout << "Perimeter Octagons: " << (per_oct / 5) * 100 << "%." << endl;
	cout << "Perimeter Total percentage: " << sum_perc3 << "%." << endl << endl;

	//VOLUME
	double vol_sph, vol_cyl, vol_cub, vol_rtp, vol_rrt, vol_con, sum_perc4 = 0;
	double s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;
	vol_sph = CORRECT_VOLUME[0];
	vol_cyl = CORRECT_VOLUME[0];
	vol_cub = CORRECT_VOLUME[0];
	vol_rtp = CORRECT_VOLUME[0];
	vol_rrt = CORRECT_VOLUME[0];
	vol_con = CORRECT_VOLUME[0];
	for (int i = 1; i < 6; i++)
	{
		vol_sph = CORRECT_VOLUME[1];
		vol_cyl = CORRECT_VOLUME[2];
		vol_cub = CORRECT_VOLUME[3];
		vol_rtp = CORRECT_VOLUME[4];
		vol_rrt = CORRECT_VOLUME[5];
		vol_con = CORRECT_VOLUME[6];
	}
	s1 = (vol_sph / 5) * 100;
	s2 = (vol_cyl / 5) * 100;
	s3 = (vol_cub / 5) * 100;
	s4 = (vol_rtp / 5) * 100;
	s5 = (vol_rrt / 5) * 100;
	s6 = (vol_con / 5) * 100;
	if (vol_sph < 1){ s7 = 0; }
	else s7 = 1;
	if (vol_cyl < 1){ s8 = 0; }
	else s8 = 1;
	if (vol_cub < 1){ s9 = 0; }
	else s9 = 1;
	if (vol_rtp < 1){ s10 = 0; }
	else s10 = 1;
	if (vol_rrt < 1){ s11 = 0; }
	else s11 = 1;
	if (vol_con < 1){ s12 = 0; }
	else s12 = 1;
	if ((s7 + s8 + s9 + s10 + s11 + s12) == 0) { sum_perc2 = 0; }
	else sum_perc4 = ((s1 + s2 + s3 + s4 + s5 + s6) / (s7 + s8 + s9 + s10 + s11 + s12));
	cout << "Volume Spheres: " << (vol_sph / 5) * 100 << "%." << endl;
	cout << "Volume Cyliders: " << (vol_cyl / 5) * 100 << "%." << endl;
	cout << "Volume Cubes: " << (vol_cub / 5) * 100 << "%." << endl;
	cout << "Volume Triangular prisms: " << (vol_rtp / 5) * 100 << "%." << endl;
	cout << "Volume Rectangular prisms: " << (vol_rrt / 5) * 100 << "%." << endl;
	cout << "Volume Cones: " << (vol_con / 5) * 100 << "%." << endl;
	cout << "Volume Total percentage: " << sum_perc4 << "%." << endl << endl;
	double percentage = ((p1 + p2 + p3 + p4 + q1 + q2 + q3 + q4 + q5 + q6 + r1 + r2 + r3 + r4 + r5 + r6 + r7 + s1 + s2 + s3 + s4 + s5 + s6) / 23);
	string grade;
	cout << "Total Percentage for all sections: " << percentage << "%." << endl << endl;
	if (percentage >= 97) { grade = "A+\n\n"; cout << grade; }
	else if (percentage <= 96 && percentage >= 94) { grade = "A\n\n"; cout << grade; }
	else if (percentage <= 93 && percentage >= 90) { grade = "A-\n\n"; cout << grade; }
	else if (percentage <= 89 && percentage >= 87) { grade = "B+\n\n"; cout << grade; }
	else if (percentage <= 86 && percentage >= 84) { grade = "B\n\n"; cout << grade; }
	else if (percentage <= 83 && percentage >= 80) { grade = "B-\n\n"; cout << grade; }
	else if (percentage <= 79 && percentage >= 77) { grade = "C+\n\n"; cout << grade; }
	else if (percentage <= 76 && percentage >= 74) { grade = "C\n\n"; cout << grade; }
	else if (percentage <= 73 && percentage >= 70) { grade = "C-\n\n"; cout << grade; }
	else if (percentage <= 69 && percentage >= 67) { grade = "D+\n\n"; cout << grade; }
	else if (percentage <= 66 && percentage >= 64) { grade = "D\n\n"; cout << grade; }
	else if (percentage <= 63 && percentage >= 60) { grade = "D-\n\n"; cout << grade; }
	else { grade = "F\n\n"; cout << grade; }

}
void WRITE_SCORE(){
	cout << endl;
	ofstream fout;
	fout.open("Your Grades.txt", ios::out | ios::app);

	//ARITHMETIC
	double sum_add, sum_sub, sum_mult, sum_div, sum_perc = 0;
	double p1, p2, p3, p4, p5, p6, p7, p8, p9;
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
	p1 = (sum_add / 5) * 100;
	p2 = (sum_sub / 5) * 100;
	p3 = (sum_mult / 5) * 100;
	p4 = (sum_div / 5) * 100;
	if (sum_add < 1){ p5 = 0; }
	else p5 = 1;
	if (sum_sub < 1){ p6 = 0; }
	else p6 = 1;
	if (sum_mult < 1){ p7 = 0; }
	else p7 = 1;
	if (sum_div < 1){ p8 = 0; }
	else p8 = 1;
	if ((p5 + p6 + p7 + p8) == 0) { sum_perc = 0; }
	else sum_perc = ((p1 + p2 + p3 + p4) / (p5 + p6 + p7 + p8));
	fout << "Addition: " << (sum_add / 5) * 100 << "%." << endl;
	fout << "Subtraction: " << (sum_sub / 5) * 100 << "%." << endl;
	fout << "Multiplication: " << (sum_mult / 5) * 100 << "%." << endl;
	fout << "Division: " << (sum_div / 5) * 100 << "%." << endl;
	fout << "Total percentage: " << sum_perc << "%." << endl << endl;

	//AREA
	double sum_circ, sum_tri, sum_sqr, sum_rec, sum_trap, sum_para, sum_perc2 = 0;
	double q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12;
	sum_circ = CORRECT_AREA[0];
	sum_tri = CORRECT_AREA[0];
	sum_sqr = CORRECT_AREA[0];
	sum_rec = CORRECT_AREA[0];
	sum_trap = CORRECT_AREA[0];
	sum_para = CORRECT_AREA[0];
	for (int i = 1; i < 6; i++)
	{
		sum_circ = CORRECT_AREA[1];
		sum_tri = CORRECT_AREA[2];
		sum_sqr = CORRECT_AREA[3];
		sum_rec = CORRECT_AREA[4];
		sum_trap = CORRECT_AREA[5];
		sum_para = CORRECT_AREA[6];
	}
	q1 = (sum_circ / 5) * 100;
	q2 = (sum_tri / 5) * 100;
	q3 = (sum_sqr / 5) * 100;
	q4 = (sum_rec / 5) * 100;
	q5 = (sum_trap / 5) * 100;
	q6 = (sum_para / 5) * 100;
	if (sum_circ < 1){ q7 = 0; }
	else q7 = 1;
	if (sum_tri < 1){ q8 = 0; }
	else q8 = 1;
	if (sum_sqr < 1){ q9 = 0; }
	else q9 = 1;
	if (sum_rec < 1){ q10 = 0; }
	else q10 = 1;
	if (sum_trap < 1){ q11 = 0; }
	else q11 = 1;
	if (sum_para < 1){ q12 = 0; }
	else q12 = 1;
	if ((q7 + q8 + q9 + q10 + q11 + q12) == 0) { sum_perc2 = 0; }
	else sum_perc2 = ((q1 + q2 + q3 + q4 + q5 + q6) / (q7 + q8 + q9 + q10 + q11 + q12));
	fout << "Area Circles: " << (sum_circ / 5) * 100 << "%." << endl;
	fout << "Area Triangles: " << (sum_tri / 5) * 100 << "%." << endl;
	fout << "Area Squares: " << (sum_sqr / 5) * 100 << "%." << endl;
	fout << "Area Rectangles: " << (sum_rec / 5) * 100 << "%." << endl;
	fout << "Area Trapazoids: " << (sum_trap / 5) * 100 << "%." << endl;
	fout << "Area Parallelograms: " << (sum_para / 5)* 100 << "%." << endl;
	fout << "Area Total percentage: " << sum_perc2 << "%." << endl << endl;

	//PERIMETER
	double per_circ, per_tri, per_sqr, per_rec, per_pent, per_hex, per_oct, sum_perc3 = 0;
	double r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14;
	per_circ = CORRECT_PERIMETER[0];
	per_tri = CORRECT_PERIMETER[0];
	per_sqr = CORRECT_PERIMETER[0];
	per_rec = CORRECT_PERIMETER[0];
	per_pent = CORRECT_PERIMETER[0];
	per_hex = CORRECT_PERIMETER[0];
	per_oct = CORRECT_PERIMETER[0];
	for (int i = 1; i < 6; i++)
	{
		per_circ = CORRECT_PERIMETER[1];
		per_tri = CORRECT_PERIMETER[2];
		per_sqr = CORRECT_PERIMETER[3];
		per_rec = CORRECT_PERIMETER[4];
		per_pent = CORRECT_PERIMETER[5];
		per_hex = CORRECT_PERIMETER[6];
		per_oct = CORRECT_PERIMETER[7];
	}
	r1 = (per_circ / 5) * 100;
	r2 = (per_tri / 5) * 100;
	r3 = (per_sqr / 5) * 100;
	r4 = (per_rec / 5) * 100;
	r5 = (per_pent / 5) * 100;
	r6 = (per_hex / 5) * 100;
	r7 = (per_hex / 5) * 100;
	if (per_circ < 1){ r8 = 0; }
	else r8 = 1;
	if (per_tri < 1){ r9 = 0; }
	else r9 = 1;
	if (per_sqr < 1){ r10 = 0; }
	else r10 = 1;
	if (per_rec < 1){ r11 = 0; }
	else r11 = 1;
	if (per_pent < 1){ r12 = 0; }
	else r12 = 1;
	if (per_hex < 1){ r13 = 0; }
	else r13 = 1;
	if (per_oct < 1){ r14 = 0; }
	else r14 = 1;
	if ((r8 + r9 + r10 + r11 + r12 + r13 + r14) == 0) { sum_perc2 = 0; }
	else sum_perc3 = ((r1 + r2 + r3 + r4 + r5 + r6 + r7) / (r8 + r9 + r10 + r11 + r12 + r13 + r14));
	fout << "Perimeter Circles: " << (per_circ / 5) * 100 << "%." << endl;
	fout << "Perimeter Triangles: " << (per_tri / 5) * 100 << "%." << endl;
	fout << "Perimeter Squares: " << (per_sqr / 5) * 100 << "%." << endl;
	fout << "Perimeter Rectangles: " << (per_rec / 5) * 100 << "%." << endl;
	fout << "Perimeter Pentagons: " << (per_pent / 5) * 100 << "%." << endl;
	fout << "Perimeter Hexagons: " << (per_hex / 5)* 100 << "%." << endl;
	fout << "Perimeter Octagons: " << (per_oct / 5) * 100 << "%." << endl;
	fout << "Perimeter Total percentage: " << sum_perc3 << "%." << endl << endl;

	//VOLUME
	double vol_sph, vol_cyl, vol_cub, vol_rtp, vol_rrt, vol_con, sum_perc4 = 0;
	double s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;
	vol_sph = CORRECT_VOLUME[0];
	vol_cyl = CORRECT_VOLUME[0];
	vol_cub = CORRECT_VOLUME[0];
	vol_rtp = CORRECT_VOLUME[0];
	vol_rrt = CORRECT_VOLUME[0];
	vol_con = CORRECT_VOLUME[0];
	for (int i = 1; i < 6; i++)
	{
		vol_sph = CORRECT_VOLUME[1];
		vol_cyl = CORRECT_VOLUME[2];
		vol_cub = CORRECT_VOLUME[3];
		vol_rtp = CORRECT_VOLUME[4];
		vol_rrt = CORRECT_VOLUME[5];
		vol_con = CORRECT_VOLUME[6];
	}
	s1 = (vol_sph / 5) * 100;
	s2 = (vol_cyl / 5) * 100;
	s3 = (vol_cub / 5) * 100;
	s4 = (vol_rtp / 5) * 100;
	s5 = (vol_rrt / 5) * 100;
	s6 = (vol_con / 5) * 100;
	if (vol_sph < 1){ s7 = 0; }
	else s7 = 1;
	if (vol_cyl < 1){ s8 = 0; }
	else s8 = 1;
	if (vol_cub < 1){ s9 = 0; }
	else s9 = 1;
	if (vol_rtp < 1){ s10 = 0; }
	else s10 = 1;
	if (vol_rrt < 1){ s11 = 0; }
	else s11 = 1;
	if (vol_con < 1){ s12 = 0; }
	else s12 = 1;
	if ((s7 + s8 + s9 + s10 + s11 + s12) == 0) { sum_perc2 = 0; }
	else sum_perc4 = ((s1 + s2 + s3 + s4 + s5 + s6) / (s7 + s8 + s9 + s10 + s11 + s12));
	fout << "Volume Spheres: " << (vol_sph / 5) * 100 << "%." << endl;
	fout << "Volume Cyliders: " << (vol_cyl / 5) * 100 << "%." << endl;
	fout << "Volume Cubes: " << (vol_cub / 5) * 100 << "%." << endl;
	fout << "Volume Triangular prisms: " << (vol_rtp / 5) * 100 << "%." << endl;
	fout << "Volume Rectangular prisms: " << (vol_rrt / 5) * 100 << "%." << endl;
	fout << "Volume Cones: " << (vol_con / 5) * 100 << "%." << endl;
	fout << "Volume Total percentage: " << sum_perc4 << "%." << endl << endl;
	double percentage = ((p1 + p2 + p3 + p4 + q1 + q2 + q3 + q4 + q5 + q6 + r1 + r2 + r3 + r4 + r5 + r6 + r7 + s1 + s2 + s3 + s4 + s5 + s6) / 23);
	string grade;
	fout << "Total Percentage for all sections: " << percentage << "%." << endl << endl;
	if (percentage >= 97) { grade = "A+\n\n"; cout << grade; }
	else if (percentage <= 96 && percentage >= 94) { grade = "A\n\n"; fout << grade; }
	else if (percentage <= 93 && percentage >= 90) { grade = "A-\n\n"; fout << grade; }
	else if (percentage <= 89 && percentage >= 87) { grade = "B+\n\n"; fout << grade; }
	else if (percentage <= 86 && percentage >= 84) { grade = "B\n\n"; fout << grade; }
	else if (percentage <= 83 && percentage >= 80) { grade = "B-\n\n"; fout << grade; }
	else if (percentage <= 79 && percentage >= 77) { grade = "C+\n\n"; fout << grade; }
	else if (percentage <= 76 && percentage >= 74) { grade = "C\n\n"; fout << grade; }
	else if (percentage <= 73 && percentage >= 70) { grade = "C-\n\n"; fout << grade; }
	else if (percentage <= 69 && percentage >= 67) { grade = "D+\n\n"; fout << grade; }
	else if (percentage <= 66 && percentage >= 64) { grade = "D\n\n"; fout << grade; }
	else if (percentage <= 63 && percentage >= 60) { grade = "D-\n\n"; fout << grade; }
	else { grade = "F\n\n"; fout << grade; }
	fout.close();
}