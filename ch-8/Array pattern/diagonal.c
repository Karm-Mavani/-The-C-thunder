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

    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            pf("Enter a[%d][%d]:",i,j);
            sf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                pf("%d\t",a[i][j]);
            }
            else
            {
                pf("\t");
            }
         }
         pf("\n");
    }

}
