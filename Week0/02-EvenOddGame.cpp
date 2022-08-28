#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, n, sachin, mohit;
    cin >> l;
    while (l--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            sachin = 0;
            mohit = 0;
            cin >> arr[i];
            if (i % 2 == 1)
            {
                sachin = sachin + arr[i];
            }
            else if (i % 2 == 0)
            {
                mohit = mohit + arr[i];
            }
        }
        if (mohit > sachin)
            cout << "Mohit";
        else if (sachin > mohit)
            cout << "Sachin";
        else
            cout << "Tie";
        cout << endl;
    }
    return 0;
}