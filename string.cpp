#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    string reversed = str;  // Make a copy of the string
    int start = 0;
    int end = reversed.length() - 1;
    
    // Swap characters from start to end
    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }

    return reversed;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Read the entire line (including spaces)
    
    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;
    
    return 0;
}
