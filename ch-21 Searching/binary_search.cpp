#include<iostream>
using namespace std;


int binary_search(int a[], int n, int element){
    int start = 0;
    int end = n - 1;
    
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (element < a[mid])
        {
            end = mid - 1; 
        }
        else if(element > a[mid]){
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

    cout << "Enter the size of array := ";
    cin >> n;

    int a[n];
    // taking array input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i+1 << " := ";
        cin >> a[i];
    }


    // taking element
    cout << "Enter the element to be searched := ";
    cin >> element;

    // printitng original array
    cout << "Original Array := ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    int result = binary_search(a, n, element);
        cout << endl;
    if(result == -1){
        cout << "Element not found in the array" << endl;
    }
    else{
        cout << "Element found at index " << result << endl;

    }


    return 0;
}
