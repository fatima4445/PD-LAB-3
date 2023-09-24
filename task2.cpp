#include <iostream>
using namespace std;
main(){
cout<<"number of minutes :";
int min,sec,tot;
cin>>  min;
cout<<"frames per second:";
cin>>sec;
tot=min*sec*60;
cout<<"total no of frames:"<<tot;
}