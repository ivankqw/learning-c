// -------------- Program 9.2 ------------------------------------

/* Program 9.2 from PTRTUT10.HTM   6/13/97 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nrows = 5;     /* Both nrows and ncols could be evaluated */
    int ncols = 10;    /* or read in at run time */
    int row;
    int **rowptr; // pointer to a pointer to int
    rowptr = malloc(nrows * sizeof(int *)); 
    // point to first element of an array of int * (row pointers)
    // each int * will later point to the first element of a row of integers
    // sizeof(int *) size of single pointer to int, not int itself
    if (rowptr == NULL)
    {
        puts("\nFailure to allocate room for row pointers.\n");
        exit(0);
    }

    printf("\n\n\nIndex   Pointer(hex)   Pointer(dec)   Diff.(dec)");

    for (row = 0; row < nrows; row++)
    {
        rowptr[row] = malloc(ncols * sizeof(int));
        // each row is allocated separately
        // can be scattered in memory
        if (rowptr[row] == NULL)
        {
            printf("\nFailure to allocate for row[%d]\n",row);
            exit(0);
        }
        printf("\n%d         %p         %d", row, rowptr[row], *rowptr[row]);
        if (row > 0)
        printf("              %d",(int)(rowptr[row] - rowptr[row-1]));
    }

    return 0;
}

// --------------- End 9.2 ------------------------------------