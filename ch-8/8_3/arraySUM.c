#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col;

    pf("Enter the number of rows: ");
    sf("%d", &row);
    pf("Enter the number of columns: ");
    sf("%d", &col);

    int a[row][col], b[row][col], sum[row][col];

    pf("\n\nFor array A\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d]:", i, j);
            sf("%d", &a[i][j]);
        }
    }

    pf("\n\nFor array B\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter b[%d][%d]:", i, j);
            sf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    pf("\n\nArray SUM\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("%d ", sum[i][j]);
        }
        pf("\n");
    }
}
