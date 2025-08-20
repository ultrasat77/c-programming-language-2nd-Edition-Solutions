# First, save the current terminal settings so you can explicitly restore them
# Or, more simply for "sane" mode, you can just use stty sane.
# For more precise control, you'd save with 'stty -g' and restore later.

# Set a trap to restore terminal settings on EXIT
trap 'stty sane' EXIT

# Now, set your terminal to raw mode (no echo)
stty raw -echo

# Compile 1-10.c
gcc 1-10.c -o 1-10.exe

# Make the compiled program executable (gcc usually sets executable bit by default but just to make sure)
chmod +x 1-10.exe

# Run the Executable
./1-10.exe

# When you're done, type 'exit' or press **Ctrl+D to exit the shell.
# The trap will then execute 'stty sane' before the shell exits.
# **Note: Ctrl+D only works for Mac and Linux, if you are using MinGW on Windows, you must press Ctrl+Z
