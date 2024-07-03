#include<bits/stdc++.h>
using namespace std;

int functional_recursion(int num) {
    if (num == 0) {
        return 1;
    }
    return num * functional_recursion(num - 1);
}

int main() {
    int num;
    cin >> num;
    cout << functional_recursion(num);
    return 0;
}
