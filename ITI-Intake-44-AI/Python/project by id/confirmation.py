import re

def is_valid_email(email):
    # Regular expression for basic email validation
    pattern = r'^\S+@\S+\.\S+$'
    return re.match(pattern, email) is not None


while True:
    name = input("What's your name? ")
    if name and not name.isspace():
        break
    else:
        print("Please enter a valid name.")

# Ask for the user's email
for _ in range(3):  # Allow up to 3 attempts
    email = input("Thanks, {}! What's your email? ".format(name))
    if is_valid_email(email):
        break
    else:
        print("Please enter a valid email address.")

# Print the collected data
print("Name: {}".format(name))
print("Email: {}".format(email))