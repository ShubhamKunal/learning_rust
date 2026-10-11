#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    unsigned long long sum = 0;
    for (unsigned long long i = 1; i <= 1000000000ULL; i++) {
        sum += i;
    }

    auto end = std::chrono::high_resolution_clock::now();

    std::cout << "Sum = " << sum << "\n";
    std::cout << "Time = "
              << std::chrono::duration<double>(end - start).count()
              << " seconds\n";
}
