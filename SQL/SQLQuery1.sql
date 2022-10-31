insert into KhachHang(ten,diachi,dienthoai)
values(N'Nguyễn Văn An',N'111 Nguyễn Trãi, Thanh Xuân, Hà Nội',N'0987654321');

select * from KhachHang;

insert into DanhSachHang(ten,donvi,mota,gia)
values(N'Máy Tính T450', N'Chiếc',N'Máy Nhập Mới ', 1000);
insert into DanhSachHang(ten,donvi,mota,gia)
values(N'Điện Thoại Nokia5670',N'Chiếc',N'Điện Thoại đang hot',200);
insert into DanhSachHang(ten,donvi,mota,gia)
values(N'Máy In Samsung450', N' Chiếc',N'Máy in đang ế',100); 

select * from DanhSachHang;

insert into DonHang(ma,ngaydat,tongtien,dienthoai)
values (N'123','2022-10-26',1500,'0987654321');

select *from DonHang;

insert into DonHangDanhSachHang(maDH,spid,soluong,thanhtien)
values ('123',1,1,1000),('123',2,2,400),('123',3,1,100);

select*from DonHangDanhSachHang;

update SanPham set gia = 150 where id = 3;
update SanPham set gia = gia + 50, mota=N'máy xịn mơi nhập'
where id =3;
update SanPham set gia = gia + 50 where gia < 1000;
--
delete from SanPham where id = 3