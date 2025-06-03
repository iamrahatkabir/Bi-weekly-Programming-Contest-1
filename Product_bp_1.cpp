#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, m;
    cin >>l>>r>>m;

    long long int result = 1;

    for(int i = l; i <=r; i++)
    {
        result = (result * i)%m;
    }

    cout << result  << endl;

    
    return 0;
}
