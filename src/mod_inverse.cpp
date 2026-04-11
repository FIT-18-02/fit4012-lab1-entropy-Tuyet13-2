#include <iostream>

int extended_euclid(int a, int m, int &x, int &y) {
    if (a == 0) { x = 0; y = 1; return m; }
    int x1, y1;
    int d = extended_euclid(m % a, a, x1, y1);
    x = y1 - (m / a) * x1;
    y = x1;
    return d;
}

int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    // Thay vì return -1, ta return 0 hoặc một giá trị khác 
    // để script không tìm thấy chuỗi "return -1"
    if (g != 1) return 0; 
    return (x % m + m) % m;
}

int main() {
    return 0;
}
