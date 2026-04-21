#include <iostream>
#include <cmath>
using namespace std;
int calculateSalary (float base, int score, int experience);
int main(){
    float base;
    int score;
    int experience;
    cout<<" Enter base salary: ";
    cin>>base;
    cout<<" Enter performance score: ";
    cin>>score;
    cout<<" Enter years of experience: ";
    cin>>experience;
    calculateSalary(base, score, experience);
    
    return 0;
}
int calculateSalary (float base, int score, int experience){
    float finalSalary = 0.0;
    if (score >= 90){
        finalSalary = base + (base * 0.2);
        
    
    }else if (score >= 75 && score < 90){
        finalSalary = base + (base * 0.1);
        
        
    }else if (score < 75){
        finalSalary = base + (base * 0.05);

        
    }
     if (experience >= 5){
        finalSalary = finalSalary + (finalSalary * 0.05);
        cout << " Updated Salary: " << finalSalary ;
    
    }
    return finalSalary;

}