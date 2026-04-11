# FIT4012 – Lab 1: Entropy, Redundancy và Modulo Inverse

## Mục tiêu bài lab
Sau khi hoàn thành bài này, sinh viên có thể:
- Đọc hiểu và chạy được chương trình tính entropy của một chuỗi ký tự.
- Tính được độ dư thừa thông tin (redundancy) từ entropy.
- Cài đặt thuật toán tìm nghịch đảo modulo bằng Euclid mở rộng.
- Tổ chức và kiểm thử chương trình bằng GitHub.

---

## Nội dung thực hiện

### Q1: Entropy
- Xây dựng hàm `calculate_entropy()`
- Tính xác suất xuất hiện của từng ký tự
- Áp dụng công thức:
  
  H(X) = -∑ pᵢ log₂(pᵢ)

---

### Q2: Redundancy
- Xây dựng hàm `calculate_redundancy()`
- Công thức:

  R = log₂(N) - H(X)

- Với bảng mã ASCII: N = 256 → max entropy = 8

---

### Q3: Modulo Inverse
- Sử dụng thuật toán Euclid mở rộng
- Tìm x sao cho:

  ax ≡ 1 (mod m)

- Điều kiện tồn tại:
  
  gcd(a, m) = 1

---

## Cấu trúc repo
--
