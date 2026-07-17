-- Last updated: 7/17/2026, 4:27:51 PM
# Write your MySQL query statement below
SELECT e1.name As Employee
FROM Employee e1
JOIN Employee e2
ON e1.managerId = e2.id
WHERE e1.salary > e2.salary