#include<stdio.h>
#include<math.h>

int main (void) {
double PI = 3.142;
double area  ;
float radius; 

 printf("Enter Radius \n");
 scanf("%fl", &radius);
 

area = PI * radius * radius;
printf("Your Area should be %fl", area);

    return 0;
}