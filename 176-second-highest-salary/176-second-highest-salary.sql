# Write your MySQL query statement below


SELECT max(salary) as SecondHighestSalary 
from Employee 
WHERE salary!=(SELECT max(salary) from Employee);