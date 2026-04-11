#include <iostream>

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int extended_euclid(int a, int m, int &x, int &y) {
    if (a == 0) {
        x = 0; y = 1;
        return m;
    }
    int x1, y1;
    int d = extended_euclid(m % a, a, x1, y1);
    x = y1 - (m / a) * x1;
    y = x1;
    return d;
}

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    if (g != 1) return -1;
    return (x % m + m) % m;
}

int main() {
    return 0;
}
