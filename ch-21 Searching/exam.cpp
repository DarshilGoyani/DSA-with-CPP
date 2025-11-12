#include<iostream>
#include<vector>
using namespace std;

// descending order
void selectionSort(vector<int> &arr, int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] > arr[minIndex]){
                minIndex = j;
            }

        }
        int swap = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = swap;
    }
}

// ascending order
void merge(vector<int> &arr, int start, int mid, int end){
    int i = start;
    int j = mid+1;
    vector<int> temp;
    while(i <= mid && j <= end){
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
        
        
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[i + start] = temp[i];
    }
    
}

void mergeSort(vector<int> &arr, int start, int end){
    int mid = (start + end) /2;

    if (start < end)
    {
        mergeSort(arr, 0, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
    
}

// searching element 
int binary_search(vector<int> &arr, int n, int element){
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element < arr[mid])
        {
            end = mid - 1; 
        }
        else if(element > arr[mid]){
            start = mid + 1;
        }
        else{
            return mid;
        }
        
    }
    
    return -1;
}
int main(int argc, char const *argv[])
{
    int n,element;

    cout << "Enter the Number of Array := ";
    cin >> n;

    // taking array input
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << "Enter the Value of a[" << i << "] := ";
        cin >> value;
        arr.push_back(value);
    }

    cout << endl << endl << "Enter the element you went to search := ";
    cin >> element;

    // printitng original array
    cout << endl << "Original Array := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

    selectionSort(arr, n);
    
    // printitng Descending array
    cout << endl << endl << "Descending Order := ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n-1);

    // printing Ascending array
    cout << endl << endl << "The Sorted Array is := ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    int result = binary_search(arr, n, element);
        cout << endl << endl;
    if(result == -1){
        cout << "Element not found in the array" << endl;
    }
    else{
        cout << "Element found at index " << result << endl;

    }
    
    return 0;
}
