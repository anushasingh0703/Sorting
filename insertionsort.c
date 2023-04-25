// Anusha Singh, PRN-21070123019
// program for insertion sorting technique
#include <stdio.h>

void Insertionsort(int a[], int n)
{
    int i,j, small;
    for (i=1; i<n;i++)
    {
        small=a[i];
        for (j=i-1; j>=0 && small<a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=small;
    } printf("sorted %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}

int main()
{   int array[5]= {23,45,65,7,5};
    Insertionsort(array, 5);
    return 0;
}
