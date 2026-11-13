 #include <iostream>
using namespace std;
int main()
{
    int p,c,m,u,e;
    float percentage;
    cout<<"enter number of physics"<<endl;
    cin>>p;
    cout<<"enter number of chemistry"<<endl;
    cin>>c;
    cout<<"enter number of math"<<endl;
    cin>>m;
    cout<<"enter number of urdu"<<endl;
    cin>>u;
    cout<<"enter number of english"<<endl;
    cin>>e;
    const float total_mark=500;
    percentage=((p+c+m+u+e)*100)/total_mark;
    if(p<40 || c<40 || m<40 || u<40 || e<40 || percentage<50)
    cout<<"your percentage is "<<percentage<<"%"<<endl<<"fial"<<endl<<"you are not eligble for degree"<<endl;
    else if(percentage>=85)
        cout<<"your percentage is "<<percentage<<"%"<<endl<<"you won gold medal"<<endl;
    else if(percentage>=75)
        cout<<"your percentage is "<<percentage<<"%"<<endl<<"you won silver medal"<<endl;
   else if(percentage>=65)
       cout<<"your percentage is "<<percentage<<"%"<<endl<<"you are on merit scholarship"<<endl;
    else 
       cout<<"your percentage is "<<percentage<<endl<<"you are elgible for degree";
return 0;
    
}
