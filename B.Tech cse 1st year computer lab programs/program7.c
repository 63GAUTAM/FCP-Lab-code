#include<stdio.h>

int main(){
    float p,r,t;

    printf("Enter the initial principle balance \n");
    scanf("%f",&p);

    printf("Enter the rate of interst \n");
    scanf("%f", &r);

    printf("Enter the period of time \n");
    scanf("%f",&t);

    printf(" The simple interst of your Punji %f\n", (p*r*t)/100);







    return 0;
}