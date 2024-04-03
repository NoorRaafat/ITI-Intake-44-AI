def addUser(userdata):
    userdata = userdata.strip(" \n")
    userdata = f"{userdata}\n"
    try:
        with open('users.txt','a') as usrfile:
            usrfile.write(userdata)
            return True
    except Exception as e:
        return False