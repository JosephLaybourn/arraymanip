/******************************************************************************
filename    array.c
author      Joey Laybourn
DP email    j.laybourn@digipen.edu
course      CS120
assignment  2
due date    10/19/2017

Brief Description:
This file includes functions to reverse, add, scalar multiply, dot product, and
cross product arrays.
******************************************************************************/

/******************************************************************************
       Function: reverse_array

    Description: reverses the given array.  

         Inputs: a    - the array that is being reversed
                 size - size of the array

        Outputs: none
******************************************************************************/
void reverse_array(int a[], int size)
{
  int i;                                                      /*loop variable*/

  /*loops half the number of iterations as the array length*/
  for (i = 0; i < size / 2; i++)
  {
    int temp = a[i]; /*creates a temporary variable of the value at the index*/
    a[i] = a[size - 1 - i];     /*makes the first value of the array the last*/
    a[size - 1 - i] = temp;     /*makes the last value of the array the first*/
  }
} 

/******************************************************************************
       Function: add_array

    Description: adds two arrays together

         Inputs: a    - the first array
                 b    - the array added to the first array
                 c    - the output of both a and b added together
                 size - The size of the arrays.  
                        Each array has to be the same size

       Outputs: none
******************************************************************************/
void add_arrays(const int a[], const int b[], int c[], int size)
{
  int i;                                                      /*loop variable*/

  /*loops the same number of iterations as the array length*/
  for (i = 0; i < size; i++)
  {
    c[i] = a[i] + b[i];    /*adds a and b at index i and puts the result in c*/
  }
}

/******************************************************************************
       Function: scalar_multiply

    Description: multiplies an array by a scalar

         Inputs: a          - the array that will be multiplied
                 size       - The size of the array.
                 multiplier - the scalar which all values 
                              of the array are multiplied

        Outputs: none
******************************************************************************/
void scalar_multiply(int a[], int size, int multiplier)
{
  int i;                                                      /*loop variable*/

  /*loops the same number of iterations as the array length*/
  for (i = 0; i < size; i++)
  {
    /*multiplies each value of the array by the multiplier*/
    a[i] = a[i] * multiplier;
  }
}

/******************************************************************************
       Function: dot_product

    Description: returns the dot product of two arrays

         Inputs: a    - one array used in the dot product formula
                 b    - the other array used in the dot product formula
                 size - size of each array.  Both arrays must be the same size

        Outputs: the dot product of the given arrays
******************************************************************************/
int dot_product(const int a[], const int b[], int size)
{
  int i;                               /*loop variable                       */
  int prod = 0;                        /*the dot product                     */

  /*loops the same number of iterations as the array length*/
  for (i = 0; i < size; i++)
  {
    prod = prod + a[i] * b[i];        /*dot product formula                  */
  }
  return prod;                        /*returns the dot product of the arrays*/
}

/******************************************************************************
       Function: cross_product

    Description: calculates the cross product of two arrays

         Inputs: a - one array used in the cross product formula
                 b - the other array used in the cross product formula
                 c - the cross product of the two arrays

        Outputs: none
******************************************************************************/
void cross_product(const int a[], const int b[], int c[])
{
  /*multiplies second a value with the third b value, then subtracts that 
  with the product of the third a value with the second b value          */
  c[0] = a[1] * b[2] - a[2] * b[1];

  /*multiplies third a value with the first b value, then subtracts that
  with the product of the first a value with the third b value           */
  c[1] = a[2] * b[0] - a[0] * b[2];

  /*multiplies first a value with the second b value, then subtracts that
  with the product of the second a value with the first b value          */
  c[2] = a[0] * b[1] - a[1] * b[0];
}
