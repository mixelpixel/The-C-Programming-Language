# The C Programming Language
Reading the seminal (if not outdated) book by By Brian W. Kernighan and Dennis M. Ritchie, "[The C Programming Language](http://alvand.basu.ac.ir/~dezfoulian/files/Programming/Prentice%20Hall%20-%20The%20C%20Programming%20Language-%20Brian%20W.%20Kernighan,%20Dennis%20M.%20Ritchie,%202nd%20ed.,%20ISBN%20.pdf)", 2nd Edition, "ANSI C", 1988. "[Preface to the Digital Edition](http://ptgmedia.pearsoncmg.com/images/9780131103627/samplepages/0131103628.pdf)" by Brian Kernighan, 11/2012 - Rest in peace, Dennis Ritchie...  

This book is a little "outdated", but nevertheless, very well written. Click these links for an [overview of K&R vs other C standards](http://www.electronicdesign.com/dev-tools/what-s-difference-between-c-now-and-then); for a [list of C programming books](http://stackoverflow.com/a/562377/5225057); or, for the [C language standards](http://stackoverflow.com/a/83763/5225057).  
<details><summary> ...and for reference with tricky parts</summary><a href="http://www.eng.uerj.br/~fariasol/disciplinas/LABPROG/C_language/Kernighan_and_Ritchie/solved-exercises/solved-exercises.html/">Click this link for answers</a>.</details><br>  

# FWIW  
I am working with **Terminal.app** version 2.7.2 (388.1) on **macOS Sierra** version 10.12.4 (16E195). So far I am compiling the Exercise programs with `cc` like so: `$  cc hello.c`. I am running the resulting executable file like so: `$  ./a.out`. Nothing fancy.

# Chapter 1 - A Tutorial Introduction  
# 1.1 Getting Started  
As an example of what is now an "outdated" style of C in the book, [the first exercise](ch1/hello.c) does not include declaring a functions return type and setting a return value:  
```c
#include <stdio.h>

main()
{
  printf("hello, world\n");
}  
```
...functions should instead be written to the following form:  
```
return_type function_name( parameter list )
{
   body of the function
}
```
...like so:  
```c
#include <stdio.h>

int main()        // <--------- function return type declaration
{
  printf("hello, world\n");
  return 0;       // <-------------------- function return value
}
```
# 1.2 Variables and Arithmetic Expressions  
Converting Fahrenheit and Celsius with a "while" statement:  
[Fahrenheit to Celsius conversion: integer](ch1/FtoC.c)  
[Fahrenheit to Celsius conversion: floating-point](ch1/FtoC_float.c) (Exercise 1-3)  
[Celsius to Fahrenheit conversion: floating point](ch1/CtoF_float.c) (Exercise 1-4)  
# 1.3 The for statement  
[Fahrenheit to Celsius conversion with a "for" statement](ch1/FtoC_for.c)  
"The for statement is a loop, a generalization of the while. If you compare it to the earlier while, its operation should be clear. Within the parentheses, there are three parts, separated by semicolons. **The first part, the initialization**  
`fahr = 0`  
**is done once, before the loop proper is entered. The second part is the test or condition that controls the loop:**  
`fahr <= 300`  
**This condition is evaluated; if it is true, the body of the loop (here a single ptintf) is executed. Then the  
increment step**  
`fahr = fahr + 20`  
**is executed, and the condition re-evaluated. The loop terminates if the condition has become false.** As with the while, the body of the loop can be a single statement or a group of statements enclosed in braces. The initialization, condition and increment can be any expressions.  
The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place."  
[Fahrenheit to Celsius conversion with a "for" statement](ch1/FtoC_for_reverse.c) (Exercise 1-5)  
# 1.4 Symbolic Constants  
[Fahrenheit to Celsius conversion using SYMBOLIC CONSTANTS](ch1/FtoC_for_SYMBOL.c)  
# 1.5 Character Input and Output  
c = getchar();  
putchar(c); - "Calls to putchar and printf may be interleaved"  
## 1.5.1 File Copying  
```
read a character  
    while (character is not end-of-file indicator)
        output the character just read
        read next character
```

1. I am a little confused about how "file" is being used for "file input" and how "character" is being used - `getchar();` appears to read in an entire line of text in the while loop, and not "one char at a time" nor one "file" at a time... Perhaps this is just loose use of terms (or my loose understanding), but I am left a little confused as to newline vs. EOF.  
2. Exercise 1-6's evaluation results in 0 or 1, but EOF - per Exercise 1-7 - has a value of -1. Okay... so EOF = -1 and `getchar() != EOF` evaluates to either 0 (false) or 1 (true)... So why/how does ctrl+d = -1? I see that ctrl+c and ctrl+z don't evaluate they simple exit from the program. Ah-ha - it appears that C simply does not have a type class of Boolean and achieves a true/false distinction where zero is false and non-zero is true. Per: https://www.le.ac.uk/users/rjm1/cotter/page_37.htm But why/how does `getchar() = EOF` always evaluate to -1?  

[file input version 1](ch1/file_copying_v1.c)  
[file input version 2](ch1/file_copying_v2.c)  
[Exercise 1-6](ch1/Ex1-6.c)  
[Exercise 1-7](ch1/Ex1-7.c)  
