#include<stdio.h>
int main(){
    int n,m, item;
    printf("enter the number of rows and column\n");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d\n", arr[i][j]);
        }
    }

    int loc=0;
    printf("enter the element to search");
    scanf("%d", &item);
    

}