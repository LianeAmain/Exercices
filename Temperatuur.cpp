#include <iostream>
using namespace std;

int main(){

    double Temperatuur;
    cout<<"Temperatuur in graden celcius is:";
    cin>>Temperatuur;
    double Farenheit=(Temperatuur*9/5)+32;
    cout<<"Temperatuur in Farenheit is "<< Farenheit<<endl;

    return 0;
}