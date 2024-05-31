#include <iostream>
using namespace std;
int main()
{ int k=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
}