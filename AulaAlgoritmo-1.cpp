#import <iostream>
using namespace std;

int main(int argc, char** argv) {
    float celcius;
    float fahrenheit;

    cout<<"Digite a temperatura em celsius:"<<endl;
    cin>>celcius;
    fahrenheit = celcius*1.8 + 32;

    cout<<celcius<<" graus Celsius equivale a "<<fahrenheit<<" graus farenheit.";
    
    return 0;
}