def login():

    email=input('enter your email')
    password=input('enter your password')
    with open("users.txt", "r") as file:
        Flag = False
        line=file.readline()
        for line in file:
            user_data = line.split(':' )
            print(user_data)
            if user_data[2] == email and user_data[3] == password:
                Flag = True
                print(f"\nLogin successful .welcome , {user_data[0]} ")
                break

        if not Flag:
            print("Login failed Invalid email or password")