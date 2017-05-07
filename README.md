# The C Programming Language
Reading the seminal (if not outdated) book by By Brian W. Kernighan and Dennis M. Ritchie.  

This book is a little outdated, but nevertheless, well written.  
For a list of C programming books: http://stackoverflow.com/a/562377/5225057  
For the C language standards: http://stackoverflow.com/a/83763/5225057  
For an overview of K&R vs other C standards: http://www.electronicdesign.com/dev-tools/what-s-difference-between-c-now-and-then  

# Chapter 1 - A Tutorial Introduction  
## 1.1 Getting Started  
As an example of what is now an "outdated" style of C in the book, the first exercise does not include declaring a functions return type and setting a return value:  
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
