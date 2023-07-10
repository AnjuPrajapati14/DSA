#include<stdio.h>
    void insertion(int arr[], int n){
        for(int i=1; i<n; i++){
          int  temp=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;
    }
    }
    int main(){
            int n;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array");
    for(int i=0; i<n; i++){ 
    scanf("%d", &arr[i]);
    } 
    insertion(arr,n);
    for(int i=0; i<n; i++){ 
        printf("%d\n", arr[i]);
    }
    }