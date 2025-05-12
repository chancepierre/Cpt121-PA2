#include "header.h"

int main() 
{
    double mass, acceleration, radius;
    double height, mass1, mass2, distance;
    double fahrenheit;
    double x1, y1, x2, y2, z, x;
    int a, offset;
    char plaintext_character, encoded_character;

    // 1st Newton's Second Law of Motion
    
    printf("1st question. You will be finding Newton's Second Law of motion, First Enter the mass: ");
    scanf("%lf", &mass);
  
    printf("Now enter the acceleration: ");
    scanf("%lf", &acceleration);
    
    printf("You're answer for the Force = %.2f N\n", newtons2ndlaw(mass, acceleration));

    // 2nd Volume of a cylinder: volume_cylinder = PI * radius^2 * height
    
    printf("2nd Question. Next we will be finding the volume of a cylinder so first enter the radius of it: ");
    scanf("%lf", &radius);
  
    printf("And next what is the height of that cylinder: ");
    scanf("%lf", &height);
    
    printf("So therefore the volume of cylinder is = %.2f cubic meters\n", volumecylinder(radius, height));

    // 3rd Character encoding: encoded_character = offset + (plaintext_character - 'a') + 'A'
    
    getchar();
  
    printf("3rd question. We will be doing character encoding. Enter a lowercase letter: ");
    scanf("%c", &plaintext_character);
    
    printf("Enter an integer offset: ");
    scanf("%d", &offset);
    
    encoded_character = character_encoding(plaintext_character, offset);
    
    printf("Encoded character: %c\n", encoded_character);

    // 4th Gravity: force = G * mass1 * mass2 / distance^2
    
    printf("4th question. For the force of gravity, first enter mass1: ");
    scanf("%lf", &mass1);
   
    printf("Next, what is mass2: ");
    scanf("%lf", &mass2);
    
    printf("Then finally, what is the distance between them: ");
    scanf("%lf", &distance);
    
    printf("The Force due to gravity is: %.2e N\n", gravitationalforce(mass1, mass2, distance));

    // 5th Fahrenheit to Celsius conversion: celsius = (fahrenheit – 32) / (9 / 5)
    
    printf("5th question. Now we will convert temperature from Fahrenheit to Celsius. Enter the Fahrenheit temperature: ");
    scanf("%lf", &fahrenheit);
  
    printf("The temperature in Celsius is: %.2f\n", fahrenheittocelsius(fahrenheit));

    // 6th Distance between two points: distance = sqrt((x1 - x2)^2 + (y1 - y2)^2)
   
    printf("6th question. For the distance between two points, enter the first point (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
   
    printf("Enter the second point (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("The distance between the two points is: %.2f\n", calculatedistance(x1, y1, x2, y2));

    // 7th General equation: y = (89 / 27) - z * x + a / (a % 2)
   
    printf("7th question. Finally, for the general equation, enter values for z: ");
    scanf("%lf", &z);
   
    printf("Enter values for x: ");
    scanf("%lf", &x);
    
    printf("And an integer a: ");
    scanf("%d", &a);
    
    printf("Result of the general equation: %.2f\n", generalequation(z, x, a));

    return 0;
}
