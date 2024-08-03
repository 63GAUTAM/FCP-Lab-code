#include<stdio.h>

int main(){
    int i, n, fact = 1;
    printf("Enter number");
    scanf("%d", &n);

    if (n==0)
    {
        fact=1;
        printf("The factorial of %d is %d is %d ", n, fact);

    }
    else{
        for (int i = 1; i <=n; i++)
        {
            fact = fact*i;
        }
        printf("The factorial of %d is %d", n, fact);
        
        
    }

    return 0;
}