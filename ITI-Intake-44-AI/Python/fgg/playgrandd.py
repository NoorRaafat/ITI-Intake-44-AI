def check_user_name():
    name = input("input your name ")
    while not name.isalpha():
        print("you must enter a valid name")
        name = input("please enter your name no space no digit and not empty")
    return name

# ----------------------------------------------------------------------------------------------

def check_char(t):
    print("attempt num {}".format(t))
    char = input("guess any alphabet ")
    while not char.isalpha():
        char = input("you must enter a valid char ")

    while True:
        if len(char) == 1:
            break
        else:
            print('NO!!!! Enter a single alphabet')
            char = input("you must enter a valid char ")
    return char

# ----------------------------------------------------------------------------------------------
def char_match(random_word ,character):
    for vIndx in range(len(random_word)):
        if character == random_word[vIndx]:
            print("match in pos ",vIndx+1)
        else:
            continue

# ----------------------------------------------------------------------------------------------


words_list = {"camel", "elephant", "banana", "python", "random", "Palestine", "freedom"}
random_word = words_list.pop()
print(random_word)

name = check_user_name()
print("Hi {} you have only 7 attempts to guss the word\n".format(name))
for t in range(1,7):

    character = (check_char(t))
    char_match(random_word, character)