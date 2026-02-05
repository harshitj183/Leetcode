-- Last updated: 5/2/2026, 11:28:52 pm
SELECT 
    score,
     DENSE_RANK() OVER (ORDER BY score DESC) AS `rank`
          FROM 
    Scores
                        ORDER BY 
    score DESC;
