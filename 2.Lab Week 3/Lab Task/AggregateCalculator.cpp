#include<iostream>
using namespace std;

main(){

cout<<"Enter Your Name : ";
string name;
cin>>name;

cout<<"Enter Your Matric Marks (Out Of 1100) : ";
float matric;
cin>>matric;
matric = matric * 10/1100;

cout<<"Enter Your Intermediate Marks (Out Of 550) : ";
float inter;
cin>>inter;
inter = inter * 40/550;

cout<<"Enter Your ECAT Marks (Out Of 400) : ";
float ecat;
cin>>ecat;
ecat = ecat * 50/400;

float aggregate;
aggregate = matric + inter + ecat;
cout<<"Your Aggregate is : "<<aggregate<<"%";

cout<<endl;
cout<<"--------STUDENT AGGREAGTE--------"<<endl;
cout<<"\tStudent Name : "<<name<<endl;
cout<<"\tAggregate : "<<aggregate<<"%"<<endl;

}
