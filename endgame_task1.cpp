#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    char k;
    cout << "enter n (rows) " << endl;
    cin >> n;
    cout << "enter m (columns) " << endl;
    cin >> m;
    cout << "enter conveyer grid info " << endl;
    char convgrid[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> k;
            convgrid[i][j] = k;
        }
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (convgrid[i][m - 1] != 'D')
        {
            sum++;
        }
    }
    for (int j = 0; j < m - 1; j++)
    {
        if ((convgrid[n - 1][j]) != 'R')
        {
            sum++;
        }
    }
    if (sum == 0)
    {
        cout << "SUCCESS" << endl;
    }

    cout << "the conveyor needs to be changed at " << sum << " place(s) ";

    return 0;
}