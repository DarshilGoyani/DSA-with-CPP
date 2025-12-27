#include<iostream>
using namespace std;



void disarium(int num){
    int size = 0;
    int sizeCount = num;
    int check = num;
    // finds size of an array
    while(sizeCount != 0){
        sizeCount /= 10;
        size++;
    }
    cout << "size := " << size;

    int total = 0;
    while(size != 0){
        int last = (num % 10) * size;
        total += last;
        size--;
        num /= 10;
    }

    cout << endl << "Total := " << total;
    if (total == check)
    {
        cout << endl << total << " is a Disarium Number";
    }
    else{
        cout << endl << total << " is not a Disarium Number";
    }
    

}


int main(int argc, char const *argv[])
{
    
    // Enter a number : 135
    // Output :
    // 135 is a Disarium number.
    // 135 → 1^1 + 3^2 + 5^3 = 135 → Disarium

    

    int num;

    cout  << "Enter the number := ";
    cin >> num;

    disarium(num);

    return 0;
}

