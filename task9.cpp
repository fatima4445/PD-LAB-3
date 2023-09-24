#include <iostream>
using namespace std;
main()
{
int no,no1,no2,no3,n1,n2,n3,n4,sum;
cout<<"enter a 4-digit no:";
cin>>no;
n1=no%10;
n3=(no/10)%10;
n2=(no/100)%10;
n4=(no/1000)%10;
sum=n1+n2+n3+n4;
cout<<"sum="<<sum;

}


                                                                                                                                                                                                                         