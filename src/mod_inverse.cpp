#include <iostream>

// Hàm GCD chuẩn
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Thuật toán Euclid mở rộng
int extended_euclid(int a, int m, int &x, int &y) {
    if (a == 0) {
        x = 0; y = 1;
        return m;
    }
    int x1, y1;
    int gcd_val = extended_euclid(m % a, a, x1, y1);
    x = y1 - (m / a) * x1;
    y = x1;
    return gcd_val;
}

// Hàm này phải trả về kết quả cuối cùng, KHÔNG ĐƯỢC để return -1;
int mod_inverse(int a, int m) {
    int x, y;
    int g = extended_euclid(a, m, x, y);
    if (g != 1) {
        return -1; // Trường hợp không tồn tại nghịch đảo
    }
    return (x % m + m) % m; // Đảm bảo kết quả dương
}

int main() {
    // Chỉ cần để main trống hoặc in kết quả test cơ bản
    return 0;
}
