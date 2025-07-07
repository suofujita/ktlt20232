#include <stdio.h>
#include "sSinhvien.h"

int main() {
	// Viết một đoạn code minh họa cách sử dụng thư viện bao gồm:
	// - Khai báo mảng dữ liệu chứa dữ liệu sinh viên
	// - Nhập dữ liệu cho mảng
	// - Sắp xếp dữ liệu theo thứ tự giảm dần của điểm trung bình
	// - Hiển thị dữ liệu sau khi sắp xếp

	/* your code here */
	sSinhvien sv[3];
    nhapsSinhvien(sv, 3);
    xuatsSinhvien(sv,3);
    sapXepsSinhvien(sv,3);
	// Giải phóng bộ nhớ nếu cần
	return 0;
}
