-- Last updated: 7/17/2026, 4:27:52 PM
SELECT 
    Person.firstName,
    Person.lastName,
    Address.city,
    Address.state
FROM Person
LEFT JOIN Address
ON Person.personId = Address.personId;