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
    int b;
    int ncount=0;
    int count[10];
    int temo;
   
    for(int i=0;i<10;i++)
    {
     for(int j=0;j<10;j++)
     
        {
          
          if(b==a[j])
           {
            ncount+=1;
           }
           b=a[i];
        }
    for(int i=0;i<10;i++)
    {
     count[i]=ncount;
    }
        
     }
    for(int i=0;i<10;i++)
        {
          for(int j=0;j<10;j++)
          {
            if(count[j]<count[j+1])
            {
            temo=count[i];
            count[i]=count[i+1];
            count[i+1]=temo;

          }
          }
        }
    cout<<"max occured "<<count[9] ; 
    

        
    

}