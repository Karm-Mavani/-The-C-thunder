#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col;
    pf("Enter no. of rows :");
    sf("%d", &row);
    col=row;
    int a[row][col];
    pf("\n\nArray input\n\n");
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d] : ", i,j);
            sf("%d", &a[i][j]);
        }
    pf("\n");
    }
    pf("\n\nOutput\n\n");
for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            pf("%d ",a[j][i]);
        }
    pf("\n");
    }
}