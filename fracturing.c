// Sarah Banker 
// September 12th (REMAKE)
// Intro to C

#include <stdio.h>
#include <math.h>

#define PI 3.14159


double askForUserInput() // ask for the user input
{
    // defining the variables , so they dont have to be called as arguments
    double x_1;
    printf("Enter your value: ");
    scanf("%lf", &x_1);
    return x_1;
}

double calculateDistance() // calculating distance
{
    double x_1 = askForUserInput();
    double x_2 = askForUserInput();
    double y_1 = askForUserInput();
    double y_2 = askForUserInput();

    double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)); // calculating the distance using the distance formula
    return distance;
}

double calculatePerimeter() // calculate perimeter
{
    double distance = calculateDistance();
    double perimeter = PI * distance;
    printf("The perimeter of the city encompassed by your request is: %lf\n", perimeter);
    return 3;
}

double calculateArea() // calculating the area
{
    double distance = calculateDistance();
    distance = distance / 2;
    distance = pow(distance, 2);
    double area = PI * distance;
    printf("The area of the city encompassed by your request is: %lf\n", area);
    return 4;
}

double calculateWidth() // calculating the width
{
    double x_1 = askForUserInput();
    double x_2 = askForUserInput();
    
    double width = x_2 - x_1;
    printf("The width of the city encompassed by your request is: %lf\n", width);
    return 3;
}

double calculateHeight() // calculating the height
{
    double y_1 = askForUserInput();
    double y_2 = askForUserInput();

    double height = y_2 - y_1;
    printf("The height of the city encompassed by your request is: %lf\n", height);
    return 3;
}

int main() // main function where all other functions are called into
{
    double d = calculateDistance();
    printf("The distance between the two points is: %lf\n", d);
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
