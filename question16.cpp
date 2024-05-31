#include <iostream>
using namespace std;
void sort(int a[10])
{
    
    cout<<"enter 10 numbers";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<10 ;i++)
    {
        for(int j=0;j<10;j++)
        {
          if(a[j]<a[j+1])
          {  
          k=a[j];
          a[j]=a[j+1];
          a[j+1]=k;

        }}
    }
    cout<<"second smallest number is: "<<a[8];
}