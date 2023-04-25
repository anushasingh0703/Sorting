//Anusha Singh, PRN - 21070123019
// program for selection sorting technique
#include <stdio.h>

void Selectionsort(int a[], int n)
{
    int i,j, smallest,temp;
    for (i=0; i<n-1;i++)
    {
        smallest=i;
        for (j=i+1; j<n; j++)
        {
            if(a[smallest]>a[j])
            {
            smallest=j;
            }
        }
        if(i!=smallest)
        {
            temp=a[i];
            a[i]=a[smallest];
            a[smallest]=temp;
        }
    }
     printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);       
}

int main()
{   int array[5]= {23,45,65,7,5};
    Selectionsort(array, 5);
    return 0;
}
