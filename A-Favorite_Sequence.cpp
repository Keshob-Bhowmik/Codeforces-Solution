#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[n];
        int c = n;
        int d = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                int bi = i / 2;
                b[i] = a[bi];
            }
            else if (i % 2 != 0)
            {
                b[i] = a[c - d];
                c = c - 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
    cout<<endl;
    }
    return 0;
}