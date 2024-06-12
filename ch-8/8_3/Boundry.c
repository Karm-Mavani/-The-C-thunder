#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col;
    int sum = 0;
    pf("Enter the number of rows: ");
    sf("%d", &row);
    pf("Enter the number of columns: ");
    sf("%d", &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d]:", i, j);
            sf("%d", &a[i][j]);
        }
        pf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
            {
                pf("%d\t", a[i][j]);
            }
            else
            {
                pf(" \t");
            }
        }
        pf("\n");
    }
}
