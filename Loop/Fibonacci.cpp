#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series up to " << n << " terms:" << endl;
    
    for (int i = 1; i <= n; ++i) {
        cout << first;
        if (i < n)
            cout << ", ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
