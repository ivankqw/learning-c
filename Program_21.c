// -----------  Program 2.1  -----------------------------------

/* Program 2.1 from PTRTUT10.HTM   6/13/97 */

#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100};
int *ptr;

int main(void)
{
    int i;
    ptr = &my_array[0];     /* point our pointer to the first
                                      element of the array */
    ptr = my_array; // "The name of an array is the address of the first element in the array"
    // however my_array is an unmodifiable lvalue
    // ptr points to address of my_array[0]                                
    printf("\n\n");
    for (i = 0; i < 6; i++)
    {
      // first iteration ptr + 0 = 1000 (example address), *(ptr + 0) yields 1
      // second iteration ptr + 1 = 1004 (increment by 4 because int array), *(ptr + 1) yields 23
      printf("my_array[%d] = %d   ",i,my_array[i]);   /*<-- A */
      printf("ptr + %d = %d\n",i, *(ptr + i));        /*<-- B */
      //bonus
    //   printf("ptr + %d = %d\n",i, *(ptr++));  // second iteration: mutates after so 23
    //   printf("ptr + %d = %d\n",i, *(++ptr));  // second itetation: mutates before so 17
    }
    return 0;
}