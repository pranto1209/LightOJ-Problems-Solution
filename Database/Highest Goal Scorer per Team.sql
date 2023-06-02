SELECT player, team, goals_scored, played 
FROM Goals NATURAL JOIN 
(SELECT team, MAX(goals_scored) AS goals_scored FROM Goals GROUP BY team) AS Max_Goals
ORDER BY team, player;