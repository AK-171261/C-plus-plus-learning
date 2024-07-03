// WAP to find sum of N natural numbers.
#include<bits/stdc++.h>
using namespace std;

int functional_recursion(int num) {
    if (num == 0) {
        return 0;
    }
    return num + functional_recursion(num - 1);
}

int main() {
    int num;
    cin >> num;
    cout << functional_recursion(num);
}

