CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    SET  N = N - 1; #Set N to N-1 for the offset
  RETURN (
      SELECT distinct(Salary) FROM Employee
      ORDER BY Salary DESC
      LIMIT N,1 # Select records from Nth position and only take 1 record. 
      
  );
END
