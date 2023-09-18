#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
  char operator;
  float answer;
  int choice;

  do
  {
    printf("Enter what you what to do :\n\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Power\n6. Square Root\n0. Exit\n");
    scanf("%d", &choice);

    printf("Enter the first value: ");
    scanf("%f", &valueOne);
    printf("Enter the second value: ");
    scanf("%f", &valueTwo);
    switch(choice)
    {
        case 1: answer = valueOne + valueTwo;
        break;
        case 2: answer = valueOne - valueTwo;
        break;
        case 3: answer = valueOne * valueTwo;
        break;
        case 4: answer = valueOne / valueTwo;
        break;
        case 5: answer = pow(valueOne,valueTwo);
        break;
        case 6: answer = sqrt(valueTwo); 
        break;
        case 0: exit(0); 
        break;
        default : printf("Error! operator is not correct");
    }
    printf("\n%.3f %c %.3f =  %.3f\n\n",valueOne, choice, valueTwo, answer);
    
  } while (choice != 0);
  
  return 0;
}