"""
At this point simple scripts in Python should be an attainable goal. Solving
problems should be within your grasp. The final part of the puzzle
is creating functions, and taking input.

Topics: functions, input, output
"""

# In Python, functions are created with the 'def' keyword. They are given
# a name, and then arguments are defined. Finally, they may return a value.
def print_greeting():
    print("Hello")

# This simple function shows the basic syntax. However, say we wanted to define
# a function that is slightly more useful.
def fibonacci_seq(cap):
    a, b = 1, 1
    while b < cap:
        a, b = b, a + b
    return a

# The function above is given a maximum number as an argument, and returns
# the largest fibonacci number beneath that cap. As this function shows, there
# are no brackets on the return statement.

# Function calls are also very simple
fibonacci_seq(100)
print_greeting()

#------------------------------------------------------------------------------

# The final thing to examine is input and output. For the purposes of this
# tutorial, we will only be focusing on a single form of input.

# The function used to get input from the keyboard is 'input()'. This
# function takes a string argument, which will appear as a prompt. everything
# is collected by this function, until the user presses return. To collect the
# data, assign a variable to the input call.
response = input("Please enter a number")
print("Your number is: " + response)

# The important thing to remember is that input() always returns a string. Even
# though we asked them to enter a number, the computer simply understands to
# get everything as a string.

# To convert our response to a number, we can typecast variables to change
# them how want.
int(response)   # converts our input to an integer
float(response) # converts our input to a float
str(response)   # converts our input back to a string

#-----------------------------------------------------------------------------
# This concludes our crash course into Python! Many resources are available
# online, and while you will probably have a solid understanding of Python
# syntax, there are many areas of Python to learn before building a
# full fledged application.

# Happy coding!
