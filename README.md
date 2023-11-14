###0x11. C - printf project

<B>Group Team Project: JIHANE & IHSSAN</B>

# Description project
This team project is part of the curriculum of ALX. 
the function _printf replicates the C standard library printf() function.


#What you should learn from this project:

How to use git on a team
Applying variadic and recursives functions to solve big project
to know the complexities of printf function and the different parameters whithin the execution
Managing many files to do hard thing  and finding a good workflow
how to use flowchart to solve project

#<B>Authorized functions and macros</B>
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

##specifiers

Specifier                |Output                        |Examples |
|----------------|-------------------------------|-----------------------------|
| `c` | Character | y |
| `d` or `i` | Signed integer | 1024, -1024 |
| `s` | String of characters | Hello Holberton |
| `b` | Binary Representation of unsigned integer | 01010110 |
| `u` | Unsigned integer | 1024 |
| `o` | Unsigned octal | 432 |
| `x` | Unsigned hexadecimal integer | 3ca |
| `X` | Unsigned hexadecimal integer (uppercase) | 3CA |
| `S` | String with hex-ascii value replacing special chars | \x0A\x0A |
| `p` | Pointer address | 0x403212 |
| `r` | Reversed string of characters | dlroW olleH |
| `R` | ROT13 Translation of string | Uryyb |

### THE TASKS PROJECT
<B>TASK 0.
I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life </B>
Write a function that produces output according to a format.
You need to handle the following conversion specifiers:
	c : converts input into a character
	s : converts input into a string
	% : print % character

<B>Task 1.
Education is when you read the fine print. Experience is what you get if you don' t </B>
Handle the following conversion specifiers:
	d : converts input into a base 10 integer
	i : converts input into an integer

<B>TASK 2.
With a face like mine, I do better in print</B>
Handle the following custom conversion specifiers: 
	b: the unsigned int argument is converted to binary.

<B>TASK 3.
What one has not experienced, one will never understand in print</B>
Handle the following conversion specifiers: 
	u : converts the input into an unsigned integer
	o : converts the input into an octal number
	x : converts the input into a hexadecimal number
	X : converts the input into a hexadecimal number with capital letters

<B>TASK 4.
Nothing in fine print is ever good news</B>
Use a local buffer of 1024 chars in order to call write as little as possible.

<B>TASK 5.
My weakness is wearing too much leopard print</B>
Handle the following custom conversion specifier:
	S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

<B>TASK6.
How is the world ruled and led to war? Diplomats lie to journalists and believe t hese lies when they see them in print</B>
Handle the following conversion specifier:
	p: int input is converted to pointer adress

<B>TASK 7.
The big print gives and the small print takes away</B>
Handle the following flag characters for non-custom conversion specifiers:
\+
space
\#

<B>TASK 8.
Sarcasm is lost in print</B>
Handle the following length modifiers for non-custom conversion specifiers:
l, h.  h:Conversion specifiers to handle: d, i, u, o, x, X

<B>TASK 9.
Print some money and give it to us for the rain forests</B>
Handle the field width for non-custom conversion specifiers.

<B>TASK 10.
The negative is the equivalent of the composer's score, and the print the performance</B>
Handle the precision for non-custom conversion specifiers.

<B>TASK 11.
It's depressing when you're still around and your albums are out of print</B>
Handle the 0 flag character for non-custom conversion specifiers.

<B>TASK 12.
Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection</B>
Handle the - flag character for non-custom conversion specifiers.

<B>TASK 13.
Print is the sharpest and the strongest weapon of our party</B>
Handle the following custom conversion specifier:r: prints the reversed string

<B>TASK 14.
The flood of print has turned reading into a process of gulping rather than savo ring</B>
Handle the following custom conversion specifier:

<B>TASK 15*.
All the above options work well together.</B>
Well done on completing this project! Let the world hear about this milestone achieved.
