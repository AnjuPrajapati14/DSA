
#include <stdio.h>


void array(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
          printf(" %d ", a[i]);
    } 
}

int main()
{
    int a[10], i, n;
      scanf("%d", &n);
      printf("%d", n);
    array(a, n);
    return 0;
}