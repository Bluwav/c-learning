#include<bits/stdc++.h>
using namespace std:
int main(){
    long long n;
    cin >> n;
    long long L=1 R=100000;
    while (L <= R){
        long long x = (L+R)/2;
        if (x*x*x >= n)     R = x-1;
        else L = x+1;
    }
    cout << L-1;
    return 0;
}
