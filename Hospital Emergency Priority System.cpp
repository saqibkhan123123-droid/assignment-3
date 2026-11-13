#include <iostream>
using namespace std;
int main()
{
int oxygen,heart_rate,age,tem;
cout<<"enter oxygen patient";
cin>>oxygen;
cout<<"enter  heart rate of patient";
cin>>heart_rate;
cout<<"enter age of patient";
cin>>age;
cout<<"enter temperature in F";
cin>>tem;
if(heart_rate>130 || heart_rate<45 || oxygen<90)
cout<<"condition:critical";
else if(age>65 && tem>102)
cout<<"high priority";
else if(oxygen>=90 && oxygen<=94)
cout<<"condition:moderate";
else 
cout<<"condition:normal";
return 0;
}
