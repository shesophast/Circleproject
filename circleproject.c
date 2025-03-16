#include <stdio.h>

int main(void)
{
    float circleradius;
    const double pi =3.14159; // section 10.6 in C Programming eBook
    
    
    printf("Enter a value for the radius:\n");
    scanf("%f",&circleradius);
    

        printf("The diameter is: %f\n", 2*circleradius); //formula to calculate the diameter
             

        printf("The circumference is: %f\n", 2*pi*circleradius); //formula to calculate the circumference
              

        printf("The area is : %f\n" , pi*(circleradius*circleradius)); //formula to calculate the area
    
    return 0;
}

