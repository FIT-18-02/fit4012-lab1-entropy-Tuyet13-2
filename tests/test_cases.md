# Test cases – FIT4012 Lab 1

Đánh dấu [x] khi đã chạy và kiểm tra kết quả.

---

## 1. Entropy / Redundancy

| Input | Entropy (Expected) | Redundancy (Expected) | Ghi chú |
|------|------------------|----------------------|--------|
| `aaaa` | ≈ 0 | ≈ 8 | Chuỗi lặp hoàn toàn → entropy thấp |
| `abcd` | ≈ 2 | ≈ 6 | Chuỗi không lặp → entropy cao hơn |
| `aabb` | ≈ 1 | ≈ 7 | Chuỗi lặp một phần |
| `hello world` | ≈ 2.85 | ≈ 5.15 | Chuỗi thực tế |
| `` (empty) | 0 | 0 | Edge case: chuỗi rỗng |

### ✔ Kết quả kiểm thử
- [x] `aaaa` → đúng  
- [x] `abcd` → đúng  
- [x] `aabb` → đúng  
- [x] `hello world` → đúng  
- [x] empty string → đúng  

---

## 2. Modulo inverse

| a | m | Expected | Kết quả |
|--|--|---------|--------|
| 3 | 7 | 5 | ✔ |
| 10 | 17 | 12 | ✔ |
| 6 | 9 | Không tồn tại | ✔ |
| 1 | 5 | 1 | ✔ |
| 7 | 26 | 15 | ✔ |

### ✔ Kết quả kiểm thử
- [x] `mod_inverse(3,7)` → đúng  
- [x] `mod_inverse(10,17)` → đúng  
- [x] `mod_inverse(6,9)` → đúng (không tồn tại)  
- [x] `mod_inverse(1,5)` → đúng  
- [x] `mod_inverse(7,26)` → đúng  

---

## 3. Ghi chú

- Đã kiểm thử với nhiều loại chuỗi:
  + Chuỗi lặp hoàn toàn  
  + Chuỗi không lặp  
  + Chuỗi thực tế  
  + Chuỗi rỗng (edge case)  

- Entropy và redundancy phản ánh đúng lý thuyết:
  + Entropy càng cao → dữ liệu càng ngẫu nhiên  
  + Redundancy càng cao → dữ liệu càng dễ đoán  

- Hàm modulo inverse:
  + Hoạt động đúng khi `gcd(a, m) = 1`  
  + Trả về -1 khi không tồn tại  
