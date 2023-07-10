#include<stdio.h>
int main(){
     int i,n;
    int ar[10];
   
    
    printf("enter the size of array:");
    scanf("%d", &n);
    printf("enter the elements in array:\n");
    for(int i=0; i<n; i++){
         scanf("%d",&ar[i]);
    }
     printf("The array is:\n");
    for(int i=0; i<n; i++)
    printf(" %d ", ar[i] );
   
}