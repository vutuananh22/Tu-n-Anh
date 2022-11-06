insert into ThongTinKhachHang(ten,cmtnd,diachi)
values (N'Nguyễn Nguyệt NGA',123456789,N'Hà Nội');

select * from ThongTinKhachHang;

insert into ThueBaoKhachHang(so,loai,ngaydangky)
values (123456789,N'Trả trước','02/12/12');

select * from ThueBaoKhachHang;

insert into ThongTincuaThueBao(cmtKH,soTB)
values (123456789,123456789);

select * from ThongTincuaThueBao;
