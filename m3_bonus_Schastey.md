# M3BONUS Conversation Prompts and Exploratory Notes

**Course:** CSC 134  
**Topic:** AI-Assisted Development - Craps Game  

---

## 1. Starting Prompt
> "I'm a first year C++ programmer, and we've just learned if statements. My instructor wanted me to ask you, as a C++ expert, how to build on that to make a simple game that does Craps. He said it's fine to use loops and functions, but don't get more complicated than that."

---

## 2. Follow-Up Prompts & AI Assistance Topics

* **Random Number Generation Function:**
  * *Prompt:* "How do I make a reusable function for rolling two dice using random numbers in C++?"
  * *Notes:* Implemented `srand(time(0))` to seed the RNG and `(rand() % 6) + 1` inside a standalone `rollDice()` function.

* **Input Validation & Replay Loops:**
  * *Prompt:* "How can I add a `while` loop to handle bad input if the user enters something other than 'y' or 'n'?"
  * *Notes:* Created a nested `while` loop that keeps prompting until the user enters a valid character.

* **Game Design Reflection:**
  * *Prompt:* "What makes a good simple text-based game in C++?"
  * *Notes:* Key elements incorporated were clear visual separation (ASCII borders), step-by-step interactive mechanics (press ENTER to roll), clear win/loss logic using `if/else`, and feedback on every turn.

---

## 3. Key C++ Concepts Applied
* **Functions:** `rollDice()` and `playCraps()` for structured, modular code.
* **Control Structures:** `if / else if / else` conditional branches for game state evaluation.
* **Loops:** `while` loops for game continuation and bad input handling.
* **RNG:** Standard library `<cstdlib>` and `<ctime>` for random die rolls.