#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;int a[20];
    string p;
    
    while(num>0)
    {
        p=(to_string(num%2))+p;
        num=num /2;

    }
    cout<<"binary number to the number"<<p;
}