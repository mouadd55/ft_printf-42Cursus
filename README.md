
<div align=center >
<h1>ft_printf</h1>
<a href="https://imgbb.com/"><img src="https://i.ibb.co/9VBP6Hk/ft-printf-badge.png" alt="ft-printf-badge" border="0"></a>
</div>

## _42cursus' project_



The **printf** function is one of the most versatile and well-known functions in the C language.From a testing aid to tabulation method, printf is a very powerful and important tool in everydev's kit. This project aims to recreate the behaviour of the original MacOS's printf, including its basic error management, minimum field width stipulation and most of itsbasic conversions.

---

## Subject

Write a lib with ft_printf function that will mimic the real printf.

#### Allow Function

```c
malloc(), free(), write(), va_start(), va_arg(), va_copy(), va_end()
For detailed information, refer to the [**subject of this project**](ft_printf.pdf).
```
### Mandatory
> <i>A small description of the required conversion:
>
> - `%c` print a single character.
> - `%s` print a string of characters.
> - `%p` The void * pointer argument is printed in hexadecimal.
> - `%d` print a decimal (base 10) number.
> - `%i` print an integer in base 10.
> - `%u` print an unsigned decimal (base 10) number.
> - `%x` print a number in hexadecimal (base 16).
> - `%%` print a percent sign.</i>

---
## What is ft_printf?
This project is about recoding the famous printf C function to learn variadic functions and improve algorithmic methodology.
```c
int ft_printf(const char *format, ...);
```

ft_printf can print different contents depending on conversions.
See below what are conversions.

## Conversions

| Conversion  | Description														 			| Project 		|
|-------|-----------------------------------------------------------------------------------|---------------|
| **c** | Single ascii character         													|Mandatory		|
| **s** | String of characters NULL terminated												|Mandatory		|
| **p** | Pointer location converted to hexadecimal value									|Mandatory		|
| **d** | Decimal number 																	|Mandatory		|
| **i** | Integer in decimal base                 											|Mandatory		|
| **u** | Unsigned integer in decimal base                									|Mandatory		|
| **x** | Unsigned number printed in lowercase hexadecimal base                				|Mandatory		|
| **X** | Unsigned number printed in uppercase hexadecimal base                				|Mandatory		|
| **%** | The '%' ascii character                 											|Mandatory		|

---

## Usage

You can try our project with the following commands:

First, clone the repository

```sh
git clone https://github.com/mouadd55/ft_printf-42Cursus.git
cd ft_printf-42Cursus
make
```

#### Conversion type

- [`ft_print_char`](ft_print_char.c)
- [`ft_print_dec`](ft_print_dec.c)
- [`ft_print_ptr`](ft_print_ptr.c)
- [`ft_print_str`](ft_print_str.c)
- [`ft_print_unnbr`](ft_print_unnbr.c)
- [`ft_print_hexa`](ft_print_hexa.c)
