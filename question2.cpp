#include<iostream>
using namespace std;
int main()
{ cout<<"enter number";
int n;
cin>>n;
if(n<0){
    cout<<"negative number";
}
else if(n>0){
    cout<<"positive number";
}
else{
    cout<<"zero";
}
}