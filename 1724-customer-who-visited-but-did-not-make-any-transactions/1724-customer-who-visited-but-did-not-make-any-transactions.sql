# Write your MySQL query statement below

SELECT v.customer_id, COUNT(customer_id) as count_no_trans FROM Visits v 
LEFT JOIN
Transactions ON v.visit_id = Transactions.visit_id WHERE Transactions.visit_id is NULL
GROUP BY customer_id; 