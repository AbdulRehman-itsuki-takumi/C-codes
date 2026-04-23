#include <iostream>
#include <cmath>
using namespace std;
float pyramidVolume(float length, float width, float height, string unit);
main(){
    float length;
    float width;
    float height;

    cout<<" Enter The Length Of The Pyramid (In Meters) : ";
    cin>>length;
    cout<<" Enter The Width Of The Pyramid (In Meters) : ";
    cin>>width;
    cout<<" Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<" Enter Output Unit : (Milimeters, Centimeters, Meters, Kilometers) : ";
    string unit;
    cin>>unit;
    float volume = pyramidVolume(length, width, height, unit);

}
float pyramidVolume(float length, float width, float height, string unit){
    float volume = (length * width * height) / 3;
    if (unit == "milimeters")
    {
        volume = volume * 100000000;
    }
    else if (unit == "centimeters")
    {
        volume = volume * 1000000;
    }
    else if (unit == "kilometers")
    {
        volume = volume / 1000000000;
    }
    cout<<" The Volume Of The Pyramid Is : "<<volume<<" "<<unit<<"^3";
    return volume;
}