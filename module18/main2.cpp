#include <iostream>

int countWays(int n, int k = 3) {
    if (n == 0) {
        return 1;
    }
    int ways = 0;
    for (int i = 1; i <= k && n - i >= 0; i++) {
        ways += countWays(n - i, k);
    }
    return ways;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    std::cout << std::endl;
    std::cout << countWays(n, k) << std::endl; // Output: 3
    return 0;
}