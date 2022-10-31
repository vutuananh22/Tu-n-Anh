insert into sanphamhang(ma,ten,diachi,dienthoai)
values(123,N'Asus',N'USA',983232);

select * from sanphamhang;

insert into sanpham(ten,mota,donvi,gia,soluong)
values(N'Máy Tính T450', N'Máy nhập cũ',N'Chiếc',1000,10),
(N'Điện Thoại Nokia5670', N'Điện thoại đang hot',N'Chiếc',200,200),
(N'Máy In Samsung 450', N'Máy in đang loại bình', N'Chiếc',100,10);

select *from sanpham;

insert into sphangSP(mahang,tenSP)
values(123,N'Máy Tính T450'),
(123,N'Điện Thoại Nokia5670'),
(123,N'Máy In Samsung 450');

select * from sphangSP;