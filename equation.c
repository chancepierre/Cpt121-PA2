#include "header.h"

double newtons2ndlaw(double mass, double acceleration)
{
    return mass * acceleration;
}

double volumecylinder(double radius, double height)
{
    return PI * radius * radius * height;
}

char character_encoding(char plaintext_character, int offset)
{
    return offset + (plaintext_character - 'a') + 'A';
}

double gravitationalforce(double mass1, double mass2, double distance)
{
    return G * mass1 * mass2 / (distance * distance);
}

double fahrenheittocelsius(double fahrenheit)
{
    return (fahrenheit - 32) / (9.0 / 5.0);
}

double calculatedistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double generalequation(double z, double x, int a)
{
    return (double)89 / 27 - z * x + (double)a / (a % 2);
}
