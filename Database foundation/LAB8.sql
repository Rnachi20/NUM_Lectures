

CREATE TABLE Professional(
    professionalNo VARCHAR(10),
    professionalName VARCHAR(30)
    );
    
INSERT INTO Professional(professionalNo, professionalName)
VALUES  ( "D061301", "Computer science"),
( "(D061303", "Information system"),
( "D061304", "Information technology"),
( "D061302", "Software engineering"),
( "D061203", "Multimedia technology");

CREATE TABLE Student(
    studentNo VARCHAR(10),
    professionalNo VARCHAR(10),
    fName VARCHAR(20),
    lName VARCHAR(20),
    sex VARCHAR(1),
    DOB DATE,
    DOE DATE
);

INSERT INTO Student (studentNo, professionalNo, fName, lName, sex, DOB, DOE)
VALUES  ( "21b1num0609", "D061302", "Uranchimeg", "EnkhOrgil", "F", "2002-9-24", "2021-8-30"),
( "21b1num1111", "D061302", "Ariun", "Saihan", "F", "2003-10-30", "2021-7-29"),
( "21b1num0224", "D061301", "Nymbuu", "Dechin", "M", "2003-11-02", "2001-8-29"),
( "21b1num2256", "D061304", "Bat", "Dondog", "M", "2002-7-1", "2001-8-28"),
( "21b1num5672", "D061301", "Hongor", "Saruul", "F", "2002-3-20", "2001-8-30"),
( "21b1num8462", "D061303", "Zolboo", "Sanjaa", "M", "2002-2-15", "2001-8-27"),
( "21b1num4912", "D061302", "Oyun", "Bayraa", "F", "2002-1-2", "2001-8-31"),
( "21b1num8676", "D061203", "Tuugu", "Hasaa", "M", "2002-3-7", "2001-8-25");



CREATE TABLE lesson(
    lessonNo VARCHAR(10),
    lessonName VARCHAR(10));

    
INSERT INTO lesson(lessonNo, lessonName)
VALUES  ( "CSII200", "Algorithm"),
( "CSII202", "Database"),
( "MATH182", "Discrete math"),
( "ICSI208", "Networking"),
( "FNDP100", "Gamshig");

CREATE TABLE lessonRelation(
   professionalNo VARCHAR(20),
   lessonNo VARCHAR (10)
);

    
INSERT INTO lessonRelation(professionalNo, lessonNo)
VALUES  
( "D061301", "MATH182"),
( "D061301", "CSII202"),
( "D061303", "CSII200"),
( "D061303", "FNDP100"),
( "D061304", "FNDP100"),
( "D061304", "ICSI208"),
( "D061302", "CSII202"),
( "D061302", "CSII200"),
( "D061203", "ICSI208"),
( "D061203", "MATH182");

CREATE TABLE chosenLesson(
    studentNo VARCHAR(20),
    lessonNo VARCHAR(10),
    season VARCHAR(10),
    DOC DATE,
    O1 INT,
    O2 INT
);

    
INSERT INTO chosenLesson(studentNo, lessonNo, season, DOC, O1, O2)
VALUES  ( "21b1num0609", "CSII202", "fall", "2022-9-2", 20, 40),
( "21b1num0609", "CSII200", "fall", "2022-9-3", 19, 39 ),
( "21b1num1111", "CSII200", "fall", "2022-8-25", 16, 35 ),
( "21b1num0224", "MATH182", "spring", "2022-8-26", 17, 40 ),
( "21b1num2256", "ICSI208", "fall", "2022-8-27", 15, 29 ),
( "21b1num2256", "FNDP100", "spring", "2022-9-2", 12, 37 ),
( "21b1num5672", "CSII202", "spring", "2022-8-28", 10, 20 ),
( "21b1num8462", "FNDP100", "spring", "2022-8-29", 18, 32 ),
( "21b1num8462", "CSII200", "fall", "2022-8-30", 9, 38 ),
( "21b1num4912", "CSII202", "fall", "2022-8-31", 13, 25 ),
( "21b1num4912", "CSII200", "spring", "2022-9-2", 19, 38 ),
( "21b1num8676", "MATH182", "fall", "2022-8-30", 20, 34),
( "21b1num8676", "ICSI208", "fall", "2022-9-3", 16, 33 );


1
SELECT professionalNo, COUNT(lessonNo)
FROM lessonRelation
GROUP BY professionalNo;

2
SELECT professionalNo, COUNT(studentNo) AS Stoo
FROM student
GROUP BY professionalNo
ORDER BY Stoo;

3
SELECT *
FROM lesson
WHERE lessonNo=(SELECT lessonNo, COUNT(studentNo) AS stoo
		FROM chosenLesson
		GROUP BY lessonNo
		ORDER BY stoo DESC);
		
4
SELECT r.*
FROM lessonRelation r, student s
WHERE s.fName="Bat" AND s.professionalNo=r.professionalNo;

5
SELECT s.studentNo, AVG(O2)
FROM student s, chosenLesson c
WHERE s.fName="Bat" AND c.season="fall" AND s.studentNo=c.studentNo;

6
SELECT studentNo, COUNT(lessonNo) AS stoo, AVG(O2)
FROM chosenLesson
GROUP BY studentNo;

7
SELECT s.professionalNo, MIN(O2) , MAX(O2), AVG(O2)
FROM chosenLesson c, student s
WHERE c.season="fall" AND c.studentNo=s.studentNo
ORDER BY s.professionalNo;

8
SELECT studentNo 
FROM chosenLesson
WHERE DOC LIKE "2022%" AND season="fall" AND O2<=30 AND O1<=10;

9
SELECT  lessonNo
FROM chosenLesson
WHERE studentNo=(SELECT studentNo COUNT(O2)
		FROM chosenLesson
		WHERE season="fall" 
		ORDER );

10
DELETE FROM chosenLesson
WHERE O1="" AND O2="";



