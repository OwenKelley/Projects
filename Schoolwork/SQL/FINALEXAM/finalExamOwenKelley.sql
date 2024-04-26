# Owen Kelley
# Final Exam
#####################################
# Question 1
SELECT firstName, COUNT(firstName) AS NameShared
FROM student
GROUP BY firstName
ORDER BY NameShared DESC, firstName;
#####################################
# Question 2
SELECT student.major, COUNT(student.major) AS students
FROM student
JOIN enroll ON enroll.studentID = student.studentid
JOIN class ON class.classCode = enroll.classCode
JOIN course ON course.courseCode = class.courseCode
WHERE course.courseCredit = 4 AND student.transfer = "N"
GROUP BY student.major
ORDER BY students DESC;
#####################################
# Question 3
SELECT student.firstName
FROM student
JOIN enroll ON enroll.studentID = student.studentid
WHERE enroll.enrollGrade = "B" AND enroll.enrollSemester = 1 AND enroll.enrollYear = 2018
GROUP BY student.firstName
ORDER BY student.firstName;
######################################
# Question 4
SELECT CONCAT("GPA=", FORMAT(AVG(student.GPA),2)) AS Average
FROM student
JOIN enroll ON enroll.studentID = student.studentid
JOIN class ON class.classCode = enroll.classCode
WHERE class.classTime LIKE "Th%";
######################################
# Question 5
SELECT course.courseDescription, COUNT(enroll.studentID) AS Students
FROM course
JOIN class ON class.courseCode = course.courseCode
JOIN enroll ON enroll.classCode = class.classCode
WHERE enroll.enrollSemester = 2
GROUP BY courseDescription
ORDER BY Students DESC;














