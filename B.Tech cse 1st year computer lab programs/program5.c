#include<stdio.h>

int main(){
    float r;

    printf("Enter the Radius of circle\n");
    scanf("%f", &r);

    printf("The area of circle is %f\n", 3.14*r*r);
    printf("The curcumfrance of circle is %f\n", 2*3.14*r);
    return 0;
}