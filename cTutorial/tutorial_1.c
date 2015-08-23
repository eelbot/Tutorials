/*
Welcome to a crash course on C programming! These tutorials are not
meant to teach someone how to create functioning programs, or how
to become a developer. What they ARE meant to do is give an intro to
the syntax of the language, as well as some relevant concepts so you can
get your feet wet. 

Let's get started!
*/

// The giant paragraph above is a multi-line comment. Everything between
// the /* and */ is ignored by the compiler, and is just there to help 
// other programmers understand your code when they look at it later.

// This is a single line comment.

// When working with C, you have to import functions that are relevant
// to the work you are trying to do. These functions are imported by 
// including a file at the top of your program, as below.
#include <stdio.h>

int main(void) {
	// Every C program starts with the main() function. The code in
	// here is what runs when you press "run"
	
	// We will go over what happens below later.
	printf("Hello World!");

	getchar();
	return 0;
}

void defining_variables() {
	// In C variable definition consists of two parts. The type, and the
	// variable name. eg:
	// type variable_name

	// There are two basic types in C. Integer types and floating point
	// types. Let's take a closer look at the integer types
	int a;			// The simplest variable definition; no assignment
	int b = 0;		// Variable definition with assignment
	int c = 1, d = 0;	// Multiple variables initialized on a single line
	
	char letter = 'c';	// char only takes up a single byte
						// The thing to remember about char is that it 
						// is an 8 bit numeric value as well
	
	short little_number = 32766; // 2 bytes
	long big_number = 2000000000;// 4 bytes

	// Now let's take a look at the float type.
	float pointy_number = 4.7; // max 6 decimal place precision
	double big_pointy_number = 1.77777777777; // 8 bytes!

	// CRITICAL POINTS: The data types to remember are char, int,
			// float, and double
}

void math_operations() {
	// Let's take a quick look at doing math in C. 

	// First let's declare some basic variables to work with.
	int a = 2, b = 5;
	char letter = 'a';
	int c;
	
	// The operations below showcase 2 things. First, the show
	// how you can assign a variable a value.
	c = a + b;	// Addition. c = 7
	c = a - b;	// Subtraction. c = -3
	c = a * b;	// Multiplication. c = 10
	c = b / a;	// Remember how division works on ints. c = 2
	c = b % a;	// Modulo operation. c is remainder. c = 1
	a--;		// Decrement. a = 1
	a++;		// Increment. a = 2
}

void making_decisions() {
	// Defining variables and doing math is fine, but programming 
	// languages become useful when you can make decisions in the 
	// program. Below are some ways of making decisions

	int a = 1, b = 0;	// In C, 0 = false, and any non-zero value is
						// equal to true.

	// The first main statement used for decision making is the if
	// statement. If statements can be nested, and involve three 
	// possible parts: if, else if, and else.
	if (b) {
		printf("b is True");
	}
	else if (a) {
		printf("a is True");
	}
	else {
		printf("NOTHING IS TRUE");
	}

	// The statement above will output "a is True"
	
	// C has several relational operators. Relational operators 
	// are used to compare two things.
	if (b == a) { printf("b == a"); }	// Is equal to
	if (b != a) { printf("b != a"); }	// Does not equal
	if (b < a) { printf("b < a"); }		// Less than
	if (b > a) { printf("b > a"); }		// Greater than
	if (b <= a) { printf("b <= a"); }	// Less than or equal to
	if (b >= a) { printf("b >= a"); }	// Greater than or equal to

	// C also has several logical operators
	if (!b) { printf("b is False"); }	// Logical inversion. NOT
	if (b && a) { printf("b AND a are True"); } // AND
	if (b || a) { printf("b OR a are True"); }  // OR

	// There are two more types of decision making statements in C. 
	// The first is the switch/case statement. Generally everything 
	// that can be done in a switch case statement can be done in an
	// if statement.
	char letter = 'x';
	switch (letter) {
	case 'z':
		printf("Your letter is z");
		break;
	case 'x':
		printf("Your letter is x");
		break;
	case 'c':
		printf("Your letter is c");
		break;
	default:
		printf("Just look at your letter");
		break;
	}

	// The final decision statement is the conditional operator, or '?:'
	a = 0;
	b = 1;
	int c;
	c = (a == 0 ? 1 : 0); // This statement is equivalent to "c = !a;"
	// The way that this works is first the condition on the left is
	// evaluated. If it is true, the expression "returns" the first value.
	// If it is not, it returns the second value. See below for the statement
	// in "if ... else if " form
	if (a == 0) {
		c = 1;
	}
	else {
		c = 0;
	}


}

void looping_practice(void) {
	// Loops are used to execute a piece of code for a set number
	// of times, or until a condition becomes true.

	// The first type of loop is the for loop. For loops are useful for 
	// iterating over a sequence of numbers

	// For loops consist of three parts: initialization, condition, and increment.
	// First you initialize the thing the for loop will look at, then
	// you tell it when to stop, and then you define what happens to
	// the variable every times the loop is exectued.
	for (int i = 0; i < 100; i++) {
		printf("%d", i);
	}

	// while loops can be used to loop until a condition is met. The
	// most important part is to remember to include an end condition. 
	// Do not make an infinite loop. (Unless you meant to...)
	int x = 0;
	while (x < 100) {
		printf("%d", x);
		x++;
	}

	// do while loops will always execute the loop once before checking
	// their condition, and are very similar to while loops
	do {
		printf("%d", x);
		x--;
	} while (x > 0);
}