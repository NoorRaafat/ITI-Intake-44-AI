import registeration
import loginn
print('**** welcome *******')
selection=input('please enter 1 for registration  or 2 for login')
if selection =='1':
    registeration.register()
elif selection == '2':
    loginn.login()