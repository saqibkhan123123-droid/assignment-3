#include<iostream>
using namespace std;
int main()
{
    int m_mark,i_mark,e_mark;
    cout<<"enter matric marks"<<endl;
    cin>>m_mark;
    cout<<"enter intermidiate marks"<<endl;
    cin>>i_mark;
    cout<<"enter mark of entry test"<<endl;
    cin>>e_mark;
if(i_mark>=85 && e_mark>=80)
cout<<"admission status: eligible"<<endl<<"scholarship; eligible for scholarship"<<endl<<"category:marit base";
else if(m_mark<60 || i_mark<65 || e_mark<50)
cout<<"admission status: rejected"<<endl<<"not eligible"<<endl<<"category:admission rejected";
else
cout<<"admission status: eligible"<<endl<<"scholarship; not eligible for scholarship"<<endl<<"category:regular admission";
        return 0;
        
}
