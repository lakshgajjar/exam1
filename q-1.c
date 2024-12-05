#include<stdio.h>
void main()
{
    int Firstangel,Secondangel,Thirdangel;
    
    printf("Enter the value of Firstangel:- ");
    scanf("%d" , &Firstangel);
    printf("Enter the value of Secondangel:- ");
    scanf("%d" , &Secondangel);

    Thirdangel=180-Firstangel-Secondangel;

    printf("Thirdangel value is:-%d\n",Thirdangel);
    return 0;
}