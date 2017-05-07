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
[Fahrenheit to Celsius conversion: integer](ch1/FtoC.c)  
[Fahrenheit to Celsius conversion: floating-point](ch1/FtoC_float.c)  
[Celsius to Fahrenheit conversion: floating point](ch1/CtoF_float.c)  
