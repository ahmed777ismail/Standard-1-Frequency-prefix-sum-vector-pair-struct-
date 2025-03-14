#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read input string
    string s;
    cin >> s;
    int n = s.size();

    // Build prefix sum array for counting 'a'
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'a' ? 1 : 0);
    }

    // Number of queries
    int q;
    cin >> q;
    while (q--) {
        int L, R;
        cin >> L >> R;
        // Calculate number of 'a' in [L..R]
        int countA = prefix[R] - prefix[L - 1];
        cout << countA << "\n";
    }

    return 0;
}
