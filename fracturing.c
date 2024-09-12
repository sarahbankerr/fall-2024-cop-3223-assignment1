// Sarah Banker 
// September 12th (REMAKE)
// Intro to C

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// defining the variables , so they dont have to be called as arguments
double x_1, x_2, y_1, y_2;

void askForUserInput() // ask for the user input
{
    printf("Enter your x_1 value: ");
    scanf("%lf", &x_1);
    printf("Enter your y_1 value: ");
    scanf("%lf", &y_1);
    printf("Enter your x_2 value: ");
    scanf("%lf", &x_2);
    printf("Enter your y_2 value: ");
    scanf("%lf", &y_2);
}

double calculateDistance() // calculating distance
{
    double distance = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2)); // calculating the distance using the distance formula
    printf("The distance between the two points is: %lf\n", distance);
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
    double width = x_2 - x_1;
    printf("The width of the city encompassed by your request is: %lf\n", width);
    return 3;
}

double calculateHeight() // calculating the height
{
    double height = y_2 - y_1;
    printf("The height of the city encompassed by your request is: %lf\n", height);
    return 3;
}

int main() // main function where all other functions are called into
{
    askForUserInput();
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}
