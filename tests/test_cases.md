# Test Cases – FIT4012 Lab 1

## 1. Entropy / Redundancy
- [x] Input: `aaaa` -> entropy thấp, redundancy cao
- [x] Input: `abcd` -> entropy cao hơn `aaaa`
- [x] Input: `hello world` -> entropy và redundancy được tính hợp lệ

## 2. Modulo inverse
- [x] a=3, m=7 -> nghịch đảo modulo là 5
- [x] a=10, m=17 -> nghịch đảo modulo là 12
- [x] a=6, m=9 -> không tồn tại nghịch đảo modulo

## 3. Ghi chú
- [x] Kiểm tra điều kiện gcd(a, m) = 1 trước khi tính.
- [x] Kiểm tra trường hợp kết quả nghịch đảo âm (cần chuyển về dương).
