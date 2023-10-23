#include <stdio.h>
#include <stdlib.h>

int main()
{
 // Input coordinates of the two points.
 double x1, y1, x2, y2;
 printf("Enter co-ordinates of the first point (x1, y1):");
 scanf("%lf %lf", &x1, &y1);
 printf("Enter co-ordinates of the second point (x2, y2):");
 scanf("%lf %lf", &x2, &y2);

 //Compute slope of the line between the points.
 double slope = (y2 -y1) / (x2 - x1);

//Compute co-ordinates of the mid-point.
double x_mid = (x1 + x2) / 2;
double y_mid = (y1 + y2) / 2;

 //Compute slope of the perpendicular bisector.
 double perp_slope = -1 / slope;

 //Compute y intercept of the perpendicular bisector.
 double y_intercept = y_mid - (perp_slope * x_mid);

 //Output the information and equation of the perpendicular bisector.
 printf("Points: (%. llf, %.llf) and (%.llf, %.llf)\n", x1, y1, x2, y2);
 printf("Perpendicular bisector equation: y = %.2lfx + %.2lf\n", perp_slope, y_intercept);

 return 0;
}

