#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }

        }
        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;
    }
}

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the Number of Array := ";
    cin >> n;

    // taking array input
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Value of a[" << i << "] := ";
        cin >> arr[i];
    }

    // printitng original array
    cout << "Original Array := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    selectionSort(arr, n);
    
    // printitng updated array
    cout << "Updated Array := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
