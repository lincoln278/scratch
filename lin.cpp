#include <iostream>
using namespace std;

int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    int result = addNumbers(a, b);
    cout << "The sum is: " << result << endl;
    
    return 0;
}
