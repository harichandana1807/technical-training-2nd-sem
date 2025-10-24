create database normalforms;
use normalforms;
create table university(std_id int,std_name varchar(20),major varchar(20),cid varchar(20),c_name varchar(20),credits int,enrollmentdate date,ins_id int,ins_name varchar(20),phone varchar(10));
desc university;
insert into university values('1','alice','CSE','C101','Intro to CS',3,'2025-09-01','10','Dr.Adams','555-0100');
drop table university;
insert into university values(1,'alice','cse','C101','intro to cs',3,'2025-09-01',11,'dr.baker','555-0111'),(2,'bob','maths','C101','intro to cs',3,'2025-09-03',10,'dr.adams','555-0100'),(2,'bob','maths','C101','intro to cs',3,'2025-09-03',11,'dr.baker','555-0111'),(1,'alice','cse','C102','calculas I',4,'2025-09-02',11,'dr.baker','555-0111'),(3,'carol lee','phy','C103','physics I',3,'2025-09-04',12,'dr.clark','555-0122');
select*from university;
create table student as select distinct std_id,std_name,major from university;
create table course as select distinct cid,c_name,major from university;
create table instructor as select distinct ins_id,ins_name,phone from university;
create table enrollments as select distinct std_id,cid,enrollmentdate from university; 
create table courseins as select distinct std_id,std_name,major,cid,c_name,credits,enrollmentdate,ins_id,ins_name,phone from university;
select * from courseins;
select enrollment.studentid,s.studentName,s.major,
	   enrollment.courseid,course