#include<iostream>
using namespace std;
main(){
    int unit;
    cout << endl << "Enter your Electricity Units :=  ";
    cin >> unit;

    if(unit >= 0 && unit <=50){
        float total = unit * 0.50;
        total+=(total*20)/100;
        cout << endl << "Your Electricity Bill is " << total << " rupees";
    }
    else if(unit >= 51 && unit <=150){
        float first = 50*0.50;
        float second = (unit - 50)*0.75;
        float total = first+second;
        total += (total*20)/100;
        cout << endl << "Your Electricity Bill is " << total << " Rupees";
    }
    else if(unit >= 151 && unit <=251){
        float first = 50*0.50;
        float second = 100*0.75;
        float third = (unit - 150)*1.20;
        float total = first+second+third;
        total += (total*20)/100;
        cout << endl << "Your Electricity Bill is " << total << " Rupees";
    }
    else{
        float first = 50*0.50;
        float second = 100*0.75;
        float third = 100*1.20;
        float four = (unit -250)*1.50;
        float total = first+second+third+four;
        total += (total*20)/100;
        cout << endl << "Your Electricity Bill is " << total << " Rupees";
    }
}