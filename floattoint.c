#include <stdio.h>

void convert_to_integer(float *ptr_float, int *ptr_int);

int main() 
{
    float f;
    int i;

    printf("Enter a floating-point number: ");
    scanf("%f", &f);

    convert_to_integer(&f, &i);

    printf("The integer value of %f is %d\n", f, i);

    return 0;
}

void convert_to_integer(float *ptr_float, int *ptr_int) 
{
    *ptr_int = (int)(*ptr_float);
}
