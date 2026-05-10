#include<iostream>
using namespace std;
main()
{
  cout<<"Enter The Name Of Figure (Circle , Rectangle , Triangle , Square) : ";
  string shape;
  cin>>shape;

  if(shape == "Square")
    {
       cout<<"Enter The Lenght Of Square Side : ";
       int SquareSide;
       cin>>SquareSide;

       float AreaOfSquare = SquareSide * SquareSide;
       cout<<"Area Of Square Is : "<<AreaOfSquare;
    
    }
  if(shape == "Rectangle")
    {
        cout<<"Enter The Lenght Of Rectangle : ";
        int rectangleLenght;
        cin>>rectangleLenght;
        cout<<"Enter The Width Of Rectangle : ";
        int rectangleWidth;
        cin>>rectangleWidth;

        float AreaOfRectangle = rectangleLenght * rectangleWidth;
        cout<<"Area Of Rectangle Is : "<<AreaOfRectangle;
    }
  if(shape == "Triangle")
    {
        cout<<"Enter The Base Of Triangle : ";
        int baseOfTriangle;
        cin>>baseOfTriangle;
        cout<<"Enter The Height Of The Triangle : ";
        int heightOfTriangle;
        cin>>heightOfTriangle;

        float AreaOfTriangle = 1 / 2 * baseOfTriangle * heightOfTriangle;
        cout<<"Area Of Triangle Is : "<<AreaOfTriangle;
    }
  if(shape == "Circle")
    {
        cout<<"Enter The Radius Of Circle : ";
        int radiusOfCricle;
        cin>>radiusOfCricle;
         
        float AreaOfCircle = (22 / 7) * radiusOfCricle * radiusOfCricle;
        cout<<"Area Of Circle Is : "<<AreaOfCircle;
    }


}