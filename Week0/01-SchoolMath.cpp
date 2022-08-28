#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,n;
    cin >> l;
    while (l--)
    {
        cin>>n;
        for (int i = 1; i <= 10; i++)
        {
            cout << n * i << " ";
        }
        cout << endl;
    }
    return 0;
}
