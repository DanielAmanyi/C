#include <stdio.h>
#include <ctype.h>

// This Code Helps to instantly convert Temperature from Fahrenheit to Celsius and vise-vasa

int main() {

  // Declare variables to be used
    char unit;
    float temp;
    int count = 0;

// get user input Unit in either Celsius or F, control over user input with Limit of tries
    do {
      if (count == 4) {
        printf("\n Warning: \n Only one attempt remaining.\n");
      }
      printf("What unit is your current temperature?\n");
      printf("Enter 'C' for Celsius or 'F' for Fahrenheit: ");
      scanf(" %c", &unit);
      unit = toupper(unit);
      count++;
    } while ((unit != 'C' && unit != 'F') && count < 5);

 // Get the current temperature
    if (unit == 'C') {
      printf("Your temperature is in Celsius.\n");
      printf("Enter your temperature in Celsius: ");
      scanf("%f", &temp);

 // Calculate using the formula
      float F = (temp * 9/5) + 32;
      printf("\n %.1f Degrees Fahrenheit \n", F);
    }


    // For Degrees Fahrenheit, convert to degrees
    else if (unit == 'F') {
      // Get the current temperature
      printf("Your temperature is in Fahrenheit.\n");
      printf("Enter your temperature in Fahrenheit: ");
      scanf("%f", &temp);

 // Calculate using the formula
      float C = (temp - 32) * 5/9;
      printf("Your temperature is %.2f Degrees Celsius \n", C);
    }

    
    // For the funny users
    else {
      printf("Invalid Temperature Unit.\n");
    }
  
    return 0;
}
