#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

    int x;
    int a;
    int b;
    cin >> a >> b;
    while (__gcd(a, b) != 1)
    {
        int x = __gcd(a, b);
        a = a / x;
    }
    cout << a;

    return 0;
}