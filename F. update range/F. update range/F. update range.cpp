#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1, 0);  // Using 1-based indexing
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> diff(n + 2, 0); // Difference array

    // Processing queries
    for (int i = 0; i < q; i++) {
        int L, R, val;
        cin >> L >> R >> val;
        diff[L] += val;   // Start increment at L
        diff[R + 1] -= val; // End increment at R + 1
    }

    // Applying difference array to get final array
    int curr_addition = 0;
    for (int i = 1; i <= n; i++) {
        curr_addition += diff[i];
        arr[i] += curr_addition;
    }

    // Print the final updated array
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
