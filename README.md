# Files-and-Linear-Search
2# Assignment #2

Instructions
Write a program that allows the user to search through a list of names stored in a file for a particular one. (Make sure to allow the user to tell you the name of their file and to check for file open errors.) The names in the file will be stored one per line (spaces are allowed in the names). You won't know the length of the list of names ahead of time.

Your search must be case insensitive.

Make sure to adequetly stest your program! (Empty data set, find first item, find last item, find a few in the middle, etc.)

Don't forget to read the file's name from the user and protect your program against any errors that may occur during the opening of the file.

Bob Smith
Mary Jones
Tammy Henry
Rob Smith
and a sample run might look like:

Please enter the name of your names file:  bob.dat
I'm sorry, I could not open 'bob.dat'.

Please enter another name: names
File 'names' opened successfully!

What name would you like to find in this file?  tammy henry
'Tammy Henry' is the 3rd name in the file!
Don't forget about when the name isn't in the file.
