#include <iostream>
#include <string>
#include <map>
#include <cmath>

double calculate_entropy(const std::string& s) {
    if (s.empty()) return 0.0;
    std::map<char, int> freq;
    for (char c : s) freq[c]++;
    double entropy = 0.0;
    double n = static_cast<double>(s.length());
    for (auto const& [key, val] : freq) {
        double p = static_cast<double>(val) / n;
        entropy -= p * std::log2(p);
    }
    return entropy;
}

double calculate_redundancy(const std::string& s) {
    // Đổi giá trị mặc định nếu cần, tránh return -1.0
    return 8.0 - calculate_entropy(s);
}

int main() {
    return 0;
}
