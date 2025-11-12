#include<iostream>
#include<vector>
using namespace std;


void marge(vector<int> &a, int start, int mid, int end){
    int i = start;
    int j = mid + 1;
    vector<int> temp;
    while(i<= mid && j<= end){
        if (a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
        
    }
    while (i <= mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    while (j <= end)
    {
        temp.push_back(a[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        a[i+start] = temp[i];
    }
    
    
    
}

void mergeSort(vector<int> &a ,int start,int end){
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(a, start, mid);
        mergeSort(a, mid + 1, end);
        marge(a, start, mid, end);
    }
    
}

 


int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a;

    // taking array input
    for (int i = 0; i < n; i++)
    {
        int value;
        cout << "Enter the value of a[" << i << "] := ";
        cin >> value;
        a.push_back(value);
    }

    // printing original array
    cout << "Original Array := ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    mergeSort(a, 0,n-1);

     // printing updated array
    cout << endl << "Ascen Orderding := ";
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }    




    return 0;
}
