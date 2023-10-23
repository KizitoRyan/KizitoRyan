#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Assuming a rectangular-shaped plot of land
    char location[30];
    float length, width, area, numberOfDecimals;
    int pricePerDecimal, totalPrice;

    printf("Enter location:\n");
    gets(location);

    printf("Enter the dimensions of length and width in feet.\n");
    printf("length:\n");
    scanf("%f",&length);

    printf("width:\n");
    scanf("%f",&width);

    /*Calculate the area using the formula(answer in square feet)*/
    area = (length)*(width);

    //Converting the plot size to decimals
    numberOfDecimals = (area)/ (0.0023);

    printf("Enter the price per decimal of land");
    scanf("%d", &pricePerDecimal);

    totalPrice= (int)numberOfDecimals*pricePerDecimal;

    printf("\nThe approximated price of the plot of land located in %s is UGX %d.\n",location, totalPrice);
    return 0;
    }
