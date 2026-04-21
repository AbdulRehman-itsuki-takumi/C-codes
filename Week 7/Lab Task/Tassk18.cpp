#include <iostream>
#include <cmath>
using namespace std;
float Taxcollector(float price, float taxRate, string vehicle);
int main(){
    float price, taxRate;
    string vehicle;
    cout<<" Enter vehicle type code (M/E/S/V/T): ";
    cin>> vehicle;
    cout<<" Enter vehicle price: ";
    cin>> price;
    Taxcollector(price, taxRate, vehicle);
    return 0;
}
float Taxcollector(float price, float taxRate, string vehicle){
    if (vehicle == "M"){
        taxRate = 0.06;
    }else if (vehicle == "E"){
        taxRate = 0.08;
    }else if (vehicle == "S"){
        taxRate = 0.10;
    }else if (vehicle == "V"){
        taxRate = 0.12;
    }else if (vehicle == "T"){
        taxRate = 0.15;
    }
    float taxAmount = price * taxRate;
    cout<<" The tax amount for the vehicle is: "<<taxAmount<<" dollars.";
    cout<<" The total price of the vehicle including tax is: "<< price + taxAmount<<" dollars.";
    return taxAmount;
}