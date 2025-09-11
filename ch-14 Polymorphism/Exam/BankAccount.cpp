#include<iostream>
using namespace std;


class BankAccount {
    long int accountNumber;
    char accountHolderName[30];
    double withdrow;
    
    protected:
    long double balance;
    double amount;

    public:

    // setter
    void bankAccount(){
        cout << "Enter Account Number := ";
        cin >> accountNumber;
        fflush(stdin);
        cout << "Enter Account Holder Name := ";
        gets(accountHolderName);
        cout << "Enter Your Bank Balance := ";
        cin >> balance;
    }

    void returnBalance() {
        balance;
    }

    void deposit(){
        cout << "Enter Deposite Amount := ";
        cin >> this->amount;
        this->balance += amount;
    }

    void setWithdrow(){
        cout << "Enter Withdrow Amount := ";
        cin >> this->amount;
    }

    void getwithdrow(){
        
        if (amount > balance)
        {
            cout << endl << endl << "insufficient balance";
        }
        else {
            this->balance -= amount;
        }
        
    }

    void getBalance(){
        cout << "Balance := " << this->balance;
    }

    // getter
    void getAccountInfo(){
        cout << "Account Number := " << accountNumber << endl;
        cout << "Account Holder Name := " << accountHolderName << endl;
        cout << "Balance := " << balance << endl;
    }
};


class SavingsAccount : public BankAccount{
    float interestRate;

    public:
    void calculateInterest(){
        balance *= 0.05;
    }
};


class CheckingAmount : public BankAccount{
    int overdraftLimit;
    
    public: 
    void checkOverdraft(){
        overdraftLimit = 100000;
        setWithdrow();
        if (amount > overdraftLimit)
        {
            cout << "You Reached your Monthely Limit";
        }
        else{
            getwithdrow();
        }
        
    }
};


class FixedDipositeAmount : public BankAccount{
    int term;
    public:
    float dipopsiteInterest;
    void calculateDipositeInterest(){
        term = 12;
        returnBalance();
        dipopsiteInterest = balance * 0.07 * (12/term);
        cout << endl << endl << "Fixed Diposite Interest := " << dipopsiteInterest;
    }
};