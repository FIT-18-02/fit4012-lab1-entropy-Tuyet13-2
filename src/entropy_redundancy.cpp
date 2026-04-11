#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <vector>

// Hàm tính entropy: H(X) = -sum(pi * log2(pi))
double calculate_entropy(const std::string& s) {
    if (s.empty()) return 0.0;
    std::map<char, int> freq;
    for (char c : s) freq[c]++;
    
    double entropy = 0.0;
    double n = static_cast<double>(s.length());
    for (auto const& [key, val] : freq) {
        double p = val / n;
        entropy -= p * log2(p);
    }
    return entropy;
}

// Q2: Hàm tính độ dư thừa thông tin: R = log2(N) - H(X)
// Với N=256 (bảng mã ASCII), log2(256) = 8
double calculate_redundancy(const std::string& s) {
    double actual_entropy = calculate_entropy(s);
    double max_entropy = 8.0; 
    return max_entropy - actual_entropy;
}

int main() {
    std::vector<std::string> test_strings = {"aaaa", "abcd", "abcabcabc"};
    for (const std::string& s : test_strings) {
        std::cout << "String: " << s 
                  << " | Entropy: " << calculate_entropy(s) 
                  << " | Redundancy: " << calculate_redundancy(s) << std::endl;
    }
    return 0;
}
//
