#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5], size;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter the elements of array:\n");
    for(int i=0; i<size;i++){
        scanf("%d", &a[i]);
    }
    printf("elements in array are:\n");
    for(int i=0; i<size ; i++){
        printf("%d\n", a[i]);
    }    
}
