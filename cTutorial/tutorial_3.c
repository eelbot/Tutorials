#include <stdio.h>

/*
This tutorial will look at the basics of input and output,
and hopefully give a look into how to parse strange inputs,
which are very common in challenges.
*/

void output(void);
void input(void);

int main(void) {
	input();
	output();
	return 0;
}

void output(void) {
	// Let's look at output first, because you have total
	// control over it. Output is very straight forward. You can 
	// use printf() to output anything you want. 

	printf("Hello World");
	printf("Something else");

	// This is great, but printf() becomes useful when mixed
	// with the ability to output variables.

	// Variables can be denoted in your output string using the % symbol. 
	// Then, at the end of the string, your arguments are the 
	// variables that you intend to print. For example...
	int i = 125;
	char c = 'a';

	printf("%d, %c", i, c);

	// If you just need to output a string, you can use the puts() function.
	// The difference between this and the printf() function is that puts()
	// does not have a formatter. 
	puts("Hello World");
	puts("JUST A SIMPLE STRING HERE");

	// String formatters for printf() can be found all over the web, but here 
	// is a quick refresher course.
	// int : %d
	// decimal int : %u
	// octal int : %o
	// hex int : %x
	// float : %f
	// char : %c
	// string : %s
}

void input(void) {
	// Now we will take a look at input, which can be trickier. The easiest
	// form of input is gets(). This simply takes a string variables as it's
	// argument, and stores the next line entered in that string.
	char str[100];
	puts("Please enter a string: ");
	gets(str);

	// This method is great when you don't quite know what you will be receiving.
	// With gets(), you can do all your string processing afterwards.

	// The second option is scanf(). Much like printf(), scanf() accepts formatters
	// so that you can pick out specific variables from a string as it is entered.
	int a, b, c;
	printf("Please enter 3 integers, seperated by a space: ");
	scanf("%i, %i, %i", &a, &b, &c);

	// The string formatters for the input are the same as for output. 
	// One thing to note is when you "scan" the input, you are not 
	// giving it a variable to be stored in. You are giving an address
	// where you want to put the value. The fact that you put &a instead of
	// just "a" as a variable, means you want the number entered to be stored
	// in the spot that a is describing.

	// Now let's say that you have a string that is already within your program.
	// How do you parse it? With sscanf().
	// sscanf() works like scanf(), except the first argument is a string. This 
	// string is to sscanf() as the keyboard input is to scanf(). Let's look
	// at an example.
	char my_str[] = "Hello World, 15 May 1956 was a great day";
	int day, year;
	char month[12];
	char type_of_day[20];
	sscanf(my_str, "%*s %*s %d %s %d %*s %*s %s", &day, month, &year, type_of_day);
	printf("%s %d %d was %s", month, day, year, type_of_day);
}

