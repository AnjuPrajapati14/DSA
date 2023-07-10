#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
     for (int i = 1; i < n; i++)
     {
          int key = arr[i];
          int j = i - 1;
          while (key < arr[j] && j >= 0)
          {
               arr[j + 1] = arr[j];
               j--;
          }
          array[j + 1] = key;
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
     insertionSort(arr, n);
     cout << "Sorted  array:";
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << endl;
     }

     return 0;
}
