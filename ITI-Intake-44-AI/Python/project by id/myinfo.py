import re
def getname(message="please enter your frist name \n"):
    while True:
        name=input(message)
        if name.isalpha():
            return name
        else:
            print("error input")



def get_email():
    while True:
        try:
            email = input("Please enter your email: ")
            if re.match(r'^\S+@\S+\.\S+$', email):
                return email
            else:
                raise ValueError("Error: Please enter a valid email address.")
        except ValueError as e:
            print(e)

def get_password():
    while True:
        try:
            password = input("please enter your pass ")
            if len(password) >= 6:
                return password
            else:
                raise ValueError("Error: Password must be at least 6 characters.")
        except ValueError as e:
            print(e)

def get_mobile():
    while True:
        try:
            mobile = input("Please enter your mobile phone (Egyptian numbers only): ")
            if re.match(r'^01[0-2]\d{8}$', mobile):
                return mobile
            else:
                raise ValueError("Error: Please enter a valid Egyptian mobile phone number.")
        except ValueError as e:
            print(e)
























