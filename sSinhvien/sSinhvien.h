#ifndef __SSINHVIEN_H__
#define __SSINHVIEN_H__



/* Khai báo một kiểu dữ liệu miêu tả các thông tin của một SinhVien:
	Các thuộc tính cần là:
		mã số sinh viên: kiểu tùy chọn cho thích hợp để lưu mssv bách khoa
		tên sinh viên: kiểu tùy chọn cho thích hợp
		điểm trung bình: số thực */
typedef struct {
	/* your code here */
	char mssv[30];
	char hoten[50];
	float cpa;
} sSinhvien;

/* Khai báo một kiểu dữ liệu miêu tả các thông tin của một SinhVien:
	Các thuộc tính cần là:
		điểm trung bình: số thực,
		mã số sinh viên: kiểu tùy chọn cho thích hợp để lưu mssv bách khoa
		tên sinh viên: kiểu tùy chọn cho thích hợp
		4 môn học, mỗi môn có thuộc tính: số lần học, điểm mỗi lần học */
typedef struct {
	/* your code here */
	float cpa;
	char mssv[30];
	char hoten[50];
	struct {
	    int soLanHoc;
	    float diem;
	} monhoc[4];
} sSinhvien2;

/* Khai báo các prototype ở đây */

// Khai báo Hàm nhập dữ liệu cho mảng lưu dữ liệu cho sinh viên thuộc kiểu sSinhvien
/* your code here */
void nhapsSinhvien();
// Khai báo Hàm xuất dữ liệu ra màn hình cho một mảng lưu dữ liệu sinh viên thuộc kiểu sSinhvien
/* your code here */
void xuatsSinhvien();
// Khai báo Hàm sắp xếp dữ liệu theo thứ tự giảm dần theo điểm trung bình cho mảng dữ liệu sinh viên thuộc kiểu sSinhvien
/* your code here */
void sapXepsSinhvien();

#endif
