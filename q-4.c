#include<stdio.h>
int main()
{
    int radius,Formula;
    float pie;

    printf("Enter the value of radius: ");
    scanf("%d" , &radius);
    pie=3.14;

    Formula=4/3*pie*radius*radius*radius;

    printf("Formula answer is :%d\n",Formula);
    return 0;
}
