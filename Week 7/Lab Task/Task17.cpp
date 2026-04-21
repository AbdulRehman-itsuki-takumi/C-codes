#include <iostream>
#include <cmath>
using namespace std;
float pyramidVolume(float length, float width, float height, string unit);
int main(){
    float length, width, height;
    cout<<" Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<" Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<" Enter the height of the pyramid (in meters): ";
    cin>>height;
    cout<<" Enter output unit: (milimeters, centimeters, meters, kilometers): ";
    string unit;
    cin>>unit;
    float volume = pyramidVolume(length, width, height, unit);
    return 0;

}
float pyramidVolume(float length, float width, float height, string unit){
    float volume = (length * width * height) / 3;
    if (unit == "milimeters"){
        volume = volume * 100000000;
    }else if (unit == "centimeters"){
        volume = volume * 1000000;
    }else if (unit == "kilometers"){
        volume = volume / 1000000000;
    }
    cout<<" The volume of the pyramid is: "<<volume<<" "<<unit<<"^3";
    return volume;
}