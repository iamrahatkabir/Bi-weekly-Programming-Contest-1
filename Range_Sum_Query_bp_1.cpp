#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    char s[100001];
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
            sum += s[i]-'0';
        }
        cout << sum << endl;
    }

    // for(int i = 1; i <= n; i++)
    // {
    //     cout << s[i] << " ";
    // }

    return 0;
}