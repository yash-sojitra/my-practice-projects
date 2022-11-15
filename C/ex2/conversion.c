#include <stdio.h>

float convert(int num, float value);

int main()
{
    int i;
    float c;
    float value;

    printf("welcome to the converter\n\n 1 - kilometers to miles\n 2 - inches to    foot\n 3 - centimeters to inches\n 4 - pounds to kilograms\n 5 - inches to meters\n\npress the respective number to choose conversion type\n");

    scanf("%d", &i);

    printf("type in the value that you need to convert\n");

    scanf("%f", &value);

    c = convert(i, value);

    printf("the conversion value is %f", c);

    return 0;
}

float convert(int i, float value)
{
    switch (i)
    {
    case 1:
        return value * 0.621371;
        break;

    case 2:
        return value * 0.683333;
        break;

    case 3:
        return value * 0.393701;
        break;

    case 4:
        return value * 0.453592;
        break;

    case 5:
        return value * 0.0254;
        break;

    default:
        printf("invalid conversion value: \n");
        break;
    }
}
