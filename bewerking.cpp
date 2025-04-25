#include <iostream>
using namespace std;

int main(){
double x,y;
char option;
cout<<"x: ";
cin>>x;
cout<<"y: ";
cin>>y;
cout<<"+,-,*,/"<<endl;
cout<< "Enter your option:";
cin>>option;

if (option=='+')
      cout<<"answer:"<< x+y;

if( option=='-')
       cout<<"answer:"<<x-y;

if (option=='*')
      cout<<"answer:"<<x*y;

if (option=='/')
      cout<<"answer:"<<x/y;

      return 0;



}