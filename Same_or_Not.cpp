#include <bits/stdc++.h>
using namespace std;

int main() { 
    stack<int> st;
    queue<int> qu;
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        qu.push(y);
    }

    
    bool isEqual = true;
    while (!st.empty() && !qu.empty()) {
        if (st.top() != qu.front()) {
            isEqual = false;
            break;
        }
        st.pop();
        qu.pop();
    }

    if (!st.empty() || !qu.empty()) {
        isEqual = false;
    }

    if (isEqual) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
