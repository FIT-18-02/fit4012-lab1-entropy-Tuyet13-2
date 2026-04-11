# Report 1 Page – FIT4012 Lab 1

## 1. Mục tiêu
Bài lab nhằm giúp sinh viên hiểu và áp dụng các khái niệm cơ bản trong an toàn thông tin, bao gồm entropy, độ dư thừa thông tin và nghịch đảo modulo. Đồng thời, sinh viên thực hành cài đặt các thuật toán liên quan bằng C++ và kiểm thử chương trình.

---

## 2. Cách làm
- Đọc hiểu chương trình mẫu tính entropy của chuỗi ký tự.
- Xây dựng hàm `calculate_redundancy()` dựa trên công thức lý thuyết.
- Cài đặt hàm `mod_inverse()` sử dụng thuật toán Euclid mở rộng.
- Thực hiện kiểm thử với nhiều test case khác nhau và ghi lại kết quả.

---

## 3. Kết quả chính

### 3.1 Entropy và redundancy

| Input | Entropy | Redundancy | Nhận xét |
|---|---:|---:|---|
| aaaa | ≈ 0 | ≈ 8 | Chuỗi lặp hoàn toàn → entropy thấp |
| abcd | ≈ 2 | ≈ 6 | Chuỗi không lặp → entropy cao hơn |
| hello world | ≈ 2.85 | ≈ 5.15 | Chuỗi thực tế, entropy trung bình |

---

### 3.2 Modulo inverse

| a | m | Kết quả mong đợi | Kết quả chương trình |
|---:|---:|---|---|
| 3 | 7 | 5 | 5 |
| 10 | 17 | 12 | 12 |
| 6 | 9 | Không tồn tại | Không tồn tại |

---

## 4. Kết luận
Qua bài lab, em hiểu rõ hơn về entropy như một thước đo mức độ ngẫu nhiên của dữ liệu và độ dư thừa thông tin phản ánh khả năng dự đoán của dữ liệu. Ngoài ra, em đã nắm được cách tìm nghịch đảo modulo bằng thuật toán Euclid mở rộng và điều kiện tồn tại của nó. Khó khăn lớn nhất là hiểu cách hoạt động của thuật toán Euclid mở rộng, nhưng thông qua việc thực hành và kiểm thử, em đã hiểu rõ hơn cách thuật toán tìm ra hệ số x, y. Bài lab giúp em củng cố nền tảng toán học quan trọng trong mật mã học.
--
