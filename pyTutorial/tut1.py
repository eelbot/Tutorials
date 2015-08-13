"""
Welcome to python! Python is a high level programming language, and
most of the knowledge that you have from previous programming
experience can be applied here.

For this first tutorial, we are going to review basic python syntax.
Along the way, we will be using C as a comparison, as most people
should be familiar with it from their courses.
"""

# First things first, this is a single line comment. You denote
# single line comments with the octothorpe, or "pound symbol"
# Now, let's get something out of the way.
print("Hello World!")

# That's it. If you run that single line of code, it will work perfectly.
# If that was all there was in a .py file, it would output "Hello World"
# to the console! We will learn more about python syntax and strings later.

# But first...Let's declare a variable!
a = 5

# Let's take a moment and dissect some things that may look new
#   1.  There is no type declaration. In python, you just give a
#       variable name and a value in order to declare a variable
#   2.  No semi-colons! In python, there are no semi-colon's to declare
#       the end of a statement. A new statement is denoted by a new line

# Let's delve a little deeper into...
#   .......NUMBERS........

# The first data type is "Number"
# Here are a couple number declarations
var1 = 10       # This is a basic, integer declaration
var2 = 10.0     # This is a float declaration. Python notices the decimal point!
var3 = 10L      # This is a long declaration.
var4 = 10 + 2j  # Python also has complex number support. This is how.

# These declarations are pretty straight forward. Let's take a look at some
# arithmetic operations.
a = 2
b = 5
c = a + b   # Addition. c = 7
c = a - b   # Subtraction. c = -2
c = a * b   # Multiplication. c = 10
c = a / b   # Division. c = 0.4. Remember, Python detects the proper type!
c = b % a   # Modulus. c = 1
c = a ** b  # Exponent. Equal to a ^ b. c = 32
c = b // a  # Floor division. Quotient with the decimal removed. c = 2

# Now that variable declarations are under control, at least for numbers,
# We will take a look at some program flow control.

# Let's make an if statement!
a = 2   # First let's declare some variables
b = 5
if a == b:
    print("Equal")

# Lots of new Python syntax!
#   1.  There are no brackets around the comparison. (You can put them if
#       you feel like it)
#   2.  There are no curly braces! In Python, blocks of code are denoted by
#       putting an indent of 4 spaces on the next line.

# Now take an if/else if block
if a == b:
    print("Equal")
elif a < b:
    print("A < B")
else:
    print("B > A")

# The code above is very straight forward. We start with if, and if that is
# not true, we move to "elif", which is Python's else if. Finally, the "else"
# statement.

# For a little more understanding, let's rewrite the code with
# a nested if statement
if a != b:
    if a < b:
        print("A < B")
    else:
        print("A > B")
else:
    print("Equal")

# Carefully go over the code above. Understand everything in it before you move
# on.
# Below is a quick review of the comparitive operators
a = 2
b = 5
a == b  # False
a < b   # True
a > b   # False
a >= b  # False
a <= b  # True
a != b  # True

# The last thing we will do for this tutorial is looking at while loops (for
# loops will come later)
x = 0
while x < 100:
    print(x)
    x += 1

# The above code is very straight forward. We let x = 0, and then declare a
# while loops that will stop at x == 100.
# It is important to note that Python DOES NOT HAVE INCREMENT/DECREMENT
# operators. x++  and x-- will return an error. You have to use x += 1 or
# x -= 1.

#Check out the next tutorial to really get into what makes Python great!
