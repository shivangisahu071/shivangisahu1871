#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter value of a";
cin>>a;
cout<<"enter value of b";
cin>>b;
cout<<"enter arithmetic operation";
char c;
cin>>c;
switch(c)
{
    case '+':cout<<"addition-";
    cout<<a+b<<endl;
    break;
    case '-':cout<<"substraction-";
    cout<<a-b<<endl;
    break;
    case '/':cout<<"division-";
    cout<<a/b<<endl;
    break;
    case '%':cout<<"modulous-";
    cout<<a%b<<endl;
    break;
    case '*':cout<<"multiplication-";
    cout<<a*b<<endl;
    break;
    default:cout<<"invalid input";
    
}
return 0;
}