#include <iostream>
using namespace std;

int main()
    {
        int a[10];int k=0;
        int b[10];
        int c[20];
        cout<<"enter 10 numbers";
         
        for(int i=0;i<10;i++)
           {
              cin>>a[i];
           }
        cout<<"enter another 10 numbers for another array";
        for(int i=0;i<10;i++)
        {
           cin>>b[i];

        }
        for(int i=0;i<20;i++)
        {
            
            while(k<10)
            {
            if(i<10)
              {
                c[i]=a[i];
              }
            else
            {
                c[i]=b[k];
                k++;

            }  
        }
        }
        for(int i=0;i<20;i++)
        {
            cout<<c[19-i]<<" ";
        }
    }
