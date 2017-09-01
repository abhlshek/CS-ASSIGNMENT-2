#include<iostream>
#include<cmath>
using namespace std;
main()
{
float p,r,x,ci;
int t;
cout<<"enter principle"<<"\n";
cin>>p;
cout<<"enter time"<<"\n";
cin>>t;
cout<<"enter rate"<<"\n";
cin>>r;
x=p*(1+(r*1.0)/100);
ci=pow(x,t)-p;
cout<<"compound interest is "<<ci<<"\n";
}

