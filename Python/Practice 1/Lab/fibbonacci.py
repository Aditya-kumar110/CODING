initial = 0
second = 1
n = int(input("Enter number of terms to include: "))

if n >= 1:
    print(initial)
if n >= 2:
    print(second)

for i in range(3, n + 1):
    last = initial + second
    print(last)
    initial = second
    second = last