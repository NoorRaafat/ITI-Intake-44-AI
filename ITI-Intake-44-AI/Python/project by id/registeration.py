import myinfo
import adduser

def register():
    fistname=myinfo.getname()
    lastname=myinfo.getname("please enter last name")
    email=email=myinfo.get_email()
    password=myinfo.get_password()
    mobil=myinfo.get_mobile()
    prepared_data=f"{fistname}:{lastname}:{email}:{password}:{mobil}"
    saved=adduser.addUser(prepared_data)















