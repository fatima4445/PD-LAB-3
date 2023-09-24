#include <iostream>
using namespace std;
main(){
cout<<"enter imposter:";
float imp,player,chance;
cin>>imp;
cout<<"enter player count:";
cin>>player;
chance=(imp/player)*100;
cout<<"chance of being an imposter :"<<chance;
}