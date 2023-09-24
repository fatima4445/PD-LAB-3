#include <iostream>
using namespace std;
main(){
cout<<"enterthe size of fertillizer bag in pounds:";
int cost,area,cop,cps, size;
cin>>size;
cout<<"enter the cost of the bag :$";
cin>> cost;
cout<<"enter area in square feet that can be covered by the bag:";
cin>>area;
cop = cost/size;
cout<<"cost of fertilizer per pound:$" <<cop<<endl;
cps=(cost/size)/2;
cout<<"cost of fertilizing per square pound:$"<<cps;
}



