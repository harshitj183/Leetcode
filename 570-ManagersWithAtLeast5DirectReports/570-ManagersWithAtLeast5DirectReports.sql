-- Last updated: 5/2/2026, 11:27:32 pm
# Write your MySQL query statement below
SELECT name 
FROM Employee 
WHERE id IN (
        SELECT managerId 
            FROM Employee 
                GROUP BY managerId 
                    HAVING COUNT(*) >= 5
);

