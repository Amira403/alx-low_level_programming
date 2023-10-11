============================================
How to use 7-base_geometry.py
============================================

This library is very simple, since it only has one function called
 ''integer_validator()''.

Numbers:
========
''integer_validator()'' returns True if a num is integer.
:: with positives integers
   >>> BaseGeometry = __import__('7-base_geometry').BaseGeometry
   >>> bg = BaseGeometry()

:: with positive integer
   >>> bg.integer_validator("my_int", 12)

:: with negative integer
   >>> bg.integer_validator("number", -12)
   Traceback (most recent call last):
   ValueError: number must be greater than 0

:: with 3 arguments
   >>> bg.integer_validator("numbers", 0, 1)
   Traceback (most recent call last):
   TypeError: integer_validator() takes 3 positional arguments but 4 were given

:: with infinite integer
   >>> bg.integer_validator("infnumber", int('inf'))
   Traceback (most recent call last):
   ValueError: invalid literal for int() with base 10: 'inf'
