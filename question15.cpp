#include <iostream>
using namespace std;
int main()
{
    string tex;string text;int d;string newtex;
      cout<<"enter the string ";
      cin>>tex;
      for(int i=0;i<tex.length();i++)
      {
         d=int(tex[i]);
         if((d>65&&d<91)||(d<124&&d>97))
         {
            text[i]+=tex[i];
         }
         else{
             newtex[i]+=newtex[i];
         }
}
           for(int i=0;i<newtex.length();i++)
           {
            cout<<newtex[i];
           } 
}