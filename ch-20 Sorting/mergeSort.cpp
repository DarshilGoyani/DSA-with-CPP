#include<iostream>
#include<vector>
using namespace std;

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

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter the Number of Array := ";
    cin >> n;

    vector<int> arr;
    // taking array input
    for (int i = 0; i < n; i++)
    {
        int element;
        cout << "Enter the value of a[" << i << "] := ";
        cin >> element;
        arr.push_back(element);
    }

    // printitng origina array
    cout << "The Original Array is := ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n-1);

    // printing sorted array
    cout << "\nThe Sorted Array is := ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
