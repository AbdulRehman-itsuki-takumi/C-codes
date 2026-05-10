#include <iostream>
using namespace std;

string pyramidVolume(float l, float w, float h, string unit)
{
    double volume = (l * w * h) / 3.0; 
    if(unit == "millimeters")
    {
        volume = volume * 1000000000;
    }   
    else if(unit == "centimeters")
    {
        volume = volume * 1000000;
    }    
    else if(unit == "kilometers")
    {
        volume = volume / 1000000000;
    }   
    
    return to_string(volume) + " Cubic " + unit;
}

main()
{
    float lenght;
    float width;
    float height;
    string unit;

    cout << "Enter Length : ";
    cin >> lenght;
    cout << "Enter Width : ";
    cin >> width;
    cout << "Enter Height : ";
    cin >> height;

    cout << "Enter Unit (Millimeters, Centimeters, Meters, Kilometers) : ";
    cin >> unit;

    cout << pyramidVolume(lenght, width, height, unit);


}