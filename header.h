#define _CRT_SECURE_NO_WARNINGS

#ifndef HEADER_H
#define HEADER_H


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159
#define G (6.67 * pow(10, -11))

double newtons2ndlaw(double mass, double acceleration);

double volumecylinder(double radius, double height);

char character_encoding(char plaintext_character, int offset);

double gravitationalforce(double mass1, double mass2, double distance);

double fahrenheittocelsius(double fahrenheit);

double calculatedistance(double x1, double y1, double x2, double y2);

double generalequation(double z, double x, int a);

#endif
