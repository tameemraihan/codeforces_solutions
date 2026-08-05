// Codeforces: 1-A "Theatre Square"
// Link: https://codeforces.com/problemset/problem/1/A

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n,m,a;
    cin >> n >> m >> a;
    long long tile = ((n + a - 1) / a) * ((m + a -1) / a); // tricks for not using ceil function.
    cout << tile;
    return 0;
}