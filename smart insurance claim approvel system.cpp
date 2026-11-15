#include <iostream>
using namespace std;
int main()
{
    int insurance,expire,licence,alcohal,claim,responsible;
        cout<<"press 0if vehicle is not insure"<<endl;
    cin>>insurance;
    cout<<"press 0 if insure polocy expired"<<endl;
    cin>>expire;
    cout<<"press 0 if driver has not valid driving licence";
    cin>>licence;
    cout<<"press 0 if driver was in the state of alcohal infuence";
    cin>>alcohal;
    cout<<"enter the price of damage of car";
    cin>>claim;
    cout<<"enter 0 if diver is responsible for accident";
    cin>>responsible;
    if(insurance==0 || expire==0 || licence==0 || alcohal==0)
        cout<<"claim is rejected";
    else
    {
        if(claim>200000)
            cout<<"required manager approvel";
        else if(claim>=20000)
            cout<<"required physical inspection";
        else 
            cout<<"claim approved";
if(responsible==0)
    claim=claim-claim*0.2;
        cout<<"the final paybabe amout is "<<claim;
    }
        
}
