#include<stdio.h>
#include<math.h>

int main()
{
//     int x;
//     printf("enter the number \n");
//     scanf("%i", &x);

// float y = sqrt(x);

// printf("the square root of %i is %.2f \n", x, y);



int size;

printf("Grid size Please \n");
scanf("%d", &size);

int i;
// printf("#\n");

for (i=0; i<size; i++)
{
    int j;
for  (j =0; j<size-i-1; j++)
{
    printf(" ");
}

int k;
for (k = 0; k<=i; k++);
{
    printf("X");
}
printf("\n");
}












    return 0;
}