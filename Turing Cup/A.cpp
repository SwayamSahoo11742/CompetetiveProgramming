#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int cycle = a + b; // duration of one cycle
    int fullCycles = c / cycle; // number of full cycles observed
    int greenTime = fullCycles * a; // total time traffic lights were green during full cycles
    
    int remainingTime = c % cycle; // remaining time after full cycles
    if (remainingTime >= a) { // traffic light is green during remaining time
        greenTime += a;
    } else { // traffic light is red during remaining time
        greenTime += remainingTime;
    }
    
    cout << greenTime << endl;
    
    return 0;
}
