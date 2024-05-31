#include <iostream>
using namespace std;
int main(){
     string tex;int vow=0;int conso=0;
      cout<<"enter the string ";
      cin>>tex;
      for(int i=0;i<tex.length();i++)
      {
        if(tex[i]=='i'|| tex[i]=='a'||tex[i]=='e'||tex[i]=='I'||tex[i]=='u'||tex[i]=='o'||tex[i]=='O'||tex[i]=='U'||tex[i]=='A'||tex[i]=='E')
        {
            vow+=1;
        }
        else
        {
            conso+=1;
        }
      }
      cout<<"vowels:  "<<vow;
      cout<<"consonent:  "<<conso;

}