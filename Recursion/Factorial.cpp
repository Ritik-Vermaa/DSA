#include <iostream>
using namespace std;

int factorial(int n)
{
    //base case mandatory because if we don't have base case then it will go into infinite loop
    // base case
    if (n == 1)
        return 1;

    // recursive case
    //     int chottiProblem = factorial(n-1);
    //     int badaProblem = n * chottiProblem;

    //     return badaProblem;

    return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;
    return 0;
}