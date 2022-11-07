CREATE TABLE NguoiChiuTrachNghiem(
    ma int PRIMARY KEY,
    nguoichiutrachnghiem NVARCHAR(255) not null
);
create table SanPham(
    masosanpham VARCHAR(100) PRIMARY KEY,
    ngaysanxuat date not null,
    maNCTN int not null FOREIGN KEY REFERENCES NguoiChiuTrachNghiem(ma)
);
create table LoaiSanPham(
    ma VARCHAR(100) PRIMARY KEY,
    ten NVARCHAR(255) not null,
    maTN int not null FOREIGN KEY REFERENCES NguoiChiuTrachNghiem(ma)
);

insert into NguoiChiuTrachNghiem(ma,nguoichiutrachnghiem)
VALUES (987688,N'Nguyễn Văn An');

insert into SanPham(masosanpham,ngaysanxuat,maNCTN)
VALUES ('Z37 111111','12/12/09',987688);

insert into LoaiSanPham(ma,ten,maTN)
VALUES ('Z37E','Máy tính sách tay Z37',987688)

select * from NguoiChiuTrachNghiem;
select * from SanPham;
select * from LoaiSanPham;


--câu 4:
--a:
select ma from LoaiSanPham;
--b:
select ten from LoaiSanPham;
--c:
select nguoichiutrachnghiem from NguoiChiuTrachNghiem;

--câu 5:
--a:
select ma from LoaiSanPham order by ma ASC; 
--b:
select nguoichiutrachnghiem from NguoiChiuTrachNghiem order by nguoichiutrachnghiem ASC; 
--c:
select ten from LoaiSanPham WHERE ma like 'Z37E';
--d:
select * from LoaiSanPham where maTN in
(select ma from NguoiChiuTrachNghiem where nguoichiutrachnghiem like N'Nguyễn Văn An');


--câu 6:
--a:
select count(ten) as sosanpham from LoaiSanPham;
--b:
select avg(maTN) as trungbinhloaisanpham from LoaiSanPham group by maTN;
--c:
select * from SanPham a
inner join LoaiSanPham b on a.maNCTN = b.maTN;
--d:
select * from SanPham a
inner join LoaiSanPham b on a.maNCTN = b.maTN
inner join NguoiChiuTrachNghiem c on a.maNCTN = c.ma; 