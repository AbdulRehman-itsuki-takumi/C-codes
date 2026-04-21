#include<iostream>
#include<cmath>
using namespace std;
float calculateBalance(float balance, int years, float intrestRate);
int main(){
    float balance;
    int years;
    float intrestRate = 0.0;
    float finalAmount = 0.0;
    cout<<" Enter initial balance: ";
    cin>>balance;
    cout<<" Enter number of years: ";
    cin>>years;
    calculateBalance(balance, years, intrestRate);
    
    return 0;
}
float calculateBalance(float balance, int years, float intrestRate ){
    if (balance< 10000){
        intrestRate = 0.05;
        balance = balance + (balance * intrestRate);
    

    }else if (balance >=10000 && balance <= 50000){
        intrestRate = 0.07;
        balance = balance + (balance * intrestRate);
        
        
    }else if (balance > 50000){
        intrestRate = 0.1;
        balance = balance + (balance * intrestRate);
            
        
    }
     if (years >= 3){
        balance = balance + (balance * 0.02);
        cout << " updated balance: " << balance ;
        
    
    }
    float finalAmount = balance + (balance * intrestRate);
    return finalAmount;

}