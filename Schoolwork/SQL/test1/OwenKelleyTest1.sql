# Owen Kelley
# Test 1

# Question 1
SELECT state
FROM customers
WHERE country = "USA"
GROUP BY state
ORDER BY state;

####################################################
# Question 2
SELECT count(state) AS Population, state
FROM customers
WHERE country = "USA"
GROUP BY state
ORDER BY Population DESC
LIMIT 5;
####################################################
# Question 3
SELECT CONCAT('$',FORMAT(SUM(priceEach * quantityOrdered), 'C')) AS "Grand Total"
FROM orderdetails;

####################################################
# Question 4
SELECT products.productName
FROM products 
JOIN orderdetails ON orderdetails.productCode = products.productCode
WHERE orderdetails.priceEach = ((products.MSRP)*.8)
GROUP BY products.productName
ORDER BY products.productName;

####################################################
# Question 5
SELECT e.firstName AS "Emp First", e.lastName AS "Emp Last", m.firstName "Sup First", m.lastName "Sup Last" 
FROM employees e 
join employees m ON e.reportsTo = m.employeeNumber
WHERE e.reportsTo > 0
ORDER BY m.lastName;
####################################################
# Question 7
SELECT COUNT(customerNumber) - (SELECT COUNT(customers.customerNumber)
                                FROM offices
                                JOIN customers ON customers.state = offices.state
                                WHERE offices.country = "USA") AS "Domestic Customers Where There is no office in the state"
FROM customers;
####################################################
# Question 7
SELECT COUNT(SUB.customerNumber)
FROM (SELECT COUNT(customerNumber) AS MAXCUS, customerNumber
FROM orders
GROUP BY customerNumber
ORDER BY MAXCUS DESC
LIMIT 1) AS SUB
JOIN orders ON orders.customerNumber = SUB.customerNumber
WHERE datediff(orderDate, shippedDate) <= 7;
####################################################
# Question 8
SELECT SUB3.customerNumber, SUB3.lastName, SUB3.firstName
FROM(SELECT customers.customerNumber, SUB2.lastName, SUB2.firstName
    FROM(SELECT employees.employeeNumber, employees.lastName, employees.firstName, employees.jobTitle
        FROM (SELECT officeCode
                FROM offices
                WHERE country != 'USA') AS SUB
    JOIN employees ON employees.officeCode = SUB.officeCode
    WHERE jobTitle LIKE "%Sales Rep%") AS SUB2
JOIN customers ON customers.salesRepEmployeeNumber = SUB2.employeeNumber) AS SUB3;





