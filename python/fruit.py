fruits = ["apple", "banana", "cherry"]
print("Initial list:")
for fruit in fruits:
    print(fruit)
fruits.append("orange")
print("\nAfter adding orange:")
for fruit in fruits:
    print(fruit)
fruits.remove("banana")
print("\nAfter removing banana:")
for fruit in fruits:
    print(fruit)