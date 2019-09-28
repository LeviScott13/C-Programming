/*************************/
/*Name: Levi Sutton      */
/*Term: Spring 2019      */
/*************************/

/*Projections*/

/* What pets are in the database? */

SELECT *
FROM PET;

/* What are the name of the pets in the database? */

SELECT Name
FROM PET;

/* What are the ID numbers and breeds of the petsin the database? */

SELECT ID, Breeds
FROM PET;

/* What are the names,species, and breeds of the petsin the database? */

SELECT Name, Species, Breeds
FROM PET;

/* What are the names, genders, and altered status of the petsin the database? */

SELECT Name, Gender, Altered Status
FROM PET;



/*Restrictions*/

/* What dogs are in the database? */

SELECT *
FROM PET
WHERE Species = 'Dog';

/* What cats are in the database? */

SELECT *
FROM PET
WHERE Species = 'Cat';

/* What rabbits are in the database? */

SELECT *
FROM PET
WHERE Species = 'Rabbit';

/* What pets are female? */

SELECT *
FROM PET
WHERE Gender = 'Female';

/* What pets are male? */

SELECT *
FROM PET
WHERE Gender = 'Male';



/*Function*/

/* What is the total number of scores received for the tests taken? */

SELECT COUNT(Score)
FROM Scores; 

/* What is the sum of the scores of the tests taken? */

SELECT SUM(Score)
FROM Scores; 

/* What is the average of the scores of the tests taken? */

SELECT AVG(Score)
FROM Scores; 

/* What isthe lowest score of the tests taken? */

SELECT MIN(Score)
FROM Scores;

/* What isthe highest score of the tests taken? */

SELECT MAX(Score)
FROM Scores;



/*Group By*/

/* What is the total number of scores received by each student? */

SELECT StudentID, COUNT(Score)
FROM Scores
Group By StudentID;

/* What isthe total number of scores received for each test? */

SELECT TestID, COUNT(Score)
FROM Scores
Group By TestID;

/* What is the sum of the scores for each student? */

SELECT StudentID, SUM(Score)
FROM Scores
Group By StudentID;

/* What is the average score for each test? */

SELECT TestID, AVG(Score)
FROM Scores
Group By TestID;

/* What is the average score for each student? */

SELECT StudentID, AVG(Score)
FROM Scores
Group By StudentID;

/* What is the lowest score received for each test? */

SELECT TestID, MIN(Score)
FROM Scores
Group By TestID;

/* What is the lowest score received by each student? */

SELECT StudentID, MIN(Score)
FROM Scores
Group By StudentID;

/* What is the highest score received for each test? */

SELECT TestID, MAX(Score)
FROM Scores
Group By TestID;

/* What is the highest score received by each student? */

SELECT StudentID, MAX(Score)
FROM Scores
Group By StudentID;



/* Having */

/* What is the total number of scores for each test with a total score of atleast 200?*/

SELECT TestID, COUNT(Score)
FROM Scores
Group By TestID
HAVING SUM(Score) >= 200;

/* What is the total number of scores for each student with a total score of at least 200?*/

SELECT StudentID, COUNT(Score)
FROM Scores
Group By StudentID
HAVING SUM(Score) >= 200;

/* What is the total number of scores for each student who has taken exactly three tests(ie has 3 scores)?*/

SELECT StudentID, COUNT(Score)
FROM Scores
Group By StudentID
HAVING COUNT(Score) = 3;

/* What is the total number of scores for each test that has been taken by exactly 3 students(ie has 3 scores)?*/

SELECT TestID, COUNT(Score)
FROM Scores
Group By TestID
HAVING COUNT(Score) = 3;

/* What is the average score for each test which has received exactly three scores(ie taken by 3 students)?*/

SELECT TestID, AVG(Score)
FROM Scores
Group By TestID
HAVING COUNT(Score) = 3;

/* What is the average score for each student which exactly three scores(ie taken by 3 students)?*/

SELECT StudentID, AVG(Score)
FROM Scores
Group By StudentID
HAVING COUNT(Score) = 3;

/* What is the lowest score for each test with exactly three scores(ie taken by 3 students)?*/

SELECT TestID, MIN(Score)
FROM Scores
Group By TestID
HAVING COUNT(Score) = 3;

/* What is the lowest score for each student with exactly three scores(ie taken by 3 students)?*/

SELECT StudentID, MIN(Score)
FROM Scores
Group By StudentID
HAVING COUNT(Score) = 3;

/* What is the highest score for each test with exactly three scores(ie taken by 3 students)?*/

SELECT TestID, MAX(Score)
FROM Scores
Group By TestID
HAVING COUNT(Score) = 3;

/* What is the highest score for each student with exactly three scores(ie taken by 3 students)?*/

SELECT StudentID, MAX(Score)
FROM Scores
Group By StudentID
HAVING COUNT(Score) = 3;



/* Distinct */

/* What are the names of all of the different pets in the database? */

SELECT Name 
FROM DISTINCT PET;

/* What are the distinct names of the pets in the database? */

SELECT DISTINCT Name 
FROM PET;

/* What are the species of all of the different pets in the database?*/

SELECT Species 
FROM DISTINCT PET;

/* What are the distinct species of the pets in the database?*/

SELECT DISTINCT Species 
FROM PET;

/* What are the genders of all of the different pets in the database?*/

SELECT Gender
FROM DISTINCT PET;

/* What are the distinct genders of the pets in the database?*/

SELECT DISTINCT Gender
FROM PET;

/* What are the genders and altered status of all of the different pets in the database?*/

SELECT Gender, Altered Status
FROM DISTINCT PET;

/* What are the distinct genders and altered status of the pets in the database?*/

SELECT DISTINCT Gender, Altered Status
FROM PET;


/* Order By */

/* Who are the pets in the database, sorted by ID number?*/

SELECT Name
FROM PET
ORDER BY ID;

/* Who are the pets in the database, sorted by name?*/

SELECT Pet
FROM PET
ORDER BY Name;

/* Who are the pets in the database, sorted by name in reverse order?*/

SELECT Pet
FROM PET
ORDER BY Name DESC;

/* What are the names,species, and breeds of the pets in the database, sorted by ID number?*/

SELECT Name, Species, Breed
FROM PET
ORDER BY ID;

/* What are the names,species, and breeds of the pets in the database, sorted by name?*/

SELECT Name, Species, Breed
FROM PET
ORDER BY Name;

/* What are the names,species, and breeds of the pets in the database, sorted by name in reverse order?*/

SELECT Name, Species, Breed
FROM PET
ORDER BY Name DESC;

/* What are the names of the pets in the database,sorted by ID number */

SELECT Name
FROM PET
ORDER BY ID;

/* What are the names of the pets in the database,sorted by ID number */

SELECT Name
FROM PET
ORDER BY Name;