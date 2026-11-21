numbers = [1, 2, 3, 4]

tuple_numbers = tuple(numbers)
print("List to tuple:", tuple_numbers)

list_numbers = list(tuple_numbers)
print("Tuple to list:", list_numbers)

student = [("name", "Alex"), ("age", 20)]

student_dict = dict(student)
print("List to dictionary:", student_dict)