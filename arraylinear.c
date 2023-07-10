#include<stdio.h>
int main(){
    int n, item;
    printf("enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array:");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nenter the element you want to search");
    scanf("%d", &item);
    

    int loc=0;
    int j=0;
    while(loc==0 && j<n){
      
      if(  arr[j]==item)
      loc=j;
      else{
        j = j+1;
      }

    } 
    if (loc==0){
        printf("search unsuccessful");
    }
    else{
        printf("element found at %d location", loc);
    }

}