/*7*/
CREATE TABLE Branch(
branchNo VARCHAR(4),
bName VARCHAR(25),
address VARCHAR(60),
telNo INT,
PRIMARY KEY(branchNo)
);

INSERT INTO Branch(branchNo,bName,address,telNo)
VALUES ("B002","Mubis Salbar","TIME tuv,khoroo 8, district Sukhbaatar, Ulaanbaatar",70004343),
("B003","Yarmag Salbar","Khunnu mall, district Khan-Uul , Ulaanbaatar",89867744),
("B001","Tuv Salbar","Az khur HHK,khoroo 3, district Sukhbaatar, Ulaanbaatar",70004343),
("B004","Ulaanhuaran Salbar","Kaidu mall, khoroo 16, district Bayanzurkh, Ulaanbaatar",89867722),
("B005","Darkhan Salbar","Darkhan",99376423);


CREATE TABLE Staff(
staffNo VARCHAR(3),
fName VARCHAR(10),
lName VARCHAR(10),
position1 VARCHAR(20),
sex VARCHAR(1),
DOB DATE,
salary INT,
branchNo VARCHAR(4),
PRIMARY KEY(StaffNo),
FOREIGN KEY(branchNo) REFERENCES Branch(branchNo)
);

INSERT INTO Staff(staffNo,fName,lName,position1,sex,DOB,salary,branchNo)
VALUES ("N01","Uran","Chimeg","Nom bagtslagch","M","1997-10-1",30000,"B001"),
("H01","Bat","Khongor","Hurgegch","F","1988-11-10",12000,"B001"),
("H02","Dorj","Namjmaa","Hurgegch","M","1985-3-24",18000,"B001"),
("H03","Saran","Tsogt","Hurgegch","F","1999-2-19",13000,"B001"),
("N15","Otgon","Tsetseg","Nom bagtslagch","F","1991-6-3",24000,"B002"),
("N30","Buyn","Delger","Nom bagtslagch","F","1987-1-13",15000,"B002"),
("H23","Sod","Bileg","Hurgegch","M","1989-2-15",13000,"B002"),
("H45","Beleg","Tsogt","Hurgegch","F","1986-3-12",14000,"B003"),
("N03","Erdene","Bileg","Nom bagtslagch","M","1995-4-1",14000,"B003"),
("H69","Bayr","Nemekh","Hurgegch","F","1984-5-12",14000,"B004"),
("N75","Usukh","Bayr","Nom bagtslagch","M","1995-4-1",15000,"B004"),
("H11","Khongor","Zul","Hurgegch","F","1997-4-25",16000,"B005"),
("N24","Bayar","Javkhlan","Nom bagtslagch","M","1996-11-1",17000,"B005");


CREATE TABLE Car(
carNo VARCHAR(7),
branchNo VARCHAR(4),
PRIMARY KEY(carNo),
FOREIGN KEY(branchNo) REFERENCES Branch(branchNo)
);

INSERT INTO Car(carNo,branchNo)
VALUES ("5192UBN", "B001"),
("6367UBT", "B001"),
("7384USH", "B002"),
("6294UBC", "B003"),
("6985UBN", "B004"),
("2462UBN", "B005");


CREATE TABLE Delivery(
orderNo VARCHAR(5),
branchNo VARCHAR(4),
carNo VARCHAR(7),
staffNo VARCHAR(3),
deliveryDate DATE,
FOREIGN KEY(orderNo) REFERENCES Order_Info(orderNo),
FOREIGN KEY(branchNo) REFERENCES Branch(branchNo),
FOREIGN KEY(carNo) REFERENCES Car(carNo),
FOREIGN KEY(staffNo) REFERENCES Staff(staffNo)

);

INSERT INTO Delivery(orderNo,branchNo,carNo,staffNo, deliveryDate)
VALUES ("O2756","B002","7384USH","H23", "2022-12-6"),
("O9865","B003","6294UBC","H45", " "),
("O3445","B001","5192UBN","H02", "2022-12-4"),
("O4785","B003","6294UBC","H45", " "),
("O7634","B004","6985UBN","H69", " "),
("O6739","B005","2462UBN","H11", " "),
("O4274","B005","2462UBN","H11", "2022-12-1");


CREATE TABLE Order_Info(

orderNo VARCHAR(5),
orderDate DATE,
paymentStatus VARCHAR(10),
orderStatus VARCHAR(20),
userNo VARCHAR(8),
PRIMARY KEY(orderNo),
FOREIGN KEY(userNo) REFERENCES User1(userNo)
);

INSERT INTO Order_Info(orderNo,orderDate,paymentStatus,orderStatus,userNo)
VALUES ("O2756","2022-11-27","Tulugdsun","hurgej ugsun","UB123456"),
("O6547","2022-11-30","Tulugduugui"," ","UB345456"),
("O9865","2022-12-2","Tulugdsun","hurgeltend garsan","UB469274"),
("O3445","2022-11-26","Tulugdsun","hurgej ugsun","UB570138"),
("O4785","2022-12-4","Tulugdsun","hurgeltend garsan","UB672948"),
("O7634","2022-12-1","Tulugdsun","hurgeltend garsan","UB743859"),
("O5842","2022-11-23","Tulugduugui"," ","UB885936"),
("O6739","2022-12-5","Tulugdsun","hurgeltend garsan","DH575634"),
("O4274","2022-11-29","Tulugdsun","hurgej ugsun","DH288940");


CREATE TABLE User1(
userNo VARCHAR(8),
fName VARCHAR(10),
lName VARCHAR(10),
telNo INT,
address VARCHAR(60),
mail VARCHAR(20),
PRIMARY KEY(UserNo)
);


INSERT INTO User1(userNo,fName,lName,telNo,address, mail)
VALUES ("UB123456","Saran","Gerel",95673849,"23-27 district Bayanzurkh, Ulaanbaatar","sara2a@gmail.com"),
("UB345456","Sodnom","Sambuu",93473849,"44-03 district Sukhbaatar, Ulaanbaatar","sodsoa@gmail.com"),
("UB469274","Has","Zorig",95298946,"33-12 district KhanUul, Ulaanbaatar","zzzzue@gmail.com"),
("UB570138","Otgon","Chimeg",97620984,"75-45 district SonginoKhairkhan, Ulaanbaatar","ogii93@gmail.com"),
("UB672948","Oyu","Erdene",94986256,"42-73 district KhanUul, Ulaanbaatar","oyu453@gmail.com"),
("UB743859","Khan","Erdene",97584939,"56-76 district Bayanzurkh, Ulaanbaatar","khaanaka22@gmail.com"),
("UB885936","Tsas","Chiher",95672504,"63-45 district Sukhbaatar, Ulaanbaatar","chigii234@gmail.com"),
("DH575634","Gal","Baatar",90985642,"Darkhan","galsanjav@gmail.com"),
("DH288940","Bat","Zorig",97549242,"Darkhan","Zorig247@gmail.com");


CREATE TABLE Package(
bookNo VARCHAR(5),
orderNo VARCHAR(5),
FOREIGN KEY(bookNo) REFERENCES Book(bookNo),
FOREIGN KEY(orderNo) REFERENCES Order_Info(orderNo)
);
    
INSERT INTO Package( bookNo, orderNo)
VALUES ("TNM4", "O2756"),
("GUZ23", "O6547"),
("GUZ45", "O9865"),
("HHH46", "O3445"),
("MUZ11", "O4785"),
("MUZ65", "O7634"),
("TNM96", "O5842"),
("TNM11", "O6739"),
("TNM4", "O4274"),
("TNM96", "O4274");
      

CREATE TABLE Book(

bookNo VARCHAR(5),
bookName VARCHAR(30),
author VARCHAR(25),
category VARCHAR(20),
pageNumber INT,
price INT,
printDate DATE,
printPlace VARCHAR(25),
PRIMARY KEY(bookNo)
);

INSERT INTO Book(bookNo,bookName,author,category,pageNumber,price,printDate,printPlace)
VALUES ("HHH1","Engiin dadal","James Clear","huvi hunii hugjil", 320, 25000, "2019", "Bolor Sudar"),
("GUZ23","Bidnii oddiin aldaa","John Green","gadaadiin uran zohiol", 311, 20000, "2015", "Bolor Sudar"),
("GUZ45","Ungulug","Mori Eto","gadaadiin uran zohiol", 166, 24000, "2022", "Bolor Sudar"),
("HHH46","Halim eej","B.Gerelchimeg","huvi hunii hugjil", 220, 25000, "2019", "Bolor Sudar"),
("MUZ11","Tegri chinu","Todko Samson","mongolin uran zohiol", 400, 29500, "2022", "Alpha publishing"),
("MUZ65","Sondgoi tsagaan suvd","B.Sarantuya","mongolin uran zohiol", 304, 25000, "2022", "Alpha publishing"),
("TNM96","Augaa uran zurguud","Urlag shuumjlegchid","tanin medehui", 2560, 75000, "2013", "Nepko publishing"),
("TNM11","Ta uuriiguu medeh uu?","P.Odgerel","tanin medehui", 180, 18000, "2012", "Alpha publishing"),
("TNM4","Genomiin code tailagch","Volter Aizekson","tanin medehui", 542, 40000, "2022", "Nepko publishing");


/*8*/

-- 1. Tuv salbart ajilladag hurgegchiin medeelliig salbariin haygtai gargana uu?

SELECT s.*, b.bName, b.address
FROM Staff s, branch b
WHERE s.branchNo=b.branchNo AND b.bName = "Tuv Salbar";

-- 2. Ungulug nomiig zahialsan hereglegchiin medeelliig gargana uu?
SELECT u.*
FROM User1 u, book b, package p, Order_Info o
WHERE u.userNo=o.userNo AND b.bookNo=p.bookNo AND p.orderNo=o.orderNo AND b.bookName="Ungulug" ;

-- 3. Nomiin heseg ruu Frankeinstein nomiig nemne uu ?
INSERT INTO Book(bookNo,bookName,author,category,pageNumber,price,printDate,printPlace)
VALUES("AYD2","Frankeinstein","Einshtein","adal yavdaltai",200, 19980, "2000", "Nepko publishing");

-- 4. 30000 aas deesh unetei nomiin medeelliig gargana uu?
SELECT *
FROM Book
WHERE price>30000;

-- 5. "..." dugaartai hereglegch "..." nii odor "..." dugaartai nom zahialjee
SELECT CONCAT(u.userNo,' ','dugaartai hereglegch',' ',o.orderDate,' ','-nii odor',' ',b.bookNo,' ','dugaartai nom zahialjee') AS nomiin_zahialgiin_hereglegch
FROM User1 u, book b, package p, Order_Info o
WHERE u.userNo=o.userNo AND b.bookNo=p.bookNo AND p.orderNo=o.orderNo;

-- 6. 25000 aas doosh unetei nomnii uniig 0.5 huviar nemegduulne uu.
UPDATE book 
SET price=price + price*0.2
WHERE price <25000;

-- 7. Salbar burt  heden ajiltan baigaag salbaraar ni eremblen haruulna uu
SELECT b.branchNo, COUNT(s.staffNo)
FROM branch b, staff s
WHERE b.branchNo=s.branchNo
GROUP BY b.branchNo
ORDER BY b.branchNo;

-- 8. Halim eej gedeg nom zahialsan hereglegchiin medeelliig garga
SELECT*
FROM User1
WHERE userNo=(SELECT userNo
		FROM Order_Info
		WHERE orderNo=(SELECT orderNo
				FROM Package
				WHERE bookNo=(SELECT bookNo
						FROM Book
						WHERE bookName = "Halim eej")));



-- 9. Hamgiin unetei nomoos[baga unetei hurtel] zahialsan humuusiin medeelliig jagsaan gargana uu?
SELECT u.userNo, u.fName,u.address, u.telNo
FROM book b, User1 u, Order_Info o, Package p
WHERE b.bookNo=p.bookNo AND o.orderNo = p.orderNo AND o.userNo = u.userNo
GROUP BY b.bookNo
ORDER BY b.price DESC; 	

-- 10. Hamgiin ih zahialsan nomiin medeelelees hamgiin baga zahialsan hurtel ni jagsaaj haruulna uu?
SELECT b.bookName, COUNT(p.orderNo)
FROM package p, book b
WHERE p.bookNo= b.bookNo 
GROUP BY p.bookNo
ORDER BY p.bookNo DESC;



/*9*/

-- Nuuts husnegt uusgeed hurgegdsen ognoo hooson bga medeelliig ustga

CREATE TABLE noots AS
SELECT*
FROM delivery;
 
DELETE 
FROM noots
WHERE deliveryDate="";


 /*10*/  IF, CASE Жишээн дээр:
 
SELECT b.*,
	CASE
		WHEN price>25000 THEN '25000s ih'
		WHEN price<25000 THEN '25000s baga'
END AS price
FROM book 

 
 
SELECT *, IF(price>25000, "25000s ih", "25000s baga") AS price
FROM book

 


/*11*/
-- 1. Nomiin humuusiin hamgiin ih anhaarch hardag medeelel

CREATE VIEW BookShortIntro AS
SELECT bookName, author, category, price
FROM Book;

-- 2. Zahialsan udur ba nomoo huleen avsan udruudiig haruuldag huurmag husnegt

CREATE VIEW DateToDate AS
SELECT u.fName, o.orderDate, d.deliveryDate
FROM User1 u, Order_info o, delivery d
WHERE o.orderNo = d.orderNo AND o.userNo = u.userNo;

-- 3. Zuvhun hurgegch ajiltnii medeelliig gargadag huurmag husnegt

CREATE VIEW DeliveryStaff AS
SELECT *
FROM staff
WHERE position1 = "Hurgegch";



