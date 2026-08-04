// Codeforces: 282-A "Bit++"
// link: https://codeforces.com/problemset/problem/282/A

#include<iostream>
using namespace std;

int main(){
    int n, value=0;
    string statement;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> statement;
        if (statement == "++X" || statement == "X++"){
            value++;
        }
        else if (statement == "--X" || statement == "X--"){
            value--;
        }
    }
    cout << value;
    return 0;
}