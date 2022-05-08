#include <iostream>

using namespace std;

int main()
{
    // Sum OF First N No.
    int n, sum;
    cout << "Enter The N th No.\n";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << sum << endl;
    return 0;
}