
#include <bits/stdc++.h>

using namespace std;

struct Nguoi {
    string cccd;
    string ten;
    string ngaySinh;
    string sdt;
    string diaChi;
};
struct VatLieu {
    string tenVatLieu;
    float gia;
};

struct DanhSachVatLieu {
    VatLieu ds[100];
    string NgayNhap;
};

struct TuNhan {
    Nguoi tuNhan;
    string congViec;
    string ngayXacNhanKiKet;
    int maHangMuc;
};

struct HangMuc{
    string tenHangMuc;
    string maHangMuc;
    int maDonVi;
};
 struct DonViThiCong {
     int maDonVi;
     Nguoi chuDauTu;
     int soLuongNhanCong;
     DanhSachVatLieu ds;
     string thoiGianTrienKhai;
     string diaDiem;
     string tienDoHoanThanh;
     float chiPhiTamTinh;
};

 // Viẹc liên kết như thế này giúp xử lý tốt hơn các chức năng
 // Ví dụ Tim Thong Tin Khach Hang của hang muc
 // Buoc 1 : Tìm từ mảng hạng mục theo tên => Được hạng mục cần tifm => lấy ra mã hang muc
 // Buoc 2 : Tu ma hang muc ben tren lap 1 vong lap tim ra khach hang chu ma hang muc do
 // đây là hướng giải quyết tốt nhất khi mình để type Khách Hàng được phân ra từng loại