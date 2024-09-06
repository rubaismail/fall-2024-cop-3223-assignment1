//*****************************************************
// fracturing.c 
// Author: Ruba Ismail
// UCF ID: 5186181
// Date: 8/29/2024
// Class: COP 3223C, Professor Parra
// Purpose: Learn how to split up functions for different 
// responsibilities to organize code storage.
// input: coordinates
// output: calculated distance, perimeter, area, width, and height.
//*****************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159f 

//****************************
// Purpose: Calculate the distance between 2 points.
// Input: Coordinates for x1, x2, y1, y2.
// Output: The distance calculated.
// Precondition: Called in all other functions in program except main.
// Postcondition: To use the measurement for other calculations.
//****************************
double calculateDistanceMath()  
{
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    double distance = 0;

    // asking input for x's
    printf("Enter your coordinates for x1 and x2: \n");
    scanf("%lf" , &x1);
    scanf("%lf" , &x2);

    // asking input for y's
    printf("Enter your coordinates for y1 and y2: \n");
    scanf("%lf" , &y1);
    scanf("%lf" , &y2);

    // printing the coordinate points
    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf \n" , x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n" , x2, y2);
    
    // calculating the distance between the 2 points
    distance = sqrt(((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1)));
    
    return distance;
}
//****************************
// Purpose: Print the distance calculated in calculateDistanceMath.
// Output: Print statement stating the distance.
// Precondition: Complete assignment objective in main.
// Postcondition: Prints the calculated distance.
//****************************
double calculateDistance()  
{
    // retrieving the distance value calculated from the function with math portion.
   double distance = calculateDistanceMath();

    // Printing the distance.
    printf("The distance between the two points is %.3lf \n" , distance);
    
    return distance;
}
//****************************
// Purpose: Calculate the perimeter of the circle.
// Output: Print statement stating the perimeter.
// Precondition: Complete assignment objective in main.
// Postcondition: Prints the calculated perimeter.
//****************************
double calculatePerimeter() 
{
    double perimeter = 0;
    double distance = calculateDistanceMath();

    // calculating perimeter (2*pi*r) , where r is distance/2.
    perimeter = 2 * PI * (distance/2);
    printf("The perimeter of the city encompassed by your request is %.3lf \n" , perimeter );

    // reutrning a double of how difficult this function was to make.
    double difficulty_of_function = 2.0;
    return difficulty_of_function;
}
//****************************
// Purpose: Calculate the area of the circle.
// Output: Print statement stating the area.
// Precondition: Complete assignment objective in main.
// Postcondition: Prints the calculated area.
//****************************
double calculateArea()   
{
    double area;

    // calling calculateDistanceMath function to use the diameter for area calculation. 
    double distance = calculateDistanceMath();
    area = PI * pow((distance/2) , 2);

    printf("The area of the city encompassed by your request is %.3lf \n" , area);

    double difficulty_of_function = 1.0;
    return difficulty_of_function;
}
//****************************
// Purpose: State the width of the circle. practice DRY concept.
// Output: Print statement stating the width.
// Precondition: Complete assignment objective in main.
// Postcondition: Prints the width which is the same as the distance.
//****************************
double calculateWidth() 
{
    double width = calculateDistanceMath();    
    printf("The width of the city encompassed by your request is %.3lf \n" , width);

    double difficulty_of_function = 1.0;
    return difficulty_of_function;
}
//****************************
// Purpose: State the height of the circle. practice DRY concept.
// Output: Print statement stating the height.
// Precondition: Complete assignment objective in main.
// Postcondition: Prints the height which is the same as the distance.
//****************************
double calculateHeight()
{
    double height = calculateDistanceMath();    // The hright of a circle is also the same as it's diamemter.
    printf("The height of the city encompassed by your request is %.3lf \n" , height);

    double difficulty_of_function = 1.0;
    return difficulty_of_function;
}
//****************************
// Purpose: Call all our functions that print calculations.
// Precondition: Complete assignment objective.
//****************************
int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
    