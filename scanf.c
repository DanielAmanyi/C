#include <stdio.h>

#include <stdio.h>

#include <stdio.h>

/*int main(void)
{
    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            printf(".");
        }

        printf("#\n");
    }

    for (int k = 0; k < size; k++)
    {
        printf("#");
    }

    return 0;
}



#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) 
    {
        // Print dots for padding
        for (int j = 0; j < size - 1 - i; j++)
        {
            printf(".");
        }

        // Print stars for the pyramid
        for (int k = 0; k <= 2 * i; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
*/


#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++) 
    {
        // Print dots for padding
        
        for (int j = 0; j < size - 1 - i; j++)
        {
            printf(".");
        }
         // Print stars for the pyramid
         
                 for (int k = 0; k <= 2 * i; k++)
        {
            printf("#");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
