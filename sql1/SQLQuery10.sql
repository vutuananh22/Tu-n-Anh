create table KhachHang(
ten nvarchar(100) not null,
diachi ntext not null, 
chungminhthu varchar(15) primary key
);
create table ThueBao(
sothuebao varchar(20) not null,
loaithuebao nvarchar(50) not null,
ngaydangky date not null check (ngaydangky<=getdate()) default getdate();	