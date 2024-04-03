def longest_alphabetical_substring(s):
    current_substring = s[0]
    longest_substring = s[0]
    for i in range(1, len(s)):
        if ord(s[i]) >= ord(s[i - 1]):
            current_substring += s[i]
        else:
            current_substring = s[i]

        if len(current_substring) > len(longest_substring):
            longest_substring = current_substring

    return longest_substring

# Example usage
input_string = input('enter the string ')
result = longest_alphabetical_substring(input_string)
print("Longest substring in alphabetical order is:", result)