#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v) {
        value = v;
    }

    int getValue(){
        return value;
    }

    bool operator<(const Number& other) const {
        return value < other.value;
    }
};

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    Number num1(a), num2(b);

    if (num1 < num2) {
        cout << "Second number " << num2.getValue() << " is higher." << endl;
    } else if (num2 < num1) {
        cout << "First number " << num1.getValue() << " is higher." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
