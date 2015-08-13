"""
By this tutorial, you should have a solid grasp of Python syntax,
as well as a good idea of how you can use strings and lists in Python.
Topics: List and String methods, tuples, dictionaries
"""

# This tutorial will be a crash course in Python string and list functions and
# methods. More information is available on line for each of these functions.

a = [1, 2, 3]
b = [8, 2, 6, 4]
c = ["Hello", "World", "foo", "bar"]

# Find the length of a list
var = len(a)    # var = 3
var = len(c)    # var = 4

# Find the max or min value in a list
var = min(a)    # var = 1
var = min(c)    # var = "Hello"
var = max(b)    # var = 8
var = max(c)    # var = "foo"

# Sort a list
b.sort()        # b = [2, 4, 6, 8]
c.sort()        # c = ["Hello", "World", "bar", "foo"]

#------------------------------------------------------------------------------
# Now we will introduce 2 more data structures. The first is a tuple. A tuple is
# (for our intents and purposes) an immutable list. This means once we create a
# tuple, we cannot change values, or add or remove elements.
my_tuple = (1, 2, 3)

# As you can see, a tuple is declared with rounded brackets instead of square
# brackets.

# The other data type is dictionaries. Dictionaries are strucutures where
# data is contained in key:value pairs.
my_dict = {'Name':'Zara', 'Age':21, 'School':'Greendale'}

# You can access a dictionaries values by referencing it's keys.
c = my_dict['Name'] # c = 'Zara'
c = my_dict['Age']  # c = 21

# Adding a new element to a dictionary is done by simply referencing a
# key that does not already exist, and giving it a value.
my_dict['year'] = 2
        # my_dict = {'Name':'Zara', 'Age':21, 'School':'Greendale', 'year':2}

# Changing a value is just as easy
my_dict['year'] = 3
        # my_dict = {'Name':'Zara', 'Age':21, 'School':'Greendale', 'year':3}

# Remove elements in the dictionary by using the del keyword
del my_dict['year'] # my_dict = {'Name':'Zara', 'Age':21, 'School':'Greendale'}

#------------------------------------------------------------------------------
