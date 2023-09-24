#include <iostream>
using namespace std;
main()
{
cout<<"enter the movie name:";
string name;
cin>>name;
int adult,child,Asold,Csold,per;
cout<<"enter the adult ticket price:$";
cin>>adult;
cout<<"enter the child ticket price:$";
cin>>child;
cout<<"enter the no of adult ticket sold:";
cin>>Asold;
cout<<"eenter the no of child tickets sold:";
cin>>Csold;
cout<<"enter the percentage donated to charity:";
cin>>per;
int tot,donation,remaining;
tot=(adult*Asold)+(child*Csold);
donation= tot/per;
remaining=tot-donation;
cout<<"movie:"<<name <<endl;
cout<<"total amount generated fron ticket sold:$"<<tot <<endl;
cout<<"donation to charity:$"<<donation <<endl;
cout<<"remainning amount after  donation:$"<<remaining <<endl;
}

 