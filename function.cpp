#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    
    for (int i = 2; i * i <= num; i++) {  // Loop from 2 to sqrt(num)
        if (num % i == 0) {
            return false; // If num is divisible by i, it's not prime
        }
    }
    
    return true; // If no divisors found, the number is prime
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
