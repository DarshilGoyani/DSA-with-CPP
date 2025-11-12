#include<iostream>
#include<vector>
using namespace std;

int quickPartition(vector<int> &a, int start, int end) {
    int i = start - 1;
    int pivot = a[end];  // note: typo fixed (pivot)
    for (int j = start; j < end; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[end]);
    return i + 1;
}


void quickSort(vector<int> &a,int start, int end) {
    if (start < end)
    {
        int pivIndex = quickPartition(a, start, end);
        quickSort(a, start, pivIndex - 1);
        quickSort(a, pivIndex + 1, end);
    }
    
}

int main(int argc, char const *argv[])
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    // taking array input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of a[" << i << "] := ";
        cin >> a[i];
    }
    
    // printing array
    cout << "The array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    quickSort(a, 0, n-1);

    // printing array
    cout << endl <<  "Ascending order: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    
    return 0;
}
