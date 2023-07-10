#include<stdio.h>
int main(){
    int n , item;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array");
    for(int i=0; i<n; i++){ 
    scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){ 
        printf("%d ", arr[i]); 
    }
    printf("enter the element you want to search");
    scanf("%d", &item);
    int loc=0;
    int beg=1;
    int end=n;  
    int mid;
    while(beg<=end){
            mid=(beg + end)/2; 

        if(item<arr[mid]){
            end=mid-1; 
        }
         else if(item==arr[mid]){
            printf("element found at index %d\n", mid);
            break;
        }
        else{
           beg=mid+1;
        }
    }
    if(end<beg){
        printf("not found");
    }

}