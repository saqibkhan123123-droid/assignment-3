#include <iostream>
using namespace std;
int main()
{
    int age,salary,e_d_y,installment,credit;
cout<<"enter your age"<<endl;
cin>>age;
cout<<"enter your salary"<<endl;
cin>>salary;
cout<<"enter your remain employment duration in year"<<endl;
cin>>e_d_y;
cout<<"enter your monthly loan installments"<<endl;
cin>>installment;
cout<<"enter your credit score"<<endl;
cin>>credit;
if(age<21 || salary<50000  || e_d_y<2 || salary<installment*0.4 || credit<600)
cout<<"lone rejected";
else if (e_d_y>5 && salary>150000)
cout<<"lone approved and under premium category";
else
cout<<"lone approved";
return 0;
}
