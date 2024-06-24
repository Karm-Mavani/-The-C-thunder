#include <stdio.h>

int cube()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int cube = n * n * n;
}

void main()
{
printf("\n\n");
printf("Cube is : %d",cube());

}