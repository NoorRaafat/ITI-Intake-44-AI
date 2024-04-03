import random

def random_word():
    words = ["apple", "banana", "programming", "python", "computer", "noor"]
    return random.choice(words)

def display_word(word, guessed_letters):
    display = ""
    for letter in word:
        if letter in guessed_letters:
            display += letter
        else:
            display += "_"
    return display

def hangman_game():
    print("Welcome to Hangman Game :) ")


    player_name = input("Enter your name: ")
    secret_word = random_word()
    guessed_letters = []
    attempts_left = 7

    print("Try to guess the word.")

    while attempts_left > 0:
        # State of the word
        current_display = display_word(secret_word, guessed_letters)
        print(f"\nCurrent word: {current_display}")

        # guess a letter
        guess = input("Guess a letter: ").lower()

        # guessed letter is in the word
        if guess.isalpha() and len(guess) == 1:
            if guess in guessed_letters:
                print("You guessed that before Try again")
            elif guess in secret_word:
                print("Correct guess!")
                guessed_letters.append(guess)
            else:
                print("Incorrect guess try again.")
                attempts_left -= 1
        else:
            print("Please enter a valid single letter")


        if "_" not in display_word(secret_word, guessed_letters):
            print(f"\nCongratulations, {player_name}! You guessed the word: {secret_word}")
            break

    if attempts_left == 0:
        print(f"\nSorry, {player_name} You ran out of attempt The word was: {secret_word}")


