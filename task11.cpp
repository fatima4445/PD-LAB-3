#include<iostream>
using namespace std;
main()
{
int age,moved,avg;
cout<<"Enter person's age:";
cin>>age;
cout<<"Enter number of they have moved:";
cin>> moved;
avg=age/(moved+1);
cout<<"Number of years lived in the same house:"<<avg;
}