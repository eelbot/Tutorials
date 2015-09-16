operations = []
array_size = input()
cycl_array = input()

cycl_array = cycl_array.split()
cycl_array = list(map(int, cycl_array))

num_of_operations = input()

for i in range(0, num_of_operations):
    operations.append(int(input()))

next_array = cycl_array
for i in operations:
    for k in cycl_array:
        next_array
