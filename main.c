#include <stdio.h>
#include <stdlib.h>
//Define constants and macros using preprocessor directives
#define PI 3.14
#define circleArea(r) (PI*r*r)


int main()
{
   float radius,area;

   //Get radius from user
   printf("Enter the radius\n");
   scanf("%f",&radius);

   //Calculate area using the macro
   area=circleArea(radius);
   printf(" Area %.2f",area);
    return 0;
}
