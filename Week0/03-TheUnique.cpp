#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n, i, j;
    cin >> l;
    while (l--)
    {
        int counter = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if ((a[i] == a[j]) && (i != j))
                {
                }
                else
                {
                    counter += 1;
                }
            }
        }
        if (counter % 2 == 0)

            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        }
    return 0;
}