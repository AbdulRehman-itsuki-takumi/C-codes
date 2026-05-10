#include<iostream>
using namespace std;
main()
{

cout<<"Enter The Number Of Red Roses You Bought : ";
float redRoses;
cin>>redRoses;

cout<<"Enter The Number Of White Roses You Bought : ";
float whiteRoses;
cin>>whiteRoses;

cout<<"Enter The Number Of Tulips You Bought : ";
float tulips;
cin>>tulips;

float redRosePricePerPiece = 2.00;
float whiteRosePricePerPiece = 4.10;
float tulipPricePerPiece = 2.50;

float TotalPrice = (redRoses * redRosePricePerPiece) + (whiteRoses * whiteRosePricePerPiece) + (tulips * tulipPricePerPiece);

if(TotalPrice > 200)
{
    float discount = TotalPrice * 20 / 100;
    float PriceAfterDiscount = TotalPrice - discount;
    cout<<"Total Price Of Flowers : "<<TotalPrice<<"$\n";
    cout<<"Total Price Of Flowers After 20% Discount : "<<PriceAfterDiscount<<"$";
}
else
{
    cout<<"Total Price Of Flowers : "<<TotalPrice<<"$";
}

}