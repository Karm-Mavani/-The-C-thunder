#include <stdio.h>
#define pf printf
#define sf scanf

void avg(int row, int column)
{
    int i, j, sum = 0, a[row][column],avg;
      
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            pf("Enter the element[%d][%d]:", i, j);
            sf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum = sum + a[i][j];
        }
    }
    avg = sum / (row * column);
    
    pf("Average of 2D array is %d",avg  );
}

void main()
{
    int row, column;
    pf("Enter row of array : ");
    sf("%d", &row);
    pf("Enter cloumn of array : ");
    sf("%d", &column);
    pf("\n");
    avg(row, column);
}