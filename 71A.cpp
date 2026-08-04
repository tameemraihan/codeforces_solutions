// Codeforces: 71-A "Way Too Long Words"
// Link: https://codeforces.com/problemset/problem/71/A

#include <iostream>
using namespace std;

int main(){
    string word;
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
        cin >> word;
        
        int length = word.length();
        if (length > 10){
            cout << word[0] << length-2 << word[length-1] << endl;
        }
        else cout << word << endl;
    }

    return 0;
}