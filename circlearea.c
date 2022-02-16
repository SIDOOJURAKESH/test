#include<stdio.h>
int main()
{
int area,circu,r;
float PI=3.14;
printf("enter the radius: ");
scanf("%d",&r);
area=PI*r*r;
printf("the area of circle is:%d\n",area);
circu=2*PI*r;
printf("the circumference of a circle is:%d",circu);
return 0;
}


