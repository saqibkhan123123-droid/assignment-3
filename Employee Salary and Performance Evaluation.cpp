#include <iostream>
using namespace std;
int main()
{
    float attendance;
    int year,performance,salary,final_salary;
    cout<<"enter your salary"<<endl;
    cin>>salary;
    cout<<"enter your attendance percentage"<<endl;
    cin>>attendance;
    cout<<"enter  your rating out of 5"<<endl;
    cin>>performance;
    if(attendance<75 || performance<3)
    final_salary=salary;
    else if(attendance>75 && attendance<=89)
    final_salary=salary+salary*0.05;
    else if(attendance>89 && attendance<=95)
    final_salary=salary+salary*0.1;
    else
        final_salary=salary+salary*0.15;
    cout<<"enter your working year ";
    cin>>year;
    if(year>5)
   final_salary=final_salary+5000;
   cout<<"the final salary is"<<final_salary<<endl<<"the addtional benifits are"<<final_salary-salary;
    return 0;
    
    
}
