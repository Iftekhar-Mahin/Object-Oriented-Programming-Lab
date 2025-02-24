#include<iostream>
using namespace std;

class perfect {
public:
    void check() {
        int num;
        cout << "Enter a number: ";
        cin >> num;   
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num)
            cout << num << " is a perfect number." << endl;
        else
            cout << num << " is not a perfect number." << endl;
    }
};

int main() {
    perfect obj;
    obj.check();
    return 0;
}
