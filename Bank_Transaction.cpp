#include<bits/stdc++.h>
using namespace std;
int main(){
    int account, account1, account2, transaction = 1;
    long long int type;
    float draw, dep, transfer, balance = 5000;
    char name[100];
    cout<<"\n\t\t\t\tBANKING SYSTEM\n\n";
    cout<<"\t\t";
    for(int i=0; i<25;i++){
        cout<<"\4 ";
    }
    cout<<endl;
    for(int i=0; i<10;i++){
        cout<<"\t";
        if(i==1||i==7){
            cout<<"\4";
        }
    }
    cout<<endl;
    for(int i=0; i<10;i++){
        cout<<"\t";
        if(i==1||i==7){
            cout<<"\4";
        }
    }
    cout<<endl;
    cout<<"\t\t\4\tWELCOME TO OUR YAQ BANKING SYSTEM\t\4\n";
    for(int i=0; i<10;i++){
        cout<<"\t";
        if(i==1||i==7){
            cout<<"\4";
        }
    }
    cout<<endl;
    for(int i=0; i<10;i++){
        cout<<"\t";
        if(i==1||i==7){
            cout<<"\4";
        }
    }
    cout<<endl;
    cout<<"\t\t";
    for(int i=0; i<25;i++){
        cout<<"\4 ";
    }
    cout<<"\n\n"<<endl;
    cout<<"Enter Your Name -> ";
    gets(name); 
    cout<<"Please Enter your Account No.: ";
    cin>>type;
    while(transaction == 1){
        int option;
        cout<<"\nchoose what you want to do"<<endl;
        cout<<"1 - Balance Enquiry"<<endl;
        cout<<"2 - Deposit"<<endl;
        cout<<"3 - Withdraw"<<endl;
        cout<<"4 - transfer"<<endl;
        cin>>option;
        switch (option){
        case 1:
            cout<<"\t\t\t*BALANCE ENQUIRY*\n"<<endl;
            cout<<"your current balance is: "<<balance<<"Rs"<<endl;
            break;
        case 2:
            cout<<"\n\t\t\t*DEPOSIT AMMOUNT*\n"<<endl;
            cout<<"how much money do you want to deposit -> ";
            cin>>dep;
            cout<<endl;
            if(dep > 0 && dep <= 20000){
                cout<<"your "<<dep <<" Rs deposited in your account.\n"<<endl;
                balance += dep;
            }
            else if(dep > 20000){
                cout<<"you can't deposit that much ammount in one time.\n"<<endl;
            }
            else{
                cout<<"invalid deposit amount"<<endl;
            }
            break;
        case 3:
            cout<<"\n\t\t*WITHDRAW AMMOUNT*\n"<<endl;
            cout<<"how much money do you want to withdraw -> ";
            cin>>draw;
            cout<<endl;
            if(draw <= balance && draw <= 20000){
                cout<<"you just withdraw "<<draw<<" Rs\n"<<endl;
                balance -= draw;
            }
            else if(draw > 20000){
                cout<<"you can't withdraw that much amount in one time.\n"<<endl;
            }
            else{
                cout<<"you dont have enough money\n"<<endl;
            }
            break;
        case 4:
            cout<<"\t\t\tTRANSFER AMMOUNT \n"<<endl;
            cout<<"\n\t\tAccount You Want To Transfer -> "<<endl;
            cin>>account2;
            cout<<"\nhow much ammount? -> "<<endl;
            cin>>transfer;
            if(balance >= transfer){
                cout<<"\nyour "<<transfer<<" Rs successfully transfered\n"<<endl;
                balance -= transfer;
            }
            else{
                cout<<"\nyou do not have sufficient balance\n"<<endl;
            }
            break;
        default:
            cout<<"invalid transaction"<<endl;
        }
        transaction = 0;
        while(transaction != 1 && transaction != 2){
            cout<<"do you want to do another transaction?"<<endl;
            cout<<"1. yes 2. no"<<endl;
            cin>>transaction;
            if(transaction != 1 && transaction != 2){
                cout<<"invalid no.\nchoose between 1 and 2 only"<<endl;
            }
        }
    }
    cout<<endl;
    cout<<"\t\t\t    -----------------------"<<endl;
    cout<<"\n\t\t\t\tYAQ BANK LIMITED"<<endl;
    cout<<"\t\t\t    -----------------------\n"<<endl;
    cout<<"\t\t\tDate:3/5/16\t   Time:10:20 Am"<<endl;
    cout<<"\n\t\t\t\4 Your name: "<<name<<endl;
    cout<<"\t\t\t\4 Your account no: "<<type<<endl;
    if(dep >= 0 && dep < 20000){
        cout<<"\t\t\t\4 You've deposited "<<dep<<"Rs"<<endl;
    }
    else{
        cout<<"\t\t\t\4 You've deposited 0Rs"<<endl;
    }
    if(draw > 0 && draw <= 20000 && draw <= balance){
        cout<<"\t\t\t\4 You've withdraw "<<draw<<" Rs"<<endl;
    }
    else{
        cout<<"\t\t\t\4 You've withdraw 0Rs"<<endl;
    }
    if(transfer > 0 && transfer <= 20000 && transfer <= balance){
        cout<<"\t\t\t\4 You've Transfered "<<transfer<<" Rs"<<endl;
    }
    else{
        cout<<"You've Transfered 0Rs"<<endl;
    }
    cout<<"\n\t\t\t\t    Thank you! "<<endl;
    cout<<"\t\t\t   Welcome to YAQ Banking System"<<endl;
    cout<<"\t\t\t      www.YAQBANKINGSYSTEM.com"<<endl;
    return 0;
}