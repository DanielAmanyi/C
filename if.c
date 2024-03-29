#include<stdio.h>

int main(void){

/* if(add test the condition here){

add the action statement/function eg, printf("")

}*/
double age;

printf("Enter your age \n");
scanf("%lf",&age);

if(age>=18){
    printf("You have just been signed in! \n");
}
else if(age <=0){
    printf("You have not been born yet ! \n");
}
else {
    printf("You can not be signed in !");
}

return 0;
}
