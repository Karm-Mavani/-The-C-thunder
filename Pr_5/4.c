#include <stdio.h>
#define pf printf
#define sf scanf
main()
{
    int row, col, c, b;
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
    }
    pf("\n\nEnter row no:");
    sf("%d", &b);
    pf("Elements of row is :");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (b == i)
            {
                pf("%d ", a[i][j]);
            }
        }
    }
    for (int j = 0; j < col; j++)
    {
        sum = sum + a[b][j];
    }
    pf("Sum of row is : %d\n\n", sum);
    
    sum=0;
    pf("\n\nEnter column no:");
    sf("%d", &c);
    pf("Elements of column is :");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (c == j)
            {
                pf("%d ", a[i][j]);
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        sum = sum + a[i][c];
    }
    pf("Sum of column is : %d\n\n", sum);
}
