#include <stdio.h>
#define pf printf
#define sf scanf

int cube(int size)
{
   size=size*size*size;
   return size;
}

void main()
{
    int n;
    pf("Enter array size : ");
    sf("%d", &n);

    int array[n][n], *ptr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pf("Enter a[%d][%d] : ", i, j);
            sf("%d", &array[i][j]);
            
        }
    }
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j]=cube(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }
    pf("Cube of array :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pf("%d\t", *ptr[i][j]);
        }
        pf("\n");
    }
}