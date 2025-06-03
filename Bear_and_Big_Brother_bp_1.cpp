#include<bits/stdc++.h>
using namespace std;

int bear(int n, int m, int i)
{
    if(n > m)
    {
        return i;
    }

    int result = bear(n*3, m*2, i+1);
    return result;

}

int main()
{
    int n, m;
    cin >>n>>m;

    int result = bear(n ,m, 0);
    cout << result;
    
    return 0;
}
