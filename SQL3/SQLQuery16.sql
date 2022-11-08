create table danhbaa(
    ten varchar(100) not null,
    diachi varchar(255) not null,
    ngaysinh date not  null,
    id int primary key
);
create table nguoidung(
    dienthoai varchar(15) not null,
    idND int foreign key references danhbaa(id)
);

drop table danhba;

insert into danhbaa(ten,diachi,ngaysinh,id)
values ('Nguyen Van An','111 Nguyen Trai, Thanh Xuan, Ha Noi','11/18/87',1);

select * from danhbaa;

insert into nguoidung(dienthoai,idND)
values (987654321,1),(09873452,1),(09832323,1),(09434343,1);

select * from nguoidung;

--câu 4:
--a:
select ten from danhbaa;
--b:
select dienthoai from nguoidung;

--câu 5:
--a:
select * from danhbaa order by ten asc;
--b:
select * from nguoidung where idND in 
(select id from danhbaa where ten like 'Nguyen Van An');
--c:
select * from danhbaa where ngaysinh like '12/12/09';

--câu 6:
--a:
select count(dienthoai) as soluongsodienthoainguoidung from nguoidung;
--b:
select count(*) as danhbasinhthang12 from nguoidung where idND in 
(select id from danhbaa where ngaysinh like '12');
--c:
select * from danhbaa a
inner join nguoidung b on a.id = b.idND
--d:
select * from danhbaa a
inner join nguoidung b on a.id = b.idND
where dienthoai like 123456789;