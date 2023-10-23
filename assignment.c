#include <stdio.h>
#include <math.h>

#define PI (3.141592653589793)
#define DECIMAL_PER_METRE (1.0/40.46)

float getPlotArea(int number_of_sides, float common_side_length);
float getPrice(float price_per_decimal, float area_in_decimals);


int number_of_sides = 0;
float side_length;
float common_side_length = 0;
float total_side_length = 0;
float price_per_decimal;


int main()
{
    while (1)
    {
        printf("Enter next dimension (0 to exit):\n>>> ");
        scanf(" %f", &side_length);

        if (side_length == 0)
        {
            break;
        }

        number_of_sides++;
        total_side_length += side_length;
        common_side_length = total_side_length / number_of_sides;
    }

    printf("\n\nEnter below the price per decimal in that location: \n>>> ");
    scanf("%f", &price_per_decimal);

    float plot_area_in_decimals = getPlotArea(number_of_sides, common_side_length);
    printf("\n\nPlot area in decimals: %.3f\n", plot_area_in_decimals);

    float plot_price = getPrice(price_per_decimal, plot_area_in_decimals);
    printf("\n\nPrice of the plot: %.0f\n", plot_price);

    return 0;
}

float getPlotArea(int number_of_sides, float common_side_length)
{
    float area;
    float area_in_decimals;

    float perimeter = number_of_sides * common_side_length;
    float apothem = common_side_length / (2 * tan(PI / number_of_sides));

    area = (perimeter * apothem) / 2;
    area_in_decimals = area * DECIMAL_PER_METRE;

    return area_in_decimals;
}

float getPrice(float price_per_decimal, float area_in_decimals) {
	return price_per_decimal * area_in_decimals;
}