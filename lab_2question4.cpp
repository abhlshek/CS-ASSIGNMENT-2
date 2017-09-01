#include<iostream>
using namespace std;
main()
{
int d;
cout<<"enter days"<<"\n";
cin>>d;
int y=d/365;
int w=(d-365)/7;
int e=d-(365*y)-(7*w);
cout<<"resullt is "<<y<<" years "<<w<<" weeks "<<e<<" days "<<"\n";
return(0);
}

