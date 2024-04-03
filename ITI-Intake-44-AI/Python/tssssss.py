# Function to check if the input has a valid email format
def is_valid_email(email):
    # Basic email format check without regular expressions
    return '@' in email and '.' in email.split('@')[-1]

# Ask for the user's name
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