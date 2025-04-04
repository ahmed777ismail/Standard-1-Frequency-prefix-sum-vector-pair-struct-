#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) return i;
    }
}

int main() {
    int n, k; cin >> n >> k;
    set<int>s;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    if (s.size() >= k) {
        cout << "YES\n";
        auto it = s.begin();
        for (int i = 0; i < k; i++) {
            int key = *it;
            cout << linearSearch(arr, n, key) + 1 << " ";
            it++;
        }
        cout << "\n";
    }
    else cout << "NO\n";

    return 0;
}