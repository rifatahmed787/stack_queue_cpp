#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of elements in a stack
int getSum(stack<int> s) {
    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    return sum;
}

// Function to find the equal sum of three stacks
int compare_sum(stack<int>& st1, stack<int>& st2, stack<int>& st3) {
    int sum1 = getSum(st1);
    int sum2 = getSum(st2);
    int sum3 = getSum(st3);

    // Keep removing the top elements from the stack with the highest sum until all sums are equal
    while (!(sum1 == sum2 && sum2 == sum3)) {
        if (sum1 >= sum2 && sum1 >= sum3) {
            sum1 -= st1.top();
            st1.pop();
        } else if (sum2 >= sum1 && sum2 >= sum3) {
            sum2 -= st2.top();
            st2.pop();
        } else {
            sum3 -= st3.top();
            st3.pop();
        }
    }

    return sum1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    stack<int> st1, st2, st3;
    int value;

    cout << "Enter " << a << " elements for stack 1:\n";
    for (int i = 0; i < a; ++i) {
        cin >> value;
        st1.push(value);
    }

    cout << "Enter " << b << " elements for stack 2:\n";
    for (int i = 0; i < b; ++i) {
        cin >> value;
        st2.push(value);
    }

    cout << "Enter " << c << " elements for stack 3:\n";
    for (int i = 0; i < c; ++i) {
        cin >> value;
        st3.push(value);
    }

    cout << "The equal sum is: " << compare_sum(st1, st2, st3) << endl;
    return 0;
}
