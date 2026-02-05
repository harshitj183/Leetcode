-- Last updated: 5/2/2026, 11:28:53 pm
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
DETERMINISTIC
BEGIN
  DECLARE result INT;
  
  SET N = N - 1; 

  SELECT DISTINCT salary INTO result
  FROM Employee
  ORDER BY salary DESC
  LIMIT 1 OFFSET N;

  RETURN result;
END;
