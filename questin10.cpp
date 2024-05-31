#include <iostream>
using namespace std;
int main()
{
    string tex;int alpha=0;int dig=0;int sym=0;int d;
      cout<<"enter the string ";
      cin>>tex;
      for(int i=0;i<tex.length();i++)
      {
         d=int(tex[i]);
         if((d>65&&d<91)||(d<124&&d>97))
         {
            alpha+=1;
         }
         if(d>48&&d<58)
         {
            dig+=i;
         }
         else{
            sym+=1;
         }
      }
      cout<<"alphabets:  "<<alpha;
      cout<<"digits:  "<<dig;
      cout<<"symbols:  "<<sym;
}