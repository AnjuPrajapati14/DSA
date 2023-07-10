#include<stdio.h>
int main(){
    // linear search in 2D array
    int n,m, item;
    printf("number of rows and column in 2D array:");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("enter the elements:");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           printf("%d ", arr[i][j]);
        }
    }
    printf("\nenter the element to search");
    scanf("%d", &item);

        int loc=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==item){
                printf("element found at index %d %d\n", i , j);
                loc++;
                break;
            }
            
    }

    
    }
            if(loc==0){
                printf("element doesnt exist");
            }
            
}