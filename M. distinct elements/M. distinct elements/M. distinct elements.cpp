#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    // Read the array
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Use a set to extract distinct elements
    set<int> s(a.begin(), a.end());
    // Convert set to vector (elements are already sorted)
    vector<int> distinct(s.begin(), s.end());

    int d = distinct.size();

    // Process queries
    while (q--) {
        int x;
        cin >> x;
        // count distinct elements less than x
        int lessCount = lower_bound(distinct.begin(), distinct.end(), x) - distinct.begin();
        // count distinct elements greater than x
        int greaterCount = d - (upper_bound(distinct.begin(), distinct.end(), x) - distinct.begin());
        cout << lessCount << " " << greaterCount << "\n";
    }

    return 0;
}
