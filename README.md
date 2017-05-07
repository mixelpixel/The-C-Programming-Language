# The C Programming Language
Reading the seminal (if not outdated) book by By Brian W. Kernighan and Dennis M. Ritchie, "[The C Programming Language](http://alvand.basu.ac.ir/~dezfoulian/files/Programming/Prentice%20Hall%20-%20The%20C%20Programming%20Language-%20Brian%20W.%20Kernighan,%20Dennis%20M.%20Ritchie,%202nd%20ed.,%20ISBN%20.pdf)", 2nd Edition, "ANSI C", 1988. "[Preface to the Digital Edition](http://ptgmedia.pearsoncmg.com/images/9780131103627/samplepages/0131103628.pdf)" by Brian Kernighan, 11/2012 - Rest in peace, Dennis Ritchie...  

This book is a little "outdated", but nevertheless, very well written. Click these links for an [overview of K&R vs other C standards](http://www.electronicdesign.com/dev-tools/what-s-difference-between-c-now-and-then); for a [list of C programming books](http://stackoverflow.com/a/562377/5225057); or, for the [C language standards](http://stackoverflow.com/a/83763/5225057)  

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
[Fahrenheit to Celsius conversion: floating-point](ch1/FtoC_float.c)  
[Celsius to Fahrenheit conversion: floating point](ch1/CtoF_float.c)  
# 1.3 The for statement  
[Fahrenheit to Celsius conversion with a "for" statement](ch1/FtoC_for.c)  
"The for statement is a loop, a generalization of the while. If you compare it to the earlier while, its operation should be clear. Within the parentheses, there are three parts, separated by semicolons. **The first part, the initialization**  
fahr = 0  
is done once, before the loop proper is entered. **The second part is the test or condition that controls the loop:**  
fahr <= 300  
**This condition is evaluated; if it is true, the body of the loop (here a single ptintf) is executed. Then the  
increment step  
   fahr = fahr + 20  
is executed, and the condition re-evaluated. The loop terminates if the condition has become false.** As with the while, the body of the loop can be a single statement or a group of statements enclosed in braces. The initialization, condition and increment can be any expressions.  
The choice between while and for is arbitrary, based on which seems clearer. The for is usually appropriate for loops in which the initialization and increment are single statements and logically related, since it is more compact than while and it keeps the loop control statements together in one place."  
