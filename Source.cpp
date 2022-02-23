#include <iostream>
using namespace std;

int main() {
    int Dollor, result = 0;
    cin >> Dollor;
    while (Dollor >= 100)
    {
        result++;
        Dollor -= 100;
    };
    while (Dollor >= 20)
    {
        result++;
        Dollor -= 20;
    };
    while (Dollor >= 5)
    {
        result++;
        Dollor -= 5;
    };
    while (Dollor >= 1)
    {
        result++;
        Dollor -= 1;
    };
    cout << result;
}