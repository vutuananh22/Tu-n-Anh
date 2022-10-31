create table sanphamhang(
ma int primary key,
ten varchar(20) not null,
diachi ntext not null,
dienthoai int not null 
);
create table sanpham(
ten nvarchar(100) primary key,
mota nvarchar (100),
donvi nvarchar(100) not null,
gia decimal (12,4) not null check ( gia >= 0 ) default 0,
soluong int not null check (soluong>0)34
);
create table sphangSP(
mahang int not null foreign key references sanphamhang(ma),
tensp nvarchar(100) not null foreign key references sanpham(ten)
);