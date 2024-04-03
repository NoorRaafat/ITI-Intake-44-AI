print("Enter the String: ")
text = input()
vowels = ['a', 'e', 'i', 'o', 'u']
newtext = ""
textlen = len(text)

for i in range(textlen):
    if text[i] not in vowels:
        newtext = newtext + text[i]

print("\nString after removing Vowels: ")
text = newtext
print(text)