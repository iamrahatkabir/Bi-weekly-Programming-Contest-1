#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, q;
    cin >> n >> q;
    int s[n+1];
    // string s;
    for (int i = 1; i <= n; i++)
    {
        cin.ignore();
        cin >> s[i];
    }
    

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int sum = 0;

        // cout << l << " " << r << endl;

        for (int i = l; i <= r; i++)
        {
            sum += s[i];
        }
        cout << sum << endl;
    }

    // for(int i = 1; i <= n; i++)
    // {
    //     cout << s[i] << " ";
    // }

    return 0;
}