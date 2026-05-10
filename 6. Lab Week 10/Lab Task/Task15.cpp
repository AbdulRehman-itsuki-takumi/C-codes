#include<iostream>
using namespace std;
float calculatePoolState(float volume, float flow1, float flow2, float hours);
int main(){
    float volume, flow1, flow2, hours;
    cout<<"Enter volume of the pool: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flow1;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>flow2;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    calculatePoolState(volume, flow1, flow2, hours);
    return 0;
}
    //total water = (p1 + p2) * H 
    float calculatePoolState(float volume, float flow1, float flow2, float hours){

    
    float totalWater = (flow1 + flow2) * hours;
    if (totalWater <= volume){
        float PoolFilled = (totalWater / volume) * 100;
        float p1Contribution = (flow1 * hours / totalWater) * 100;
        float p2Contribution = (flow2 * hours / totalWater) * 100;
        cout<<"The pool is "<<PoolFilled<<"% full. "<<endl;
        cout<<"Pipe 1 contributed "<<p1Contribution<<"% of the water."<<endl
            <<"Pipe 2 contributed "<<p2Contribution<<"% of the water."<<endl;
    }
    if (totalWater > volume){
        float overflow = totalWater - volume;
        cout<<"The pool is overflowing with "<<overflow<<" liters of water."<<endl;
    }
     
    
}