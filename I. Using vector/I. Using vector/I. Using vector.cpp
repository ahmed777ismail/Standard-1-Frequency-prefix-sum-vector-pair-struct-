#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    while (q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "pop_back") {
            A.pop_back();
        }
        else if (cmd == "front") {
            cout << A.front() << "\n";
        }
        else if (cmd == "back") {
            cout << A.back() << "\n";
        }
        else if (cmd == "sort") {
            int l, r;
            cin >> l >> r;
            // Adjust for 0-indexing
            sort(A.begin() + l - 1, A.begin() + r);
        }
        else if (cmd == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(A.begin() + l - 1, A.begin() + r);
        }
        else if (cmd == "print") {
            int pos;
            cin >> pos;
            cout << A[pos - 1] << "\n";
        }
        else if (cmd == "push_back") {
            int x;
            cin >> x;
            A.push_back(x);
        }
    }
    return 0;
}
