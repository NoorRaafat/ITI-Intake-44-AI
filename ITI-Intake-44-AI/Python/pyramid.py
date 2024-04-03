num= input("Please enter the number: ")
if num.isdigit():
    num=int(num)
for i in range(1, num + 1):
    space = ' ' * (num - i)
    astric = '*' * i
    print(space + astric)



