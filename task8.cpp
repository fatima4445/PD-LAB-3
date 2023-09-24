#include <iostream>
using namespace std;
main()
{
float vegPrice,fruitPrice,tot;
int tot_veg,tot_fruit;
cout<<"enter vegetable price per kilogram:";
cin>>vegPrice;
cout<<"enter fruit price per kilogram:";
cin>> fruitPrice;
cout<<"enter total kilograms of vegetables:";
cin>>tot_veg;
cout<<"enter total kilograms of fruit:";
cin>> tot_fruit;
tot=(vegPrice*tot_veg)+(fruitPrice*tot_fruit);
tot=tot/1.94;
cout<<"total  earnings in rupees:"<<tot;
}
