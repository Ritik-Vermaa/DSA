#include<iostream>
using namespace std;

int power(int a, int n) {
    if(n == 0) return 1;
    if(n == 1) return a;
    int temp = power(a, n/2);
    if(n % 2 == 0) return temp * temp;
    else return a * temp * temp;
}

int main() {
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
    return 0;
}