#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    unordered_map<int, int> freq;

    for (int i = 0; i < q; ++i) {
        int z, x;
        cin >> z >> x;
        if (z == 1) {
            freq[x]++;
        }
        else if (z == 2) {
            cout << freq[x] << endl;
        }
    }

    return 0;
}