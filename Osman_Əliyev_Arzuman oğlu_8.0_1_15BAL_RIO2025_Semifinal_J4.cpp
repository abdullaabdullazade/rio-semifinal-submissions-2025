#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

// Merge sort əsasında inversiya sayını hesablayan funksiya
ll mergeCount(vector<ll>& arr, int l, int r) {
    if(r - l <= 1)
        return 0;
    int m = (l + r) / 2;
    ll inv = mergeCount(arr, l, m) + mergeCount(arr, m, r);
    vector<ll> temp;
    int i = l, j = m;
    while(i < m && j < r) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            inv += (m - i);
        }
    }
    while(i < m)
        temp.push_back(arr[i++]);
    while(j < r)
        temp.push_back(arr[j++]);
    for(int k = l; k < r; k++)
        arr[k] = temp[k - l];
    return inv;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll inversions = mergeCount(a, 0, n);
        // Əgər inversiya sayı cütdürsə, əməliyyatın icazə verdiyi paritədir.
        if(inversions % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
