#include<iostream>
using namespace std;
int main()
{
int choice, amount, balance=0;
cin>>choice;
if(choice==1){
cin>>amount;
balance=balance+amount;
cout<<"Deposited";
}
else if(choice==2){
cin>>amount;
if(amount<=balance){
balance=balance-amount;
cout<<"Withdrawn";
}
else{
cout<<"Insufficient";
}
}
else if(choice==3){
cout<<balance;
}
else{
cout<<"Invalid";
}
}
