#include<bits/stdc++.h>
using namespace std;

int factorial(int n, int i, int j)
{
    if(i > n)
    {
        return 1;
    }


    int result = factorial(n, i+1, j);
    result = result * i;
    return result;
    
}


int main()
{
    int n;
    cin >> n;

    int result = factorial(n, 1, 1);
    cout << result;
    
    return 0;
}
