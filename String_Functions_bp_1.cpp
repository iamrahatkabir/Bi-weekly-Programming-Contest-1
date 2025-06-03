#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    for(int i = 0; i < q; i++)
    {
        string command;
        // cout <<"Enter command" << endl;
        if(i == 0)
        {
            cin.ignore();
        }
        getline(cin, command);

        int sort_string = command.find("sort");
        int reverse_string = command.find("reverse");
        int print_string = command.find("print");
        int substrac_string = command.find("substr");
        int push = command.find("push_back");
        // cout << print_string << endl;

        if(command == "pop_back")
        {
           s.pop_back();
        }
        else if(command == "front")
        {
            char ss = s.front();
            cout << ss << endl;
        }
        else if(command == "back")
        {
            cout << s.back() << endl;
        }
        else if(sort_string != -1)
        {

            int l = command.size();
            char lc = command[l-1];
            int rint = lc-'0';
            int last_idx = rint;
            // cout << "last-> " << last_idx << endl;

            

            int r = command.size();
            char com = command[r-3];
            int r_x = com-'0';
            int first_idx = r_x-1;
            // cout << "first-> " << first_idx << endl;


            sort(s.begin()+first_idx, s.begin()+last_idx);
        }
        else if(reverse_string != -1)
        {
            int l = command.size();
            char lc = command[l-1];
            int rint = lc-'0';
            int last_idx = rint;
            // cout << "l-> " << last_idx;

            

            int r = command.size();
            char com = command[r-3];
            int r_x = com-'0';
            int first_idx = r_x-1;

            reverse(s.begin()+first_idx, s.begin()+last_idx);

        }
        else if(print_string != -1)
        {
            char r = command.back();
            int r_idx = r-'0'; 


            cout << s[r_idx-1] << endl;
        }
        else if(substrac_string != -1)
        {
            int l = command.size();
            char lc = command[l-1];
            int rint = lc-'0';
            int last_idx = rint-1;
            
            
            
            int r = command.size();
            char com = command[r-3];
            int r_x = com-'0';
            int first_idx = r_x-1;
            // cout << "l-> " << first_idx;
            
            for(int sub = first_idx; sub <= last_idx; sub++)
            {
                cout << s[sub];
            }
            cout << endl;

        }
         else if(push != -1)
        {
            s.append("x");

        }

    }

    // cout << s;


    return 0;
}
