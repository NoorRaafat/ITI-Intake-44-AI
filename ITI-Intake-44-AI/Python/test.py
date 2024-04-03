string_with_vowels = input("Please enter the string: ")
lst = list(string_with_vowels)
print(lst)

string_without_vowels = []

for i in range(len(lst)):
    if lst[i] not in list1:
        string_without_vowels.append(lst[i])

print(string_without_vowels)
