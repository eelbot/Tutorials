/*
Basic C concepts have been explained, and so we now move on
to some of the trickier concepts in C. We will talk about strings 
and pointers.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	// This is neat...but let's move straight to the examples and
	// practice code
	printf("Hello World...2!");

	return 0;
}

void entering_the_matrix(void) {
	// In C arrays are data structures than can hold a fixed
	// number of sequential elements of the same type.

	// Defining an array can take two forms. First, you can
	// directly assign an array values by setting it equal
	// to a list of values between curly braces. Or, you can
	// just set the length of the array by putting it between the square 
	// brackets.
	int a[] = {1, 2, 3, 4, 5};// declaring and initializing and array
	int b[5];				// declaring an array with fixed size

	// To refer to a specific member of an array, you must use "index
	// notation". Indeces start at 0, and the index is put in 
	// square brackets directly after the variable name.
	// e.g.: my_array[index]
	int c = a[1];	// c = 2
	int d = b[0];	// d = 0 (Since empty arrays elements are initialzied to 0

	// 2 and higher dimensional arrays are easy to create in C
	int the_matrix[5][5];

	// When accessing a 2D array element, the row comes first, then the column.
	c = the_matrix[1][4];	// Takes the fifth element from the second row
}

void strings_and_things(void) {
	// In C, strings are simply arrays if characters. This means that 
	// everything that applies to arrays will apply to strings.

	// As one would expect, since a string is an array of characters,
	// that is how to define one. The difference is that the value of
	// character array can be wrapped in double quotes instead of list
	// style in curly brace format
	char words[] = "Hello World";
	
	char third_letter = words[2]; // third_letter = 'l'

	// It is important to remember that strings are always terminated
	// automatically by the null character, '\0'
}

void just_string_things(void) {
	// This section will serve to be a brief overview of string methods
	// in C. These functions are contained in the string.h header,
	// so be sure to import it before you start trying to use them!

	char word1[] = "Hello ";
	char word2[] = "World";
	char word3[6];

	strcpy(word3, word2);	// Copies word2 into word3. word3 = "World"
	strcat(word1, word2);	// Copies word2 onto the end of word1.
							// word1 = "Hello World"
	strlen(word2);			// Gives the length of a string (6).
	strcmp(word1, word2);	// Returns 0  if the same.
}

void its_rude_to_point(void) {
	// Some consider pointers one of the most difficult concepts in
	// the C programming language. Hopefully the explanation
	// below makes them slightly easier to understand.

	// When programming in C, one must always be thinking of memory
	// use and allocation. When memory is being allocated and 
	// deallocated is left up to the programmer.

	// A pointer is a variable that points to the address in memory
	// of another variable. There are a couple of symbols that are
	// associated with pointers. The * symbol is how you define a pointer.
	int *p;		// This pointer's value will be the address of another int variable
	char *q;	// This one's will b the address of a char variable
	double *r;	// This will be the address of a double variable.

	// The second symbol that is associated with pointers is the &
	// symbol. This symbol, when put in front of a variable, will
	// give the address of the variable. For example, if my_int is 
	// and integer, &my_int is the address of my_int.
	int a;
	char b;
	double c;

	// This is what it looks like to give a pointer a value.
	p = &a; // Now p is equal to the address of a.

	// If we wanted, we could print the address of a
	printf("%x\n", p); // We use %x so the address is displayed in hex

	// We can also print a itself, using the * symbol
	printf("%d\n", *p);

	// These concepts can be confusing, and so far we have not touched on
	// how to use pointers effectively. For the very short term, you will
	// not need to use them, and so hopefully this very short introduction
	// gives you something to think about when you encounter pointers later.
}