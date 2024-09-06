#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    int age;
    int insuranceRate;

    cout << "Enter your age:" << endl;
    cin >> age;

    if (age < 16) {
        cout << "Youre too young to drive and have insurance!" << endl;
        insuranceRate = 0;
    }


    else if (age < 25) {
        insuranceRate = 4000;
    }


    else if (age < 40) {
        insuranceRate = 2000;
    }


    else {
        insuranceRate = 1700;
    }

    cout << "Your rate is " << insuranceRate << "$" << endl;

    return 0;
}
