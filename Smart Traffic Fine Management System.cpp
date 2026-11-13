#include <iostream>
using namespace std;
int main()
{
    int speed,violation,licence,v_register,fine;
const int limit=60;
cout<<"enter a speed"<<endl;
cin>>speed;
if(speed>limit && speed<=80)
    
fine=2000;
else if(speed>80 && speed<=100)
fine=5000;
else if(speed>100)
fine=10000;
else
fine=0;

    
cout<<"enter 0 for pervious violation"<<endl<<"enter other any numberfor no pervious violation"<<endl;
cin>>violation;
if(violation==0)
fine=fine*2.5;



    
 cout<<"enter any number if your have driving licence"<<endl<<"enter 0 if you have not driving licence"<<endl;
    cin>>licence;


if(licence==0)
fine=fine+5000;



cout<<"enter 0 if your vehicle is not register"<<endl<<"enter any number if your vehicle is register";
cin>>v_register;
if(v_register==0)
fine=fine+10000;

cout<<"your vehicle fine is"<<fine<<endl;
if(fine==0)
cout<<"Journey Status:Continue";
else
cout<<"Journey status: cannot continue";
return 0;









    
}
