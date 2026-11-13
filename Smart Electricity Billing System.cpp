#include <iostream>
using namespace std;
int main()
{
    int unit,bill,date;
    cout<<"Enter number of comsumed units"<<endl;
    cin>>unit;
    if(unit<=100)
        bill=unit*10;
    else if(unit<=200)
        bill=(100*10)+(unit-100)*15;
    else if(unit<=500)
        bill=(100*10)+(100*15)+(unit-200)*20;
   else
        bill=(100*10)+(100*15)+300*20+(unit-500)*25;
if(bill>10000)
bill=(bill*5)/100+bill;
cout<<"press 1 if your are paying bill in due date"<<endl<<"press 0 if your date of paying bil is over"<<endl;
cin>>date;
if(date==0)
bill=(bill*10)/100+bill;
cout<<"your bill is"<<bill;

return 0;
}
