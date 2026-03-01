#include<iostream>
using namespace std;
int main(){

cout<<"Enter The Number Of Minutes : ";
int mints;
cin>>mints;

cout<<"Enter The Number Of Frames (fps) : ";
int fps;
cin>>fps;

int TotalFrames;
TotalFrames = mints * fps * 60;

cout<<"Total FPS Are : "<<TotalFrames<<" fps";

}