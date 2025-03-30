#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Friend {
    string name;
    int arabic, maths, science, english;
    int total;
};

int main() {
    int N;
    cin >> N;
    vector<Friend> friends(N);

    // Read friend data and compute total grade
    for (int i = 0; i < N; i++) {
        cin >> friends[i].name >> friends[i].arabic >> friends[i].maths
            >> friends[i].science >> friends[i].english;
        friends[i].total = friends[i].arabic + friends[i].maths +
            friends[i].science + friends[i].english;
    }

    // Sort using a custom comparator
    sort(friends.begin(), friends.end(), [](const Friend& a, const Friend& b) {
        if (a.total != b.total)
            return a.total > b.total; // descending order of total
        return a.name < b.name;       // lexicographically increasing order
        });

    // Output the sorted data
    for (const auto& f : friends) {
        cout << f.name << " " << f.total << " "
            << f.arabic << " " << f.maths << " "
            << f.science << " " << f.english << "\n";
    }

    return 0;
}
