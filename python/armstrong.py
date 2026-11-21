num=153
num_str = str(num)
power = len(num_str)
total = 0
for digit in num_str:
    total += int(digit) ** power
if num == total:
    print(num, "is an Armstrong number")
else:
    print(num, "is NOT an Armstrong number")