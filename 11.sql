create database p3;
use p3;
create table tb1(rollno int,name varchar(20),marks int);
insert into tb1 values(503,'suma',40);
insert into tb1 values(504,'raju',70);
insert into tb1 values(505,'ramu',45);
insert into tb1 values(501,'abhi',50);
insert into tb1 values(502,'ravi',60);
create table tb2(rollno int,fee int);
insert into tb2 values(501,150000),(502,5000),(503 ,10000),(504 ,25000);
select * from tb1;
select * from tb2;
select *from tb1 join tb2 on tb1.rollno=tb2.rollno;
select * from tb1 left outer join tb2 on tb1.rollno=tb2.rollno; 
select * from tb1 right outer join tb2 on tb1.rollno=tb2.rollno;
select *from tb1 natural join tb2;
select * from tb1;  
select t1.rollno, t2.name from tb1 t1,tb1 t2 where t1.rollno=t2.rollno;
select * from tb1,tb2 where tb1.rollno=tb2.rollno;
create table sailors(sid int,sname varchar(20),age float,rating int);
create table boats(bid int,bname varchar(20),bcolor varchar(10));
create table reserves(sid int,bid int,rdate date);
insert into sailors values(22,'dustin',45,7),(29,'brutus',33,1),(31,'lubber',55.5,8),(32,'andy',25.5,8),(64,'horatio',35,7),(71,'zobra',16,10),(74,'ravi',40,9),(85,'art',26.5,3),(95,'bob',63.5,3),(58,'rusty',35,10);
select *from sailors;
insert into boats values(101,'interlake','blue'),(102,'interlake','red'),(104,'marine' ,'red'),(103,'clipper','green');
insert into reserves values(22,101,'10-oct-1998'),(22,102,'10-oct-1998'),(22,103,'08-oct-1998'),(22,104,'07-oct-1998'),(31,102,'10-nov-1998'),(31,103,'06-nov-1998'),(31,104,'12-nov-1998'),(64,101,'05-sep-1998'),(64,102,'08-sep-1998'),(74,103,'08-sep-1998');
select s.sname from sailors s, reserves r,boats b where s.sid=r.sid and b.bid=r.bid and 
b.bcolor='Red'  
UNION  
select s1.sname from sailors s1,reserves r1,boats b1 where s1.sid=r1.sid and r1.bid=b1.bid and 
b1.bcolor='Green';
select s.sname from sailors s, reserves r,boats b where s.sid=r.sid and b.bid=r.bid and 
b.bcolor='Red' 
UNION all 
select s1.sname from sailors s1,reserves r1,boats b1 where s1.sid=r1.sid and r1.bid=b1.bid and  
b1.bcolor='Green'; 
select s.sname from sailors s, reserves r,boats b where s.sid=r.sid and b.bid=r.bid and 
b.bcolor='Red'  
INTERSECT 
select s1.sname from sailors s1,reserves r1,boats b1 where s1.sid=r1.sid and r1.bid=b1.bid and 
b1.bcolor='Green';
select s.sname from sailors s, reserves r,boats b where s.sid=r.sid and b.bid=r.bid and 
b.bcolor='Red'  
MINUS
select s1.sname from sailors s1,reserves r1,boats b1 where s1.sid=r1.sid and r1.bid=b1.bid and 
b1.bcolor='Green'; 
select s.sname from sailors s where s.sid IN( select r.sid from reserves r where r.bid=103); 
select s.sname from sailors s where s.sid NOT IN( select r.sid from reserves r where r.bid=103);
select s.sid from sailors s where s.rating>=all(select s1.rating from sailors s1); 
select s.sid from sailors s where s.rating>ANY(select  
s1.rating from sailors s1 where s1.sname='Andy');
select s.sname from sailors s where EXISTS(select * from reserves r where s.sid=r.sid and 
r.bid=103); 
select s.sname from sailors s where NOT EXISTS(select * from reserves r where s.sid=r.sid and 
r.bid=103); 
create table source_table(rollno int,name varchar(20),marks int);
insert into source_table values(501,'jyoti',90);
insert into source_table values(502,'sai',95);
insert into source_table values(504,'yamuna',70);
insert into source_table values(505,'padma',60);
insert into source_table values(503,'ravi',80);
create view my_view as select rollno, name from source_table;
select * from tab;
insert into my_view values(506,'prathisha');  
select * from my_view;
select * from source_table; 
set sql_safe_updates=0;
delete from my_view where rollno=506;
select * from my_view; 
select * from source_table; 
create or replace view my_view as select * from source_table;
create view myview1 as select * from source_table with read only;
insert into myview1 values(503,'prathisha',80); 
create view myview2 as select * from source_table where marks<101 with check option;
 insert into myview2 values(504,'siri',101);