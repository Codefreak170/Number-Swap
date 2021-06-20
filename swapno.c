# Number-Swap
Developed by Sarit Shekhar Roy
#include<stdio.h>
int main()
{
    int x,y;
    printf("Please enter two numbers \n");
    scanf("%d %d",&x ,&y);

    printf("Before swapping, the first no. was %d and the second no. was %d",x,y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf("\nAfter swapping, the first no. is %d and the second no. is %d",x,y);    
    return 0;  
}
