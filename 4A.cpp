// codeforces- 4A: Watermelon
// link: https://codeforces.com/problemset/problem/4/A

#include<iostream>
using namespace std;

int main(){
    int w; // weight of the watermelon
    cin >> w;
    bool flag;
    if (w != 2 && w % 2 == 0){
        cout<< "YES";
    }
    else cout << "NO";
    return 0;
}