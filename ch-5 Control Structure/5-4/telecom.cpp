#include<iostream>
using namespace std;
main(){
    int num;

    cout << endl << "Press 1 for English";
    cout << endl << "Press 2 for Hindi";
    cout << endl << "Press 3 for Gujarati" << endl;

    cin >> num;

    switch(num){
        case 1:
            cout << endl << "Press 1 for Internet Recharge";
            cout << endl << "Press 2 for Top-up Recharge";
            cout << endl << "Press 3 for Special Recharge" << endl;

            int english;
            cin >> english;
            switch(english){
                case 1:
                    cout << endl << "You have successfully done a Internet Recharge.";

                    break;
                case 2:
                    cout << endl << "You have successfully done a Top-up Recharge.";

                    break;
                case 3:
                    cout << endl << "You have successfully done a Special Recharge.";

                    break;
                default : cout << endl << "Invalid Choice";
            }

            break;
        case 2:
            cout << endl << "Internet Recharge ke liye 1 dabaiye";
            cout << endl << "Top-up Recharge ke liye 2 dabaiye";
            cout << endl << "Special Recharge ke liye 3 dabaiye" << endl;

            int hindi;
            cin >> hindi;
            switch(hindi){
                case 1:
                    cout << endl << "Aapne safaltapurvak Internet Recharge kar liya he.";

                    break;
                case 2:
                    cout << endl << "Aapne safaltapurvak Top-up Recharge kar liya he.";

                    break;
                case 3:
                    cout << endl << "Aapne safaltapurvak Special Recharge kar liya he.";

                    break;
                default : cout << endl << "Invalid Choice";
            }

            break;
        case 3:
            cout << endl << "Internet Recharge mate 1 dabavo";
            cout << endl << "Top-up Recharge mate 2 dabavo";
            cout << endl << "Special Recharge mate 3 dabavo" << endl;

            int gujarati;
            cin >> gujarati;
            switch(gujarati){
                case 1:
                    cout << endl << "Tame safaltapurvak Internet Recharge karyu chhe.";

                    break;
                case 2:
                    cout << endl << "Tame safaltapurvak Top-up Recharge karyu chhe.";

                    break;
                case 3:
                    cout << endl << "Tame safaltapurvak Special Recharge karyu chhe.";

                    break;
                default : cout << endl << "Invalid Choice";
            }

            break;
    }
}