#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Friend {
    string name;
    int salary;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<Friend> friends(N);
    for (int i = 0; i < N; i++) {
        cin >> friends[i].name >> friends[i].salary;
    }

    // Custom sort: decreasing by salary, if equal then increasing by name.
    sort(friends.begin(), friends.end(), [](const Friend& a, const Friend& b) {
        if (a.salary == b.salary)
            return a.name < b.name;
        return a.salary > b.salary;
        });

    // Output the sorted list
    for (const auto& f : friends) {
        cout << f.name << " " << f.salary << "\n";
    }

    return 0;
}
