CREATE TABLE Branch(
branchNo VARCHAR(20),
street VARCHAR(25),
city VARCHAR(20),
postcode VARCHAR(20)
);


INSERT INTO Branch(branchNo,street,city,postcode)
VALUES ("B005","22 Deer Rd","London","SW1 4EH"),
("B007","16 Argyll ST","Aberdeen","AB2 3SU"),
("B003","163 Main St","Glasgow","G11 9QX"),
("B004","32 Manse Rd","Bristol","BS99 1NZ"),
("B002","56 Clover Dr","London","NW10 6EU");


CREATE TABLE Staff(
staffNo VARCHAR(4),
fName VARCHAR(5),
lName VARCHAR(5),
position1 VARCHAR(10),
sex VARCHAR(1),
DOB DATE,
salary INT,
branchNo VARCHAR(5)
);


INSERT INTO Staff(staffNo,fName,lName,position1,sex,DOB,salary,branchNo)
VALUES ("SL21","John","White","Manager","M","1945-10-1",30000,"B005"),
("SG37","Ann","Beech","Assistant","F","1960-11-10",12000,"B003"),
("SG14","David","Ford","Superviser","M","1958-3-24",18000,"B003"),
("SA9","Mary","Howe","Assistant","F","1970-2-19",9000,"B007"),
("SG5","Susan","Brand","Manager","F","1940-6-3",24000,"B003"),
("SL41","Julie","Lee","Assistant","F","1965-1-13",9000,"B005");


CREATE TABLE PropertyForRent(


propertyNo VARCHAR(4),
street VARCHAR(25),
city VARCHAR(20),
postcode VARCHAR(20),
type1 VARCHAR(20),
rooms INT,
rent INT,
ownerNo VARCHAR(4),
staffNo VARCHAR(4),
branchNo VARCHAR(20)
);

INSERT INTO PropertyForRent(propertyNo,street,city,postcode,type1,rooms,rent,ownerNo,staffNo,branchNo)
VALUES ("PA14","16 Holhead","Aberdeen","AB7 5SU","House",6,650,"CO46","SA9","B007"),
("PL94","6 Argyll St","Londond","NW2","Flat",4,400,"CO87","SL41","B005"),
("PG4","6 Lawrence St","Glasgow","G11 9QX","Flat",3,350,"CO40","","B003"),
("PG36","2 Manor Rd","Glasgow","G32 4QX"," Flat",3,375,"CO93","SG37","B003"),
("PG21","18 Dale Rd","Glasgow","G12","House",5,600,"CO87","SG37","B003"),
("PG16","5 Novar Dr","Glasgow","G12 9AX","Flat",4,450,"CO93","SG14","B003");


CREATE TABLE Client1(
clientNo VARCHAR(4),
fName VARCHAR(20),
lName VARCHAR(20),
telNo VARCHAR(20),
prefType VARCHAR(5),
maxRent INT
);


INSERT INTO Client1(clientNo,fName,lName,telNo,prefType,maxRent)
VALUES ("CR76","John","Kay","0207-774-5632","Flat",425),
("CR56","Aline","Stewart","0141-848-1825","Flat",350),
("CR74","Mike","Ritchie","01475-392178","House",750),
("CR62","Mary","Tregear","01224-196720","Flat",600);


CREATE TABLE PrivateOwner(
ownerNo VARCHAR(4),
fName VARCHAR(20),
lName VARCHAR(20),
address VARCHAR(30),
telNo VARCHAR(20)

);


INSERT INTO PrivateOwner(ownerNo,fName,lName,address,telNo)
VALUES ("CO46","Joe","Keogh","2 Fergus Dr,Aberdeen AB2 7SX","01224-861212"),
("CO87","Carol","Farrel","6 Achrey St,Glasgow G32 9DX","0141-357-7419"),
("CO40","Tina","Murphy","63 Well St,Glasgow G42","0141-943-1728"),
("CO93","Tony","Shaw","12 Park Pl,Glasgow G4 0QR","0141-225-7025");

CREATE TABLE Viewing(
    clientNo VARCHAR(5),
    propertyNo VARCHAR(20),
    viewDate DATE,
    comment1 VARCHAR(30)
    );
    
INSERT INTO Viewing( clientNo, propertyNo, viewDate, comment1)
VALUES  ( "CR56", "PA14", "2004-5-24", "too small"),
    ( "CR76", "PG4", "2004-4-20", "too remote"),
    ( "CR56", "PG4", "2004-5-26", ""),
    ( "CR62", "PA14", "2004-5-14", "no dining room"),
    ( "CR56", "PG36", "2004-4-28", "");      

CREATE TABLE Registration(
clientNo VARCHAR(4),
branchNo VARCHAR(4),
staffNo VARCHAR(4),
dateJoined DATE
);


INSERT INTO Registration(clientNo,branchNo,staffNo,dateJoined)
VALUES ("CR76","B005","SL41","2004-1-2"),
("CR56","B003","SG37","2003-4-11"),
("CR74","B003","SG37","2002-11-16"),
("CR62","BOO7","SA9","2003-3-7");


1
SELECT branchNo,position1,salary/2 AS hagasSar
FROM staff
GROUP BY branchNo
ORDER BY position1;

2
SELECT position1,sex,COUNT(sex)
AS too
FROM staff
GROUP BY position1, sex
ORDER BY too DESC;

3
SELECT branchNo, staffNo, salary, SUM(salary), COUNT(staffNo) AS too
FROM staff
GROUP BY branchNo
HAVING too>1;

4
SELECT ownerNo, propertyNo, rent, type1, rooms
FROM PropertyForRent
WHERE rent>SOME(SELECT rent        
		FROM PropertyForRent        
		WHERE ownerNo=(SELECT ownerNo                
			       FROM PrivateOwner               
			       WHERE telNo='0141-357-7419'));  
			                     
5
SELECT city, rooms, rent
FROM PropertyForRent
WHERE propertyNo=(SELECT propertyNo         
		  FROM Viewing          
		  WHERE comment1="too small");
		  

6
SELECT *
FROM PropertyForRent
WHERE staffNo=(SELECT staffNo        
	       FROM Registration        
	       WHERE clientNo=(SELECT clientNo               
			       FROM client1                
			       WHERE fName="Mike"));    
			                   
7
SELECT branchNo, staffNo, fName, lName, DOB
FROM staff
WHERE staffNo=(SELECT staffNo        
	       FROM Registration        
	       WHERE dateJoined="2003-3-7");   
	            
8
SELECT *
FROM PropertyForRent
WHERE rent<SOME(SELECT rent       
		FROM PropertyForRent        	
		WHERE ownerNo=(SELECT ownerNo                
			       FROM PrivateOwner                
			       WHERE fName="Carol"));  
			                     
9
SELECT branchNo, city, COUNT(branchNo) AS too
FROM branch 
GROUP BY city;              
          
10
SELECT *
FROM PropertyForRent
WHERE rent>SOME(SELECT rent       
		FROM PropertyForRent        
		WHERE ownerNo=(SELECT ownerNo                
			       FROM PrivateOwner               
			       WHERE fName="Tony"));           
			            
11
SELECT *
FROM PropertyForRent
ORDER BY COUNT(propertyNo)
LIMIT 1;

12
SELECT *
FROM client1
WHERE clientNo=(SELECT clientNo        
		FROM Registration       
		WHERE dateJoined="2004-1-2");      
		  
13
SELECT *
FROM staff
WHERE staffNo=(SELECT staffNo        
	       FROM Registration        
	       WHERE dateJoined="2004-1-2");      
	         
14
SELECT*
FROM client1
WHERE clientNo=(SELECT clientNo       
		FROM Viewing        
		WHERE viewDate="2004-5-26");    
		    
15
SELECT city, COUNT(propertyNo) AS too
FROM PropertyForRent
GROUP BY city
HAVING too>2;

16
(SELECT fName
FROM staff)
UNION
(SELECT fName
FROM client1)
UNION
(SELECT fName
FROM PrivateOwner)

17
(SELECT fName, lName, telNo
FROM client1
WHERE telNo LIKE "%22%")
UNION
(SELECT fName, lName, telNo
FROM PrivateOwner
WHERE telNo LIKE "%22%");

18
SELECT *
FROM PrivateOwner
WHERE ownerNo IN(SELECT ownerNo        
		FROM PropertyForRent        
		WHERE type1="Flat" AND rooms=3);  
		      
19
SELECT fName, position1, salary
FROM staff
WHERE branchNo IN(SELECT branchNo        
		  FROM Branch        
		  WHERE city="London")
ORDER BY salary ASC;

20
SELECT viewDate, propertyNo, comment1
FROM Viewing
WHERE clientNo=(SELECT clientNo        
		FROM client1        
		WHERE fName="Aline");
		        
21
SELECT fName, lName, position1
FROM staff
WHERE sex="F" AND staffNo IN(SELECT staffNo                
			     FROM PropertyForRent                
			     WHERE rooms=4);      
			               
22
SELECT type1, MIN(rent), MAX(rent)
FROM PropertyForRent
ORDER BY type1;

23
SELECT salary-(SELECT AVG(salary)
	       FROM Staff)
	       AS saldiff
FROM Staff 

24
SELECT * 
FROM PropertyForRent 
WHERE staffNo IN ( SELECT staffNo 
		   FROM Staff 
		   WHERE branchNo=(SELECT branchNo 
				   FROM Branch 
				   WHERE street="163 main st"));

25 
SELECT * 
FROM Staff 
WHERE branchNo!="B003" && salary>ALL(SELECT branchNo 
				     FROM Branch
				     WHERE branchNo="B003");

lab6

1
SELECT b.branchNo, b.city, s.staffNo, s.fName, s.position1
FROM staff s, branch b
WHERE s.branchNo=b.branchNO;

2
SELECT r.dateJoined, s.staffNo, s.fName, s.lName, b.*
FROM registration r, staff s, branch b
WHERE r.dateJoined="2003-4-11" AND s.staffNo=r.staffNo AND s.branchNo=b.branchNo;

3
SELECT v.viewDate, c.*
FROM viewing v, client1 c
WHERE v.clientNo=c.clientNo AND v.viewDate LIKE "2004-4%";

4
SELECT b.city, s.*
FROM branch b, staff s, propertyforrent p
WHERE b.city=p.city
GROUP BY b.city;

5
SELECT DISTINCT p. city 
FROM propertyforrent p, branch b
WHERE b.city=p.city;

6
SELECT o.*, s.fName, s.staffNo, s.position1, b.city
FROM privateowner o, propertyforrent p, staff s, branch b
WHERE p.rooms=3 AND p.type1="Flat" AND p.ownerNo=o.ownerNo AND p.staffNo=s.staffNo AND s.branchNo=b.branchNo;

7
SELECT s.fName, s.lName, s.position1, b.branchNo, b. city
FROM branch b, staff s
WHERE s. sex="F" AND b.branchNo="B003" AND b.branchNo=s.branchNo;

8
SELECT o.fName, s.*, b.*
FROM privateowner o, propertyforrent p, staff s, branch b
WHERE o. fName LIKE "C%" AND o.ownerNo=p.ownerNo AND p.staffNo=s.staffNo AND s.branchNo=b.branchNo;

9
SELECT p.propertyNo, s.*
FROM propertyforrent p, staff s
WHERE p.propertyNo LIKE "PA%" AND p.staffNo=s.staffNo;

10
SELECT s.branchNo, s.staffNo, COUNT(p.propertyNo) 
FROM staff s, propertyforrent p
WHERE s.branchNo="B003" AND s.staffNo=p.staffNo
GROUP BY s. branchNo, s. staffNo;

11
SELECT c.*, p.city, p.type1, p.rent
FROM viewing v, client1 c, propertyforrent p
WHERE v.comment1="too small" AND v.clientNo=c.clientNo AND v.propertyNo=p.propertyNo;

12
SELECT b.city, b.branchNo, s.position1, COUNT(s.position1) AS ajliinBair 
FROM branch b, staff s
WHERE s.branchNo=b.branchNo
GROUP BY s.branchNo, s.position1
ORDER BY b.city, s.position1;

13
UPDATE staff
SET position1="Manager", salary=25000
WHERE branchNo="B007" AND sex="F";

14
SELECT city, branchNo, COUNT(branchNo) AS salbar
FROM branch
GROUP BY city
ORDER BY city, branchNo;

15
SELECT p.*
FROM branch b, propertyforrent p
WHERE b.postcode="SW1 4EH" AND b.branchNo=p.branchNo;

16
SELECT *
FROM propertyforrent 
WHERE rent > ALL (SELECT rent
	          FROM propertyforrent 
	          WHERE city="Glasgow");
	          
17
SELECT b.branchNo,b.city,b.postcode,s.staffNo,s.FName,s.position1,r.clientNo,c.telNo,v.propertyNo
FROM branch b,staff s,registration r, viewing v,client1 c
WHERE v.clientNo=r.clientNo AND r.staffNo=s.staffNo AND s.branchNo=b.branchNo AND c.clientNo=v.clientNo;

18a
SELECT *
FROM staff
WHERE NOT EXISTS(SELECT *
		WHERE sex="F");
		/*Эмэгтэй биш ажилчид */
	
18b
SELECT propertyNo,ownerNo,rooms,type1,city,rent
FROM propertyforrent
WHERE EXISTS (SELECT *
		WHERE rent BETWEEN 100 AND 500);
		/*100- 500 доторх байр сонирхох  */
		
		
lab11
1
SELECT CONCAT (SUBSTRING(s.lName,1,1),'.',s.fName,' ' ,MONTH (r.dateJoined),' ','сарын ',DAY(r.dateJoined),'-нд ',b.city,' салбарт', ' ',
SUBSTRING(c.lName,1,1),'.',c.fName,'-тaй ажилласан байна.') AS Бүртгэлийн_хүснэгт
FROM registration r, staff s, branch b, client1 c
WHERE b.branchNo=r.branchNo AND r.clientNo=c.clientNo AND s.staffNo=r.staffNo; 

2
CREATE TABLE staffInfo AS
SELECT CONCAT(b.street,' ', b.city) AS bAddress, CONCAT(s.lName,' ', s.fName)AS fullName, s.staffNo, s.position1,
COUNT(p.propertyNo) AS propCount, COUNT( r.clientNo) AS clientCount
FROM staff s  
LEFT JOIN branch b ON s.branchNo=b.branchNo 
LEFT JOIN propertyforrent p ON p.staffNo=s.staffNo 
LEFT JOIN registration r ON r.staffNo=s.staffNo
GROUP BY s.staffNo;

3
SELECT staffNo, COUNT(propertyNo) AS too, 
IF(COUNT(propertyNo)<50, "heviin", "ih") AS ajillahAchaalal
FROM propertyforrent
GROUP BY staffNo;

4
UPDATE PropertyForRent
SET rent=500, staffno="SA9"
WHERE ownerNo IN (SELECT ownerno
		  FROM PrivateOwner
		  WHERE fname="Tony" AND lname="Shaw");
		  
5
UPDATE PropertyForRent
SET rent=rent+rent*0.15
WHERE branchno="B003";

6
UPDATE registration 
SET dateJoined=DATE_ADD(dateJoined, INTERVAL 1 MONTH)
WHERE dateJoined LIKE '%-04-%';

7
CREATE TABLE noots AS
SELECT*
FROM PropertyForRent;
 
DELETE 
FROM noots
WHERE staffNo="";

8
DELETE 
FROM noots
WHERE street="16 Argyll St" AND type1="House";


	



