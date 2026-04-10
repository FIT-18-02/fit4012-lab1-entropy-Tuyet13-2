#include <cmath>
#include <iostream>
#include <map>
#include <string>
using namespace std;

// entropy
double calculate_entropy(const string &text) {
    if (text.empty()) return 0.0;

    map<char, int> freq;
    for (char c : text) freq[c]++;

    double entropy = 0.0;
    for (auto &p : freq) {
        double prob = (double)p.second / text.size();
        entropy -= prob * log2(prob);
    }
    return entropy;
}

// redundancy
double calculate_redundancy(const string &text) {
    if (text.empty()) return 0.0;

    double entropy = calculate_entropy(text);
    double max_entropy = log2(256);

    return max_entropy - entropy;
}

int main() {
    cout << calculate_entropy("aaaa") << endl;
    cout << calculate_entropy("abcd") << endl;
    cout << calculate_entropy("hello world") << endl;

    return 0;
}
