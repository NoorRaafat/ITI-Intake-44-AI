num = int(input("Please enter the num: "))
lst2 = []
for i in range(1, num + 1):
    lst1 = []
    for j in range(1, i + 1):
        lst1.append(i * j)
    lst2.append(lst1)

print(lst2)




