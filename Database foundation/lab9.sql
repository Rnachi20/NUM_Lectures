CREATE TABLE Hotel(
HotelNo VARCHAR(25),
HotelName VARCHAR(25),
city VARCHAR(20), 
PRIMARY KEY (HotelNo)
);


INSERT INTO Hotel(HotelNo,HotelName,city)
VALUES ("H001","Holiday","Khuvsgul"),
("H002","Kempenskii","Ulaanbaatar"),
("H003","Temujin","Erdenet"),
("H004","ShangriLa","Ulaanbaatar"),
("H005","Den","Darkhan");

CREATE TABLE Room(
RoomNo VARCHAR (20),
HotelNo VARCHAR (20),
Bed INT,
Price INT,
PRIMARY KEY(RoomNo),
FOREIGN KEY(HotelNo) REFERENCES Hotel(HotelNo)
);

INSERT INTO Room (RoomNo,HotelNo,Bed,Price)
VALUES ("HR1","H001", 3, 780),
("HR2","H001", 4, 1200),
("HR3","H001", 2, 550),
("HR4","H001", 3, 700),
("HR5","H001", 5, 1550),
("KR1","H002", 3, 500),
("KR2","H002", 2, 350),
("KR3","H002", 5, 900),
("KR4","H002", 1, 300),
("TR1","H003", 1, 210),
("TR2","H003", 2, 310),
("TR3","H003", 3, 410),
("TR4","H003", 4, 510),
("SR1","H004", 1, 450),
("SR2","H004", 2, 750),
("SR3","H004", 3, 1000),
("SR4","H004", 4, 1500),
("DR1","H005", 1, 100),
("DR2","H005", 2, 200),
("DR3","H005", 3, 300),
("DR4","H005", 4, 400),
("DR5","H005", 5, 500),
("DR6","H005", 6, 600);

CREATE TABLE Booking(
HotelNo VARCHAR (25),
RoomNo VARCHAR (25),
guestNo VARCHAR (25),
dateFrom DATE,
dateTo DATE,
FOREIGN KEY(guestNo) REFERENCES Guest (guestNo),
FOREIGN KEY(HotelNo) REFERENCES Hotel (HotelNo),
FOREIGN KEY(RoomNo) REFERENCES Room (RoomNo)
);

INSERT INTO Booking(HotelNo, RoomNo, guestNo, dateFrom, dateTo)
VALUES ("H001","HR2","HG1","2022-02-24","2022-04-01"),
("H001","HR4","HG2","2022-10-25","2022-11-20"),
("H001","HR3","HG3","2022-03-15","2022-04-07"),
("H002","KR3","KG1","2022-04-05","2022-04-10"),
("H002","KR4","KG2","2022-04-07","2022-04-13"),
("H002","KR2","KG3","2022-04-12","2022-04-15"),
("H002","KR1","KG4","2022-04-01","2022-04-06"),
("H002","KR3","KG5","2022-04-03","2022-04-04"),
("H003","TR1","TG1","2022-04-01","2022-04-02"),
("H004","SR1","SG1","2022-04-08","2022-04-20"),
("H004","SR2","SG1","2022-04-03","2022-04-10"),
("H005","DR2","DG1","2022-04-05","2022-04-10"),
("H005","DR2","DG1","2022-04-12","2022-04-13"),
("H005","DR2","DG1","2022-04-04","2022-04-12"),
("H005","DR2","DG1","2022-04-03","2022-04-11");


CREATE TABLE Guest(
guestNo VARCHAR (25),
guestName VARCHAR (25),
guestAddress VARCHAR (40),
phonenumber INT,
PRIMARY KEY(guestNo) 
);

INSERT INTO Guest(guestNo,guestName,guestAddress,phonenumber)
VALUES ("HG2","Uranchimeg","43-62 district Bayanzurkh, Ulaanbaatar", 95504412),
("HG3","Sodbileg","23-27 district Bayangol, Ulaanbaatar", 99999999),
("HG1","Dechinnymbuu","23-27 district Bayangol, Ulaanbaatar", 95934013),
("KG1","Batbold","76-8 district Sukhbaatar, Ulaanbaatar", 95504412),
("KG2","Otgonchimeg","44-03 district SonginoKhairkhan, Ulaanbaatar", 80181206),
("KG3","Oyu-Erdene","42-02 district SonginoKhairkhan, Ulaanbaatar", 96602410),
("TG1","Tuguldur","4-8 district Bayanzurkh, Ulaanbaatar", 95948535),
("DG1","Munkhbat","5-56 district Bayangol, Ulaanbaatar", 95658723),
("DG2","Tuvdennamjil","87-9 district Bayanzurkh, Ulaanbaatar", 96948932),
("DG3","Bayarjavkhlan","23-44 district Sukhbaatar, Ulaanbaatar", 85676394);





1. 
SELECT h.city,h.hotelNo,h.hotelName,r.bed,r.price
FROM Hotel h, Room r
WHERE h.hotelNo=r.hotelNo
GROUP BY r.bed,h.hotelNo
ORDER BY r.price DESC;

2. 
SELECT r.*,h.*
FROM Hotel h, Room r
WHERE r.hotelNo=h.hotelNo AND r.price BETWEEN 100 AND 300;

3.  
SELECT h.*, COUNT(r.roomNo) AS roomtoo
FROM Hotel h,Room r
WHERE h.hotelNo=r.hotelNo 
ORDER BY roomtoo DESC
LIMIT 1;

4. 
SELECT h.hotelName, COUNT(r.roomNo) AS orootoo,MAX(r.price)AS max1,MIN(r.price) AS min1
FROM Hotel h,Room r
WHERE h.hotelNo=r.hotelNo
GROUP BY h.hotelNo;
	
5. 
SELECT g.guestName,h.*
FROM Guest g,Hotel h,Booking b
WHERE b.guestNo=g.guestNo AND b.hotelNo=h.hotelNo AND g.guestName="Uranchimeg";

6. 
SELECT NOW() AS today, r.roomNo,  r.bed, r.price, g.guestName, g.phonenumber, h.hotelName, h.city
FROM Booking b, guest g, hotel h, room r
WHERE datefrom<=NOW() AND datefrom>=NOW() AND h.hotelNo = r.hotelNo AND g.guestNo=b.guestNo AND b.hotelNo=h.hotelNo;

7. 
SELECT b.*, g.guestName, r.*, DATEDIFF(dateto,NOW()) 
FROM booking b, guest g, room r
WHERE DATEDIFF(dateto,NOW())>0;


8. SELECT h.*, COUNT(b.guestNo) AS too, COUNT(r.roomNo) AS roomtoo
FROM hotel h,room r,booking b
WHERE b.hotelNo=h.hotelNo AND r.roomNo=b.roomNo
GROUP BY b.hotelNo
ORDER BY COUNT(b.guestNo) 
LIMIT 1;

9. 
SELECT h.*,r.*
FROM Hotel h,Room r,booking b
WHERE DATEDIFF(b.dateto,NOW())<=0 AND r.price<=300 AND h.hotelNo=b.hotelNo AND r.roomNo=b.roomNo;

10. 
SELECT g.*,h.*
FROM guest g,booking b,hotel h
WHERE g.guestNo=b.guestNo AND h.hotelNo=b.hotelNo
ORDER BY DATEDIFF(dateTo,NOW()) DESC
LIMIT 1;


lab11 daalgavar

1
SELECT CONCAT(g.guestName,' ',h.hotelName,' ','зочид буудлын',' ',r.price,' ','үнэтэй "VIP" өрөөнд байрлажээ') AS Зочид_буудлын_захиалгын_мэдээлэл
FROM Hotel h, Guest g, Room r, Booking b
WHERE  b.roomNo=r.roomNo AND h.hotelNo=b.hotelNo AND g.guestNo=b.guestNo;

2
SELECT r.* 
FROM room r LEFT JOIN booking b ON r.roomNo=b.roomNo 
WHERE b.dateFrom IS NULL AND b.dateTo IS NULL OR NOW()<b.dateFrom AND NOW()<b.dateTo 
ORDER BY r.price ASC 

SELECT RoomNo, HotelNo, bed, price
FROM room
WHERE price =(SELECT MIN(price) 
              FROM room) AND roomNo IN(SELECT roomNo 
                                       FROM booking 
                                       WHERE (SELECT NOW()) NOT BETWEEN datefrom AND dateTo);
                                      
3
SELECT r.*, COUNT(b.dateFrom) AS zahialga_awsan_too
FROM room r LEFT JOIN booking b ON r.roomNo=b.roomNo 
GROUP BY r.roomNo 
HAVING COUNT(b.dateFrom)<2
ORDER BY r.price ASC;

4
SELECT g.*, b.dateFrom, b.dateTo
FROM guest g LEFT JOIN  booking b ON b.guestNo=g.guestNo
WHERE  NOW()>b.dateTo AND 
NOW()>b.dateFrom AND b.dateTo>DATE_ADD(NOW(), INTERVAL -3 MONTH) AND b.dateFrom>DATE_ADD(NOW(), INTERVAL -3 MONTH);

5
SELECT b.hotelNo,g.guestNo,g.guestName,g.phonenumber
FROM booking b,guest g
WHERE g.guestNo=b.guestNo
GROUP BY b.hotelNo
ORDER BY COUNT(b.guestNo) DESC;

6
CREATE TABLE noots AS
SELECT *
FROM hotel;

7
CREATE TABLE  HotelInformation AS
SELECT h.hotelNo, h.hotelName, COUNT(r.roomNo) AS RoomCount, MAX(r.price) AS MaxPrice, MIN(r.price) AS MinPrice, AVG(r.price) AS AvgPrice, h.city 
FROM hotel h 
LEFT JOIN room r ON h.hotelNo=r.hotelNo
GROUP BY h.hotelName 

CREATE TABLE HotelInformation AS
SELECT h.hotelno,h.hotelname,COUNT(r.roomno) AS RoomCount,MAX(r.price),MIN(r.price),AVG(r.price),h.city
FROM hotel h,room r
WHERE h.hotelno=r.hotelno
GROUP BY r.hotelno;

8
UPDATE room r
LEFT JOIN hotel h ON r.hotelNo=h.hotelNo
SET r.price=r.price*1.002
WHERE h.hotelName="Holiday";

UPDATE room r,hotel h
SET r.price=r.price+r.price*0.2
WHERE r.hotelno=h.hotelno AND h.hotelname="Holiday";
