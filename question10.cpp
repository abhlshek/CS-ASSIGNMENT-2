#include<iostream>
using namespace std;
int main ()
{
int a,b,c,d,e,f;
float g,h;
cout<< "Enter marks of 5 papers here out of 100 :";
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
f= a+b+c+d+e;
g=f/5;
h=(f/500)*100;
cout<<"your Total marks is "<<f<<"\n";
cout<<"your average marks is "<<g<<"\n";
cout<<"your percentage is "<<h;
return 0;
} 
