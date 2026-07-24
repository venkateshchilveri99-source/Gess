
Copy Content
        try:
            prompt = "\nEnter your guess (1-100)"
            if attempts >= 3:
                prompt += " or type 'HINT' for a clue"
            prompt += ": "
            
            user_input = input(prompt).strip().upper()
            
            if user_input == "HINT":
                if attempts < 3:
                    print("❌ Hints are locked! Make at least 3 attempts first.")
                else:
                    clue = get_hint(target, attempts, hints_used)
                    hints_used += 1
                    print(f"💡 HINT: {clue}")
                continue
                
            guess = int(user_input)
            
            if guess < 1 or guess > 100:
                print("❌ Out of bounds! Please enter a number between 1 and 100.")
                continue
                
            if guess in guesses:
                print(f"❌ You already guessed {guess}! Try a different number.")
                continue
                
            guesses.add(guess)
            attempts += 1
            
            if guess == target:
                print(f"\n🎉 CORRECT! You guessed the number in {attempts} attempts!")
                break
            elif guess > target:
                print("Too High! Try a smaller number ↓")
            else:
                print("Too Low! Try a bigger number ↑")
                
        except ValueError:
            print("❌ Invalid input! Please enter a valid integer or 'HINT'.")
if __name__ == "__main__":
    while True:
        play_game()
        again = input("\nPlay again? (y/n): ").strip().lower()
        if again != 'y':
            print("Thanks for playing!")
            break

}
}
return 0;
}