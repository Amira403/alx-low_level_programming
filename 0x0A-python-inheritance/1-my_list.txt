============================================
How to use 1-my_list.txt
============================================

This library is very simple, since it only has one function called
 ''print_sorted()''.

Numbers:
========
''print_sorted()'' returns the list sorted.
:: with positives integers
   >>> MyList = __import__('1-my_list').MyList
   >>> my_list = MyList()
   >>> isinstance(my_list, list)
   True
   >>> my_list.print_sorted()
   []

:: adding items in the list
   >>> my_list.append(7)
   >>> my_list.append(3)
   >>> my_list.append(1)
   >>> my_list.print_sorted()
   [1, 3, 7]

:: whit zero values
   >>> my_list.append(0)
   >>> my_list.print_sorted()
   [0, 1, 3, 7]

:: with infinite integer
   >>> my_list.append(int('inf'))
   Traceback (most recent call last):
   ValueError: invalid literal for int() with base 10: 'inf'

:: with negative values
   >>> my_list.append(-15)
   >>> my_list.print_sorted()
   [-15, 0, 1, 3, 7]

:: when repeat an element
   >>> my_list.append(-15)
   >>> my_list.append(0)
   >>> my_list.append(7)
   >>> my_list.print_sorted()
   [-15, -15, 0, 0, 1, 3, 7, 7]

:: when all elementes in the list are the same
   >>> my_list.clear()
   >>> my_list.append(5)
   >>> my_list.append(5)
   >>> my_list.append(5)
   >>> my_list.append(5)
   >>> my_list.append(5)
   >>> my_list.print_sorted()
   [5, 5, 5, 5, 5]

:: with a max integer
   >>> my_list.append(10000000000000000000000000000000000000000000)
   >>> my_list.print_sorted()
   [5, 5, 5, 5, 5, 10000000000000000000000000000000000000000000]

:: wiht None value
   >>> my_list.append(None)
   >>> my_list.print_sorted()
   Traceback (most recent call last):
   TypeError: unorderable types: NoneType() < int()

:: wiht NULL value
   >>> my_list.append(NULL)
   Traceback (most recent call last):
   NameError: name 'NULL' is not defined
