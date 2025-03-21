# 42_Dr_Quine


### RULES

Comments should like this: 
```c
/*
    this is a comment
*/
```

And macro should be like this:
```c
#include
#define FT(x)int main(){ /* code */ }
[..]
FT(xxxxxxxx)
```



## PART 1: Colleen

- The executable must be named `Colleen`

The source code must contain at least :
- A main function.
- Two different comments.
- One of the comments must be present in the main function
- One of the comments must be present outside of your program.
- Another function in addition to the main function (which of course will be
called)

## PART 2: Grace

- The executable must be named `Grace`.
- When executed, the program writes in a file named Grace_kid.c/Grace_kid.s
the source code of the file used to compile the program.
- The source code must strickly contain :
    - No main declared.
    - Three defines only.
    - One comment.
- The program will run by calling a macro


## PART 3: Sully


- The executable must be named `Sully`.
- When executed the program writes in a file named `Sully_X.c/Sully_X.s`. The
X will be an interger given in the source. Once the file is created, the program
compiles this file and then runs the new program (which will have the name of its
source file).
- Stopping the program depends on the file name : the resulting program will be
executed only if the integer X is greater or equals than 0.
- An integer is therefore present in the source of your program and will have to
evolve by decrementing every time you create a source file from the execution of
the program.
- You have no constraints on the source code, apart from the integer that will be
set to 5 at first.

## RESSOURCES

- [Quine on 42 intra](https://elearning.intra.42.fr/notions/dr-quine/subnotions/dr-quine/videos/dr-quine)
- [Exemple of Quine in C](https://www.youtube.com/watch?v=gCY_K3lQ_qk)
- [Preprocessor macro](https://www.youtube.com/watch?v=cmGq62c1Ceg)