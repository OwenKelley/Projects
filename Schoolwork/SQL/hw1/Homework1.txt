
/*  OWEN KELLEY   */
/* SQL Homework 1 */
##################################################################
#1

SELECT EMP_NUM, EMP_LNAME, EMP_FNAME, EMP_INITIAL 
FROM EMPLOYEE 
WHERE EMP_LNAME 
LIKE 'Smith%'
ORDER BY EMP_NUM;

################################################################################
#2

SELECT PROJ_NAME, PROJ_VALUE, PROJ_BALANCE, EMP_LNAME, EMP_INITIAL 
FROM EMPLOYEE 
JOIN PROJECT ON EMPLOYEE.EMP_NUM=PROJECT.EMP_NUM;

################################################################################
#3

SELECT PROJ_NAME, PROJ_VALUE, PROJ_BALANCE, EMP_LNAME, EMP_INITIAL
FROM EMPLOYEE
JOIN PROJECT ON EMPLOYEE.EMP_NUM=PROJECT.EMP_NUM
ORDER BY EMP_LNAME;

################################################################################
#4

SELECT DISTINCT PROJ_NUM FROM ASSIGNMENT ORDER BY PROJ_NUM;

################################################################################
#5

SELECT ASSIGN_NUM, EMP_NUM, PROJ_NUM, ASSIGN_CHARGE, ASSIGN_CHG_HR*ASSIGN_HOURS 
FROM ASSIGNMENT;

################################################################################


