// Codeforces: 158-A "Next Round"
// Link: https://codeforces.com/problemset/problem/158/A

#include<iostream>
using namespace std;

int main(){
    int k, n, a, i, count = 0;
    cin >> n >> k;
    int arr[n];
    for (i = 0; i<n; i++){
       cin >> a;
       arr[i] = a; 
    }

    i = 0;
    while (i < n && arr[i] > 0){
        if (arr[i] >= arr[k-1]){
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}