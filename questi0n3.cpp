#include<iostream>
using namespace std;
int main()
{ int n,s=0,p,q;
cout<<"enter number";
cin>>n;
do{
    p=n/10;
    q=n%10;
    n=p;
    s=s+q;

}while(n!=0);
cout<<"sum of digits"<<s;
}