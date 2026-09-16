SELECT email FROM Person
GROUP BY email
having count(email) > 1