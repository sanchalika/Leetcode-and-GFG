# Write your MySQL query statement below
SELECT score, dense_rank() 
OVER (Order By score desc)
AS 'rank' from scores















