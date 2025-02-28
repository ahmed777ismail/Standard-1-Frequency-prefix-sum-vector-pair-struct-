#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, Q;
    cin >> N >> Q;

    vector<long long> A(N + 1, 0); // Prefix sum array with long long

    // Read array and calculate prefix sum
    for (int i = 1; i <= N; i++) {
        long long num;
        cin >> num;
        A[i] = A[i - 1] + num; // Prefix Sum
    }

    // Queries
    while (Q--) {
        long long L, R;
        cin >> L >> R;
        cout << (A[R] - A[L - 1]) << endl; // Answer the range sum
    }

    return 0;
}
