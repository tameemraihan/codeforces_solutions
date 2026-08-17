// Codsforces 112-A: Petya and Strings
// Link: https://codeforces.com/problemset/problem/112/A

#include<iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    if (a == b) cout << '0';

    else {
        int length = a.size();
        for (int i = 0; i < length; i++){
            if (a[i] < b [i]){
                cout << "-1"; 
                break;
            } 

            else if (a[i] > b [i]){
                cout << '1'; 
                break;
            } 
        }
    }
    return 0;
}