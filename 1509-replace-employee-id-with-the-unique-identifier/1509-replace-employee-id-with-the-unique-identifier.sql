select euni.unique_id as unique_id, e.name as name from employees e
left join employeeuni euni
on e.id = euni.id;