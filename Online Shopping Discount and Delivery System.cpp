#include <iostream>
using namespace std;
int main()
{
    int price,premium,order;
    cout<<"enter your purchase price"<<endl;
    cin>>price;
    if(price>50000)
        price=price-price*0.2;
    else if(price>25000)
        price=price-price*0.15;
    else if(price>10000)
        price=price-price*.1;
    else
        price=price;

    cout<<"enter 1 if your are premium member"
    <<endl<<"enter any other number if you are not premium member"<<endl;
    cin>>premium;
    if(premium==1)
    price=price-price*0.05;
    if(price>20000)
    price=price;
    else
    price=price+500;
    cout<<"enter 0 if you has unpaid previous order"<<endl<<"enter any other number if you has paid previous order"<<endl;
    cin>>order;
if(order==0)
cout<<"your order is not conform plz pay amount of previous order and try again";
else
cout<<"your order is conformed"<<endl<<"your bill is"<<price<<"rs";

    return 0;
}
