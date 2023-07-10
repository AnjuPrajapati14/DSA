#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[],int f,int l){
    int p= arr[l];
    int q=f-1;
    for(int i =f; i<l;i++ ){ 
        if(arr[i]<p){
            q++;
            Swap(&arr[q],&arr[i]);
        }
    }
    Swap(&arr[q+1],&arr[l]);
    return q+1;
}
void quicksort(int arr[],int f,int l){
    if(l>f){
        int p=partition(arr,f,l);
        quicksort(arr,f,p-1);
        quicksort(arr,p+1,l);
    }
}
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    cout << "Sorted  array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
