#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

   for(int i = 2; i <= n; i++)
   {
    bool is_prime = true;

    if(i == 2)
    {
        cout << i << " ";
    }
    else if(i%2 != 0)
    {
        // cout << i << " ";
        for(int j = 2; j <= n; j++)
        {
            if(j < i)
            {
                if(i%j == 0)
                {
                    is_prime = false;
                    break;
                }
            }
        }
        
        if(is_prime)
        {
            cout << i << " ";
        }
    }


   }

    return 0;
}
