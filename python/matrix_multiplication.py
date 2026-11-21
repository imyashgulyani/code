import numpy as np

rows1 = int(input("Enter number of rows for matrix 1: "))
cols1 = int(input("Enter number of columns for matrix 1: "))

matrix1 = np.zeros((rows1, cols1), dtype=int)

print("Enter matrix 1 elements:")
for i in range(rows1):
    for j in range(cols1):
        matrix1[i][j] = int(input(f"Enter element [{i}][{j}]: "))

rows2 = int(input("Enter number of rows for matrix 2: "))
cols2 = int(input("Enter number of columns for matrix 2: "))

if cols1 != rows2:
    print("Matrix multiplication not possible! Columns of matrix 1 must equal rows of matrix 2.")
else:
    matrix2 = np.zeros((rows2, cols2), dtype=int)

    print("Enter matrix 2 elements:")
    for i in range(rows2):
        for j in range(cols2):
            matrix2[i][j] = int(input(f"Enter element [{i}][{j}]: "))

    result = np.zeros((rows1, cols2), dtype=int)

    for i in range(rows1):
        for j in range(cols2):
            for k in range(cols1):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

    print("\nMatrix 1:")
    print(matrix1)
    print("\nMatrix 2:")
    print(matrix2)
    print("\nResult of Matrix Multiplication:")
    print(result)
