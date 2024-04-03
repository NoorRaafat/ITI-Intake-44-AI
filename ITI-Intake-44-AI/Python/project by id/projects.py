import datetime
import re
def projctTitle():
    while True:
        title=input('please enter the project title')
        if title=="":
            print('title field is required')
        else:
            return title
            break
def total():
    while True:
        total_target=input('enter your total target')
        if not total_target.isdigit()
            print("enter valid total target")
        else:
            return total_target
            break
def projDetal():
    while True:
        details=input('please enter the details')
        if details=="":
            print('title field is required')
        else:
            return details
            break


def validate_date_format(date_string):
    date_pattern = re.compile(r'^\d{4}-\d{2}-\d{2}$')

    if date_pattern.match(date_string):
        return True
    else:
        return False
# user_input = input("Enter a date (YYYY-MM-DD): ")
#
# if validate_date_format(user_input):
#     print("Valid date format.")
# else:
#     print("Invalid date format.")


















