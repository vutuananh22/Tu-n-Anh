-- 4 
select*from sanphamhang where ten like 'Asus%';
select*from sanpham where ten like '%5%';
-- 5 
select*from sanphamhang order by ten desc;
select*from sanpham order by gia desc;
select ma,ten,diachi,dienthoai from sanphamhang;
select*from sanpham where soluong <11 ;
select ten as sanphamcuahangASUS from sanpham;
-- 6
select count(*), mahang from sphangSP group by mahang;
select ten as mathang from sanpham;