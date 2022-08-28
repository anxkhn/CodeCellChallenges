#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n, queries, key, temp, i, j, counter;
    cin >> l;
    while (l--)
    {
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> key >> queries;
        for (i = 0; i < queries; i++)
        {
            counter = 0;
            cin >> temp;
            if (temp <= n && a[temp] == key)
            {
                for (j = 0; j <= temp; j++)
                {
                    if (key == a[j])
                    {
                        counter += 1;
                    }
                }
            }
            cout << counter << endl;
        }
    }
    return 0;
}