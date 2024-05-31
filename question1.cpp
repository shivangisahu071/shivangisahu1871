#include <iostream>
using namespace std;
int main()
{
    int a[10];
    cout<<"enter 10 numbers";
    for(int i=0;i<10;i++)
        {
          cin>>a[i];
        }
cout<<"enter a number";
int b;
int count=0;
cin>>b;
     for(int i=0;i<10;i++)
     {
        if(b==a[i])
        count+=1;
     }
cout<<"number comes"<<count;   
}
