-- Last updated: 5/2/2026, 11:28:56 pm
 
SELECT p.firstName, p.lastName, a.city, a.state
FROM Person p
LEFT JOIN Address a
ON p.personId = a.personId;
