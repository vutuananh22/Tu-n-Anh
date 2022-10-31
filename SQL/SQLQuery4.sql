select * from KhachHang;
select ten from KhachHang;
select ten from DanhSachHang;
select ma, ngaydat from DonHang;

select ten from KhachHang order by ten asc;
select gia from DanhSachHang order by gia desc;
select ten as sanphamdamua from DanhSachHang;

select count(ten) from KhachHang;
select count(ten) from DanhSachHang;
select sum(tongtien), ma from DonHang group by ma;
