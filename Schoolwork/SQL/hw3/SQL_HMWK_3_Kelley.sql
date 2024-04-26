
/*   OWEN KELLEY    */
/*  SQL Homework 2  */

##################################################################
#19
SELECT (SELECT COUNT(DISTINCT(INVOICE.INV_NUMBER)) FROM INVOICE) AS "Total Invoices", SUM(X) AS "Total Sales", MIN(X) AS "Minimum Customer Purchase", MAX(X) AS "Largest CUstomer Purchase", AVG(X) AS "Average Customer Purchase"
FROM (SELECT SUM(LINE_UNITS*LINE_PRICE) AS "X"
      FROM INVOICE
      JOIN CUSTOMER ON CUSTOMER.CUS_CODE = INVOICE.CUS_CODE
      JOIN LINE ON LINE.INV_NUMBER = INVOICE.INV_NUMBER
      GROUP BY CUSTOMER.CUS_CODE) AS SUB;
##################################################################
#20
SELECT CUS_CODE, CUS_BALANCE 
FROM CUSTOMER
WHERE CUSTOMER.CUS_CODE IN (SELECT CUS_CODE FROM INVOICE);
##################################################################
#21
SELECT MIN(CUS_BALANCE) AS "Minimum Balance", MAX(CUS_BALANCE) AS "Maximum Balance", AVG(CUS_BALANCE) AS "Average Balance"
FROM (SELECT CUS_CODE, CUS_BALANCE
      FROM CUSTOMER
      WHERE CUSTOMER.CUS_CODE IN (SELECT CUS_CODE FROM INVOICE)) AS SUB;
##################################################################
#22
SELECT SUM(CUS_BALANCE) AS "Total Balances", MIN(CUS_BALANCE) AS "Minimum Balance", MAX(CUS_BALANCE) AS "Maximum Balance", AVG(CUS_BALANCE) AS "Average Balance"
FROM CUSTOMER;
##################################################################
#23
SELECT CUS_CODE, CUS_BALANCE
FROM CUSTOMER
WHERE CUSTOMER.CUS_CODE NOT IN (SELECT CUS_CODE FROM INVOICE);
##################################################################
#24
SELECT SUM(CUS_BALANCE) AS "Total Balance", MIN(CUS_BALANCE) AS "Minimum Balance", MAX(CUS_BALANCE) AS "Maximum Balance", AVG(CUS_BALANCE) AS "Average Balance"
FROM (SELECT CUS_CODE, CUS_BALANCE
      FROM CUSTOMER
      WHERE CUSTOMER.CUS_CODE NOT IN (SELECT CUS_CODE FROM INVOICE)) AS SUB;
##################################################################
#25
SELECT P_DESCRIPT, P_QOH, P_PRICE, P_QOH*P_PRICE AS SUBTOTAL
FROM PRODUCT
ORDER BY DESC SUBTOTAL;
##################################################################
#26
SELECT SUM(P_QOH*P_PRICE)
FROM PRODUCT;
##################################################################




