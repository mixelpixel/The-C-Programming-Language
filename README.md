# The C Programming Language
Reading the seminal (if not outdated) book by By Brian W. Kernighan and Dennis M. Ritchie, "[The C Programming Language](http://alvand.basu.ac.ir/~dezfoulian/files/Programming/Prentice%20Hall%20-%20The%20C%20Programming%20Language-%20Brian%20W.%20Kernighan,%20Dennis%20M.%20Ritchie,%202nd%20ed.,%20ISBN%20.pdf)", 2nd Edition, "ANSI C", 1988. "[Preface to the Digital Edition](http://ptgmedia.pearsoncmg.com/images/9780131103627/samplepages/0131103628.pdf)" by Brian Kernighan, 11/2012 - Rest in peace, Dennis Ritchie...  

This book is a little "outdated", but nevertheless, very well written. Click these links for an [overview of K&R vs other C standards](http://www.electronicdesign.com/dev-tools/what-s-difference-between-c-now-and-then); for a [list of C programming books](http://stackoverflow.com/a/562377/5225057); or, for the [C language standards](http://stackoverflow.com/a/83763/5225057).  

# FWIW  
1. I am working with **Terminal.app** version 2.7.2 (388.1) on **macOS Sierra** version 10.12.4 (16E195). So far I am compiling the Exercise programs with `cc` like so: `$  cc hello.c`. I am running the resulting executable file like so: `$  ./a.out`. Nothing fancy.  
2. Note: in general if there are quote marks around a sentence or long passage, it is from the K&R text, tho I will try and clearly indicate like so: "quoted text"(K&R).
<details><summary> ...and for reference with tricky parts</summary><a href="http://www.eng.uerj.br/~fariasol/disciplinas/LABPROG/C_language/Kernighan_and_Ritchie/solved-exercises/solved-exercises.html/">Click this link for answers</a>.</details><br>  


# Chapter 1 - A Tutorial Introduction  
# 1.1 Getting Started  
As an example of what is now an "outdated" style of C in the book, [the "Hello, world!" program](ch1/1.1_hello.c) does not include declaring a functions return type and setting a return value:  
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
   function return value
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
Also, per [this Stack Overflow answer](http://stackoverflow.com/a/12225214/5225057) it is also the convention that C programs should be written with main(void), e.g.  
```c
#include <stdio.h>

int main(void)    // <--------- explicit statement of calling main with no variables
{
  printf("hello, world\n");
  return 0;
}
```
[see §5.1.2.2.1 Program startup, paragraph 1 (pg.13)](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf):  
"1 The function called at program startup is named main. The implementation declares no prototype for this function. It shall be defined with a return type of int and with no parameters:  
`int main(void) { /* ... */ }`"  
...and [§6.7.6.3 6.7.6.3 Function declarators (including prototypes), Semantics, paragraph 10 (pg.133)](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf):  
"10 The special case of an unnamed parameter of type void as the only item in the list specifies that the function has no parameters."  
[Hello, World!](ch1/1.1_hello.c)  
### Exercise 1-1
[See what errors you can get](ch1/1.1_ex1-1_hello.c)  
### Exercise 1-2
[Try out valid and invalid escape characters](ch1/1.1_ex1-2_hello.c)  
# 1.2 Variables and Arithmetic Expressions  
The following are examples of a "pre-test loop" - as contrasted to a "post-test loop", e.g. a ["Do while loop"](ch3).  
```
    while ( test condition ) {
        Code to execute while the test condition is satisfied
    }
```
Converting Fahrenheit and Celsius with a "while" statement:  
[Fahrenheit to Celsius conversion: integer](ch1/1.2_FtoC.c)  
### Exercise 1-3
[Fahrenheit to Celsius conversion: floating-point](ch1/1.2_ex1-3_FtoC_float.c)  
### Exercise 1-4
[Celsius to Fahrenheit conversion: floating point](ch1/1.2_ex1-4_CtoF_float.c)  
# 1.3 The for statement  
```
    for (initialization prior to loop; test condition controls loop; incremental step after loop body action)  
        action;
```
[Fahrenheit to Celsius conversion with a "for" statement](ch1/1.3_FtoC_for.c)  
Also a "pre-test loop", "The for statement is a loop, a generalization of the while. If you compare it to the earlier while, its operation should be clear. Within the parentheses, there are three parts, separated by semicolons. **The first part, the initialization**  
`fahr = 0`  
**is done once, before the loop proper is entered. The second part is the test or condition that controls the loop:**  
`fahr <= 300`  
**This condition is evaluated; if it is true, the body of the loop (here a single ptintf) is executed. Then the  
increment step**  
`fahr = fahr + 20`  
**is executed, and the condition re-evaluated. The loop terminates if the condition has become false.** As with the while, the body of the loop can be a single statement or a group of statements enclosed in braces. The initialization, condition and increment can be any expressions.  
The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place."(K&R)
### Exercise 1-5  
[Fahrenheit to Celsius conversion with a "for" statement](ch1/1.3_ex1-5_FtoC_for_reverse.c)  
Some additional references for a [" while loop in C"](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm), ["for, while, and do while loops in C"](http://www.cprogramming.com/tutorial/c/lesson3.html), and ["if statements in C"](http://www.cprogramming.com/tutorial/c/lesson2.html), especially in regards to "true" (a non-zero value) and "false" (zero).
# 1.4 Symbolic Constants  
[Fahrenheit to Celsius conversion using SYMBOLIC CONSTANTS](ch1/1.4_FtoC_for_SYMBOL.c)  
# 1.5 Character Input and Output  
c = getchar(); - Assigns to `c` the value of `getchar();` input  
putchar(c); - "Calls to putchar and printf may be interleaved"  
"A text stream is a sequence of characters divided into lines; each line consists of zero or more characters followed by a newline character...The standard library provides several functions for reading or writing one character at a time, of which getchar and putchar are the simplest. Each time it is called, getchar reads the next input character from a text stream and returns that as its value."(K&R)  
## 1.5.1 File Copying  
```
read a character() <----- Do K&R mean "text stream" by "character"?
{
    declare variable type;
    initialize variable to get character;
    while (character is not end-of-file indicator) {
        output the character just read;
        read a character;
    }
    return value;
}
```

1. I am a little confused about how "file" is being used for "file input" and how "character" is being used - `getchar();` appears to read in an entire line of text in the while loop, and not "one char at a time" nor one "file" at a time... Also, it seems to only read so far as a "new line" or "Enter" (not sure how they differ?) Perhaps this is just loose use of terms (or my loose understanding), but I am left a little confused as to what the type "char" means, and, how K&R are using "file" and "character". Also not solid on newline (10) vs. EOF (-1) ...but it's working. Mostly I am thrown by K&R's description of char. Perhaps I'll understand better by [Chapter 7](ch7/) when input from files is discussed.  
2. Exercise 1-6's evaluation results in 0 or 1, but EOF - per Exercise 1-7 - has a value of -1. Okay... so EOF = -1 and `getchar() != EOF` evaluates to either 0 (false) or 1 (true)... So why/how does ctrl+d = -1? I see that ctrl+c and ctrl+z don't evaluate, they simple exit from the program. Ah-ha - it appears that C simply does not have a type class of Boolean and achieves a true/false distinction where zero is false and non-zero is true. Per: https://www.le.ac.uk/users/rjm1/cotter/page_37.htm But why/how does `getchar() = EOF` always evaluate to -1? Ahhh ::facepalm:: I was doing an assignment of c = EOF (resulting in c having the EOF value of -1) instead of a comparison operator `==`... it should be `getchar() == EOF`. And we're good: ctrl+d enters an EOF value of -1 and the equals/not equals evaluations are consistent as true (1, or not zero) and false(0). Not sure why \\n newline has a value of 10, but will save that question for later.    

[file input version 1](ch1/1.5.1_file_copying_v1.c)  
[file input version 2](ch1/1.5.1_file_copying_v2.c)  
### Exercise 1-6
[Verify that the expression getchar() != EOF is 0 or 1.](ch1/1.5.1_ex1-6.c)  
### Exercise 1-7
[Print the value of EOF](ch1/1.5.1_ex1-7.c)  
## 1.5.2 Character Counting  
Recall from [Section 1.3 The for statement](https://github.com/mixelpixel/The-C-Programming-Language#13-the-for-statement) the for-loop syntax:  
```
    for (initialization prior to loop; test condition controls loop; incremental step after loop body action)  
        action; /* for loop body. after the pre-test condition test or an incremental step, condition  
                   is re-evaluated and the action repeated or exited if test condition not satisfied */  
```
Note: "...the grammatical rules of C require that a for statement have a body. The isolated semicolon, called a null statement, is there to satisfy that requirement. We put it on a separate line to make it visible."(K&R) e.g.  
```
#include <stdio.h>

int main(void)
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;       /* <--------------------------- NULL STATEMENT */
        printf("%.0f\n", nc);
}
```
[counting input characters version 1](ch1/1.5.2_char_count_v1.c)  
[counting input characters version 2](ch1/1.5.2_char_count_v2.c)  
## 1.5.3 Line Counting  
"the standard library ensures that an input text stream appears as a sequence of lines, each terminated by a newline."(K&R)  
[count lines in input](ch1/1.5.3_line_count.c)  
### Exercise 1-8
[count blanks, tabs and lines](ch1/1.5.3_ex1-8.c)  
An interesting solution to exercise 1-8, the program handles input from text files which do not end with a new line](http://www.eng.uerj.br/~fariasol/disciplinas/LABPROG/C_language/Kernighan_and_Ritchie/solved-exercises/solved-exercises.html/krx108.html).  
### Exercise 1-9  
[1-9](ch1/1.5.3_ex1-9.c)
### Exercise 1-10
[1-10](ch1/1.5.3_ex1-10.c)
