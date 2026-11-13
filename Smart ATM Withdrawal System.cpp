#include <iostream>
using namespace std;
int main()
{
    int balance,withdraw,t_withdraw,status,remaining;
    cout<<"enter your bank balance"<<endl;
    cin>>balance;
    cout<<"enter amount you want to withdraw"<<endl;
    cin>>withdraw;
    cout<<"enter amount which you withdraw today"<<endl;
    cin>>t_withdraw;
    cout<<"enter 0 if your card is block"<<endl<<"enter other key if your card is active"<<endl;
    cin>>status;
    if(status==0)
        cout<<"Transaction rejected: Account is blocked";
    else if(withdraw<500)
    cout<<"Minimum withdrawal is Rs. 500.";
    else if(withdraw%500!=0)
    cout<<"Withdrawal must be a multiple of Rs. 500.";
    else if(withdraw>balance)
        cout<<"Insufficient account balance.";
    else if(withdraw+t_withdraw>100000)
        cout<<"Daily withdrawal limit exceeded";
    else
    { remaining=balance-withdraw;
    if(withdraw>50000)
    cout<<"addtional verification required"<<endl;
    else
    cout<<"transaction successful"<<endl<<"your current balance is "<<remaining;
    }
    
return 0;
}
    
