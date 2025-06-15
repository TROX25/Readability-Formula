# Readability-Formula

This is a C program that analyzes the readability of a given block of text using the **Coleman–Liau Index**.

## 🧠 What It Does

- Prompts the user to enter a block of text.
- Counts:
  - Letters
  - Words
  - Sentences
- Calculates the **readability grade level** based on the **Coleman–Liau formula**:
  
<h3 align="center"><strong>index = 0.0588 × L - 0.296 × S - 15.8</strong></h3>

Where:

- `L` is the average number of letters per 100 words  
- `S` is the average number of sentences per 100 words

## 🖥️ Example Output

Text: Congratulations! Today is your day. You're off to Great Places!
Grade 3

## 🛠️ Technologies

- C
- Standard C libraries (`<stdio.h>`, `<ctype.h>`, etc.)
