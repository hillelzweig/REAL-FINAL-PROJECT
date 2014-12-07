#ifndef HEADER_H_
#define HEADER_H_

extern int main_choice, choice, name;
extern int TRIES_ARITHMETIC[5], CORRECT_ARITHMETIC[5];
extern int TRIES_PERIMETER[8], CORRECT_PERIMETER[8];
extern int TRIES_AREA[7], CORRECT_AREA[7];
extern int TRIES_VOLUME[7], CORRECT_VOLUME[7];
//Generic Prototypes
void ASCII_ART();
void WELCOME();
//Arithmetic Prototypes
void ADDITION();
void SUBTRACTION();
void MULTIPLICATION();
void DIVISION();
//Perimeter Prototypes
void PERIMETER_CIRCLE();
void PERIMETER_TRIANGLE();
void PERIMETER_SQUARE();
void PERIMETER_RECTANGLE();
void PERIMETER_PENTAGON();
void PERIMETER_HEXAGON();
void PERIMETER_OCTAGON();
//Area Prototypes
void AREA_CIRCLE();
void AREA_TRIANGLE();
void AREA_SQUARE();
void AREA_RECTANGLE();
void AREA_TRAPEZOID();
void AREA_PARALLELOGRAM();
//Volume Prototypes
void VOLUME_SPHERE();
void VOLUME_CYLINDER();
void VOLUME_CUBE();
void VOLUME_REGULAR_TRIANGLULAR_PRISMS();
void VOLUME_REGULAR_RECTANGULAR_PRISMS();
void VOLUME_CONES();
//Retry Prototypes 
void RETRY_ARITHMETIC();
void RETRY_PERIMETER();
void RETRY_AREA();
void RETRY_VOLUME();
//Report Prototypes
void REPORT_ARITHMETIC();
void REPORT_PERIMETER();
void REPORT_AREA();
void REPORT_VOLUME();
//Menu Prototypes
void ARITHMETIC_MENU();
void PERIMETER_MENU();
void AREA_MENU();
void VOLUME_MENU();
void RETRY_MENU();
void SCORE_REPORT();
void WRITE_SCORE();
void MAIN_MENU();


#endif