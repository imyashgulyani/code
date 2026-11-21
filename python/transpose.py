import numpy as np
rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))
matrix = np.zeros((rows, cols), dtype=int)
print("Enter matrix elements:")
for i in range(rows):
    for j in range(cols):
        matrix[i][j] = int(input(f"Enter element [{i}][{j}]: "))
print("\nOriginal Matrix:")
print(matrix)
transposed = np.zeros((cols, rows), dtype=int)
for i in range(rows):
    for j in range(cols):
        transposed[j][i] = matrix[i][j]
print("\nTransposed Matrix:")
print(transposed)
