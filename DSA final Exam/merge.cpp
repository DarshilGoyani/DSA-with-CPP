#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    vector<int> temp;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int k = 0; k < temp.size(); k++){
        arr[start + k] = temp[k];
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    if(start < end){
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int binaruSearch(vector<int> &arr, int n, int element){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = (start + end) / 2;

        if(element < arr[mid]){
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

int main(){
    int n, element;

    cout << "Enter the Number of Array := ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the value of a[" << i << "] := ";
        cin >> arr[i];
    }

    cout << "The Original Array is := ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n - 1);

    cout << endl << "The Sorted Array is := ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl <<  "Enter the element to search := ";
    cin >> element;

    int result = binaruSearch(arr, n, element);

    if(result == -1)
        cout << "Element not found in the array" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}
