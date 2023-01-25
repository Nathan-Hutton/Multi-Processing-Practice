# Multi-Processing-Practice
Practice with multi processing in Operating Systems class. Practice using fork() and exec() commands.

The Collatz Conjecture is where if you take any number, and if it is even, you divide it by 2. If it is odd you multiply it by 3 and add 1. Continuing to do this will eventually return 1.

lab1a.c uses fork() to create a child process which does the logic of the of the Collatz Conjecture.
collatz.c is just the logic portion of the Collatz Conjecture which takes 1 command line argument, the number your applying the Collatz Conjecture to.
lab1b.c calls collatz (the executable for collatz.c if you choose to call it collatz) in the child process so that the code is more clean.
