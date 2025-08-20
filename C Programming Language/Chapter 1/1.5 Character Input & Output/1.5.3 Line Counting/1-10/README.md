# Excersize 1-10

**Problem**: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. 
This makes tabs and backspaces visible in an unambiguous way.

There are 2 ways of running this program, one is by running the **run\_in\_raw.sh** file.
And the other way is by compiling and executing the **1-10.c** file.

The reason I have split this up is to showcase how the program would work if the terminal was set to **raw** mode as opposed to **canonical**.

# Raw vs. Canonical

**Canonical**: this is the mode default to most terminals, in which the terminal accepts input on a line-by-line basis. The issue is the terminal handles the editing
of the line itself, so there is no way to capture a '\b' from the input. Each line is processed after the user presses enter.

**Raw**: in raw mode, the terminal accepts input on a character-by-character basis. It allows for each character to be processed right after you type it, allowing the program to spontaneously check for '\b'
in the input.
