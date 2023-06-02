SELECT * FROM Goals
WHERE goals_scored = (SELECT MAX(goals_scored) FROM Goals
WHERE goals_scored NOT IN (SELECT MAX(goals_scored) FROM Goals)) ORDER BY player;