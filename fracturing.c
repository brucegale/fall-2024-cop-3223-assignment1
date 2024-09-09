//**
// fractures.c
// Author: Bruce Gale + NID: br852209
// Date: 9/8/24
// Class: COP 3223, Juan Parra
// Purpose: This program prints a specific message to the
// command line. The main purpose of this assignment is to
// check and see whether I can connect to the Codespaces Server.
// Input: None
//
// Output: (to the command line) A brief Message
// //**

#include<stdio.h> //includes the standard io
#include<math.h> // includes the math library in order to use square root and exponential multiplication
#define M_PI 3.14159 // defines the variable PI to the numerical value assigned

// function in order to calculate the distance / diameter
double calculateDistance()
 {

    int x1, y1, x2, y2;

    printf("Enter point 1 (x1, y1)\n");
    scanf("%d%d", &x1, &y1);

    printf("Enter point 2 (x2, y2)\n");
    scanf("%d%d", &x2, &y2);

    double distance = sqrt( (x2 -x1) * (x2 - x1) + (y2 -y1) * (y2-y1));

    printf("x1 and x2 are: x1 = %d, x2 = %d\n", x1, x2);
    printf("y1 and y2 are: y1= %d, y2 = %d\n", y1, y2);
    printf("The distance between the two points is %.2lf\n", distance);

    return distance;

}

// the function below uses calculateDistance to find the radius and implement it into the formula which equals the perimeter

double calculatePerimeter()
{
    double radius = calculateDistance() / 2;
    double perimeter = 2 * M_PI * radius;
     // M_PI is defined at the top of the code with the given value of PI: 3.14159
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);

    return 2.0;
}

// once again, calculateArea uses calculateDistance to find the radius and in turn find the area.
double calculateArea() 
{
    double radius = calculateDistance() / 2;
    double area = M_PI * pow(radius, 2);
    // pow is used as a quick way to do exponential math rather than typing out the multiplication
    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 3.0;
    //This function was difficult due to figuring out the format of the pow function
}

// the width, much like the height equals the distance, therefore the below functions call for a double that is equal to the distance
double calculateWidth()
{
    double distance = calculateDistance();

    printf("The width of the city encompassed by your request is %.2lf\n", distance);

    return 1.0;
    // This function was fairly easy
}

double calculateHeight()
{
    double distance = calculateDistance();

    printf("The height of the city encompassed by your request is %.2lf\n", distance);

    return 1.0;
    // The difficulty of this function wasn't high
}

// the function below is solely used to call the other functions and solve the formulas based on user input
int main(int argc, char **argv)
{

    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}