#include <iostream>
using namespace std;

#define EXPECTED_MINUTES_IN_OVEN 40
int totalTimeInMinutes(int,int);
int preparationTimeInMinutes(int);
int remainingMinutesInOven(int);

int main(){
    int a = totalTimeInMinutes(3,20);
    cout << a << endl;
}

int remainingMinutesInOven(int a){
    return EXPECTED_MINUTES_IN_OVEN-a;
}

int preparationTimeInMinutes(int a){
    return a*2;
}

int totalTimeInMinutes(int numberOfLayers, int actualMinutesInOven){
    return remainingMinutesInOven(actualMinutesInOven) + preparationTimeInMinutes(numberOfLayers);
}