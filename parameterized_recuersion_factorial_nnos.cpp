#include<bits/stdc++.h>
using namespace std;

int parameterized_recursion(int num, int fact){
    if(num<1){
        cout<<fact;
        return 0;
    }
    return parameterized_recursion(num-1,fact*num);
}

int main(){
    int num;
    cin>>num;
    parameterized_recursion(num, 1);
}