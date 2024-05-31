#include <iostream>
using namespace std;
int main()
{
    int a[3][3];int b[3][3];
     cout<<"enter 9 number";
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
        
    }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            b[i][j]=a[j][i];        }
        
    }
    
    
     cout<<"\n"; 
    
    

    cout<<"\n"; 
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
          cout<<b[i][j];
        }
        cout<<"\n";
    }
}
