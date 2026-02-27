list_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
squares = [x*x for x in list_numbers if x%2==0]
for i in squares:
    print(i)