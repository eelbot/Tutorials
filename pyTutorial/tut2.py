"""
This tutorial is going to cover very "pythonic" topics.
TOPICS: Lists, strings, dictionaries, "for"
"""

# Let's jump right in and declare a strings
mystr1 = "Hello World"
mystr2 = 'Hello World'

# Strings can be declared with double OR single quotes. These are identical.
# Also, Python does not have a seperate character type. Characters are
# just strings of length 1.

# Some math operators can be used with strings
a = "Hello"
b = "World"

c = a + b   # This is concatenation in Python. c = "HelloWorld"
c = a * 2   # c = "HelloHello"

# Strings can be indexed using bracket notation
c = a[1]    # c = "e"
c = b[4]    # c = "d"

# Python also allows for negative indexing. Negative indeces start counting
# from the right instead of the left, beginning at -1
c = a[-1]   # c = "o"
c = b[-3]   # c = "r"

# Another major feature of python is "slice" notation. Using this notation,
# you can slice a section out of a string. The slice includes the first index,
# goes UNTIL the last index, but does not include the character at the last
# index. Ommitting an index defaults that side of the slice to the beginning
# or end of the string.
c = a[1:4]  # c = "ell"
c = b[2:4]  # c = "rl"
c = a[1:]   # c = "ello"
c = b[:3]   # c = "Wor"

# The final operators for strings are "in" and "not in". These check for
# membership and non-membership respectively
c = "ell"

c in a      # True
c not in b  # True

# One final concept to understand about strings is the formatting operators.
# These are used when injecting a variable into a string.
c = "My name is %s and I am %d years old" % ('Zara', 21)

# The above declaration is similar to C, and many of the operators are
# the same as C as well.

#----------------------------------------------------------------------------

# A major data structure in Python is the sequence. There are several types of
# sequences, but the main ones are lists and tuples. Below we will look at lists

# Lists are incredibly versatile. They are simply collections of variables. They
# can be indexed and sliced, and can have many other things done to them. Below
# are a few basic list declarations.
list1 = [1, 2, 3, 4, 5]
list2 = ["eggs", "spam", "tomato", "apple"]
list3 = ["Hello", "World", 1, 578]

# As you can see, lists are created by placing comma seperated values between
# square brackets.
# list3 gives a good example of storing multiple data types in a single list.
# Lists share some similarties with strings.

# Lists can be indexed.
c = list1[2]    # c = 3
c = list2[3]    # c = "apple"
c = list3[0]    # c = "Hello"

# Lists can be sliced
c = list1[1:3]  # c = [2, 3]
c = list2[:2]   # c = ["eggs", "spam"]
c = list3[2:4]  # c = ["World", 1]

# There are several ways to manipulate a list.
#First, you may want to change a value at a certain index.
list1[0] = 45   # list1 = [45, 2, 3, 4, 5]
list2[3] = "HI" # list2 = ["eggs", "spam", "tomato", "HI"]

# Second, you may want to remove an element. You can do this with the "del"
# keyword/command
del list1[0]    # list1 = [2, 3, 4, 5]
del list3[3]    # list3 = ["eggs", "spam", "tomato"]

# There are several operations that you can perform on lists.
a = [1, 2, 3]
c = len(a)      # Get the length of a list. c = 3
c = a + [4, 5, 6] # Concatenate a list. c = [1, 2, 3, 4, 5, 6]
c = ["Hello"] * 3 # Multiples of a list. c = ["Hello", "Hello", "Hello"]
1 in a            # True
6 not in a        # True

#------------------------------------------------------------------------------
# The final topic in this tutorial is for statements. Python for statements are
# different from other programming languages, in that they iterate over
# the items in a sequence. This is an incredibly useful feature, though it does
# take some getting used to.
a_list = [1, 2, 3, 4, 5, 6]
b_list = ["Hello", "World", "foo", "bar"]

for item in a_list:
    print(item)

# This is a very basic for loop. For every item in a_list, do something. As the
# loop travels through the list, item = 1, then item = 2, then item = 3, etc.
# For example, let's say you wanted to print the second letter of every word
# in a list.
for i in b_list:
    print(i[1])

# There are still ways to iterate over a range of numbers. We can accomplish the
# same thing that we were trying to do above, but it is not very Pythonic.
for i in range(0, len(b_list) - 1):
    print(b_list[i])

# That's all for this tutorial.
