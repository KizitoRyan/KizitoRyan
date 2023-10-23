#include <stdio.h>
#include <stdlib.h>

int main()
{
//This program outputs the equation of a perpendicular bisector.

double x1;
double y1;
double x2;
double y2;
double slope;

printf("This program calculates the equation of a perpendicular bisector.\n");
printf("Enter the first x coordinate:\n");
scanf("%lf", &x1);

printf("Enter the first y coordinate:\n");
scanf("%lf", &y1);
printf("The first coordinate is (%f, %f", x1, y1);

printf("Enter the second x coordinate:\n");
scanf("%lf", &x2);

printf("Enter the second y coordinate:\n");
scanf("%lf", %y2);
printf("The second coordinate is (%f, %f", x2, y2);

slope=((y2-y1)/(x2-x1));
printf("slope=%.2f", slope);

return 0;

}


