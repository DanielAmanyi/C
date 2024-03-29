#include<stdio.h>

// a program to shorten if else statement verbose

int main(){
char grade;

printf("enter your grade in upper case \n ");
scanf("%ch",&grade);

switch(grade){
case 'A':
printf("Distinction \n");
break;


case 'B':
printf("First Class Upper \n");
break;

case 'C':
printf("Second Class Lower \n");
break;

default: 
printf("Grade not valid \n");
}
    return 0;
}