#include <stdio.h>
#include <string.h>

int main (void) 
{

printf("hello world");
scanf("%char[10]", &names);
int n = 0;
while (names[n] != '\0')
{
    n++;
}
printf("%i", n);

    return 0;
}