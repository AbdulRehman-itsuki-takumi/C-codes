#include<iostream>
#include<cmath>
using namespace std;
void solveQuadratic(float a, float b, float c);
int main(){
    cout<<" Enter the value of a: ";
    float a;
    cin>>a;
    cout<<" Enter the value of b: ";
    float b;
    cin>>b;
    cout<<" Enter the value of c: ";
    float c;
    cin>>c;


    float power = pow(b,2);
    float deter= power - 4*a*c;
    if (deter == 0){
        float root= -b/(2*a);
    
        cout<< root ;
    }else{
        solveQuadratic(a, b, c);
    }
    return 0;
}
void solveQuadratic(float a, float b, float c){
    float power = pow(b,2);
    float deter= power - 4*a*c;

     if (deter > 0) {
        // Case 1: Two real roots (The standard formula)
        float root1 = (-b + sqrt(deter)) / (2 * a);
        float root2 = (-b - sqrt(deter)) / (2 * a);
        cout << "Two real roots: " << root1 << " and " << root2 << endl;
    } 
    else {
        // Case 3: Complex roots (The "scary" one, but it's just two parts)
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-deter) / (2 * a); // Notice the minus before deter
        cout << "Complex roots: " << endl;
        cout<<" x " << realPart << " + " << imaginaryPart << "i" << endl;
        cout <<" x " << realPart << " - " << imaginaryPart << "i" << endl;
    }


}