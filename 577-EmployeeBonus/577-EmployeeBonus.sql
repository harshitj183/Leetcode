-- Last updated: 5/2/2026, 11:27:30 pm
SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b ON e.empId = b.empId
  WHERE b.bonus < 1000 OR b.bonus IS NULL;
