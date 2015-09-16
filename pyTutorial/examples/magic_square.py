square_size = input()
square_size = int(square_size)
magic_square = []
for i in range(0, square_size):
    next_row = input()
    next_row = next_row.split()
    next_row = list(map(int, next_row))
    magic_square.append(next_row)



total_wrong_rows = 0
wrong_row_indeces = []

def sum_row(row):
    return sum(row)

def sum_col(matrix, column):
    column_sum = 0
    for i in matrix:
        column_sum += i[column]
    return column_sum

magic_sum = 0
anti_diagonal_sum = 0

# Calculate magic sum
i = 0;
for row in magic_square:
    magic_sum += row[i]
    i += 1

# test the anti-diagonal
i = -1
for row in magic_square:
    anti_diagonal_sum += row[i]
    i -= 1

if anti_diagonal_sum != magic_sum:
    total_wrong_rows += 1
    wrong_row_indeces.append(0)

# test the rows
for row in magic_square:
    if sum_row(row) != magic_sum:
        total_wrong_rows += 1
        wrong_row_indeces.append(magic_square.index(row))

# test the columns
for x in range(0, square_size):
    if sum_col(magic_square, x) !=  magic_sum:
        total_wrong_rows += 1
        wrong_row_indeces.append((x + 1) * -1)

# Give Results
print(total_wrong_rows)
if total_wrong_rows:
    wrong_row_indeces.sort()
    for i in wrong_row_indeces:
        print(i)
