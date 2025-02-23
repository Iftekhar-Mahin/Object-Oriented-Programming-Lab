#include<iostream>
using namespace std;

class Prime {
public:
    Prime(int num) {
        int divisorCount = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisorCount++;
            }
        }
        
        if (divisorCount == 2)
            cout << num << " is a prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Prime obj(number);
    return 0;
}
