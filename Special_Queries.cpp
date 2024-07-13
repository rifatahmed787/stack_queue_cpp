#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> qu;
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        string str;
        cin >> i;
        if (i == 0)
        {
            cin >> str;
            qu.push(str);
        }
        else
        {
            if (!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}