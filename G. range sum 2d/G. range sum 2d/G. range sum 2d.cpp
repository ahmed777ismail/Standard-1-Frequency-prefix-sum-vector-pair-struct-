#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    // We'll use 1-based indexing for convenience.
    // Create a 2D vector with (n+1) x (m+1) size initialized to 0
    vector<vector<long long>> prefix(n + 1, vector<long long>(m + 1, 0));

    // Read the input array directly into prefix[ i ][ j ]
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            long long val;
            cin >> val;
            prefix[i][j] = val;
        }
    }

    // Build the 2D prefix sums
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] += prefix[i - 1][j]
                + prefix[i][j - 1]
                    - prefix[i - 1][j - 1];
        }
    }

    // Process each query
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Calculate the sum using the inclusion-exclusion principle
        long long result = prefix[x2][y2]
            - prefix[x1 - 1][y2]
                - prefix[x2][y1 - 1]
                    + prefix[x1 - 1][y1 - 1];

                // Output the result for this query
                cout << result << "\n";
    }

    return 0;
}
