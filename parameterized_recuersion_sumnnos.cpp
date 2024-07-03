// WAP to find the sum of N natural nos
#include <bits/stdc++.h>
using namespace std;

int paramter_recursion(int num, int sum) {
    if (num < 1) {
        cout << sum;
        return 0;
    }
    return paramter_recursion(num - 1, sum + num);
}

int main() {
    int num;
    cin >> num;
    paramter_recursion(num, 0);
}