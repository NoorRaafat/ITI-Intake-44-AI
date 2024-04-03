num= input("Please enter the number: ")
if num.isdigit():
    num=int(num)
def fizz_buzz(n):
        # Check if i is divisible by both 3 and 5
        if n % 3 == 0 and i % 5 == 0:
            res="fizzbuz"
        elif n % 3 == 0:
            res="fizz"
        elif n % 5 == 0:
            res="buzz"
        else:
            res="not any of them "
        return res
n = 20
# Call the fizz_buzz function to get the result
result = fizz_buzz(n)
print(result)


