 #include<stdio.h>
void bubblesort(int arr[], int n)
{
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){
            if(arr[j]>arr[j+1]){
               int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }

}

    void main(){
        int n;
    int arr[n];
        printf("enter number of elements in array\n");
        scanf("%d", &n);
        printf("enter elements:\n"); 
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        
        for(int i=0; i<n; i++){
            printf("%d\n", arr[i]);
        }
        bubblesort(arr, n);
        printf("sorted array:\n");
        for(int i=0; i<n; i++){
            printf("%d\n", arr[i]);
        }
        
    }
