total = 0
count = 0

while True:
    user_input = input("Enter a number or type 'done' to finish ")

    if user_input.lower() == 'done':
        break

    else:
        if user_input.isdigit():
            number = int(user_input)
            number = float(user_input)
            total += number
            count += 1
        else :
            print("Error: Please enter a valid number.")

if count > 0:
    average = total / count
    print("\nTotal: {}".format(total))
    print("Count: {}".format(count))
    print("Average: {:.2f}".format(average))
else:
    print("No valid numbers entered.")