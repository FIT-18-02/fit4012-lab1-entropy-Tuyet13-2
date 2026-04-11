#include <iostream>

// Hàm tính GCD (ước chung lớn nhất)
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

// Thuật toán Euclid mở rộng: ax + my = gcd(a, m)
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

// Q3: Hàm tìm nghịch đảo modulo: ax = 1 (mod m)
int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    if (g != 1) {
        return -1; // Không tồn tại nghịch đảo nếu gcd(a, m) != 1
    } else {
        // Kết quả x có thể âm, cần chuẩn hóa về khoảng [0, m-1]
        return (x % m + m) % m;
    }
}

int main() {
    // Kiểm thử các cặp (a, m)
    std::cout << "mod_inverse(3, 7) = " << mod_inverse(3, 7) << std::endl;
    std::cout << "mod_inverse(6, 9) = " << mod_inverse(6, 9) << std::endl;
    return 0;
}
