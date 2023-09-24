#include <iostream>
using namespace std;
main(){
cout<<"enter velocity:";
int v,acc,t,final;
cin>>v;
cout<<"enter acceleration:";
cin>>acc;
cout<<"enter time:";
cin>>t;
final=v+acc*t;
cout<<"final velocity:"<<final;
}