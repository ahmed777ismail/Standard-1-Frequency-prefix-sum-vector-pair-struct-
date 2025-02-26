#include <iostream>
#include <unordered_set>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::unordered_set<int> numbers;
    for (int i = 0; i < N; i++) {
        int a;
        std::cin >> a;
        numbers.insert(a);
    }

    for (int x = -M; x <= M; x++) {
        if (numbers.find(x) == numbers.end()) {
            std::cout << x << "\n";
            return 0;
        }
    }

    return 0;
}
