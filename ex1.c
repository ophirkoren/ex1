/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {

   // // What bit
   printf("What bit:\n");
   int num, pos, bit;
   printf("Please enter a number:\n");
   scanf("%d", &num);
   printf("Please enter a position:\n");
   scanf("%d", &pos);
   bit=(num>>pos)&1;
   printf("The bit in position %d of number %d is %d\n", pos,num,bit);
//
// //   /*Scan two integers (representing number and a position)
// //   Print the bit in this position. */
//
   // // Set bit
   printf("\nSet bit:\n");
   printf("Please enter a number:\n");
   scanf("%d", &num);
   printf("Please enter a position:\n");
   scanf("%d", &pos);
   bit=1<<pos;
   printf("Number with bit %d set to 1: %d\n", pos,num|bit);
   printf("Number with bit %d set to 0: %d\n", pos,num&(~bit));
//
//   /*Scan two integers (representing number and a position)
//   Make sure the bit in this position is "on" (equal to 1)
//   Print the output
//   Now make sure it's "off" (equal to 0)
//   Print the output */
//
//   // Toggle bit
   printf("\nToggle bit:\n");
   printf("Please enter a number:\n");
   scanf("%d", &num);
   printf("Please enter a position:\n");
   scanf("%d", &pos);
   bit=1<<pos;
   printf("Number with bit %d toggled: %d\n", pos,num^bit);

//   // /*Scan two integers (representing number and a position)
//   // Toggle the bit in this position
//   // Print the new number */
//   //
//   // Even - Odd
   printf("\nEven - Odd:\n");
   printf("Please enter a number\n");
   scanf("%d", &num);
   printf("%d\n", (~num)&1);

  // /* Scan an integer
  // If the number is even - print 1, else - print 0. */
  //
  // // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int num1, num2;
  printf("Enter the first numbers (octal):\n ");
  scanf("%o", &num1);
  printf("Enter the second numbers (octal):\n ");
  scanf("%o", &num2);
  int sum = num1 + num2;
  printf("The sum in hexadecimal: %X\n",sum );
  printf("the 3,5,557,11 bits are:%d%d%d%d\n", (sum>>3)&1,sum>>5&1,sum>>7&1,sum>>11&1);





  // /* Scan two integers in octal base
  // sum them up and print the result in hexadecimal base
  // Print only 4 bits, in positions: 3,5,7,11 in the result. */
  //
  printf("Bye!\n");
  //
  return 0;
}
