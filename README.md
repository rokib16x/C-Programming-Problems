# A program to create the following BD Covid Case Tracking System

In this simple system, we will track the number of COVID patients of different cities of Bangladesh.
The following menu will always be displayed except if exited by pressing ‘q’.

======= BD Covid Case Tracking System =========

• Enter ‘a’, to take the number of COVID patients of all cities into “patients” array of size N.

• Enter ‘b’, to find the average number of patients of all the cities.

• Enter ‘c’, to count and display the # of cities which have above average COVID patients.

• Enter ‘q’, to quit/exit the menu system.

• For any other input, display “Invalid Input.”

After the menu is displayed, the program will prompt
the user “Enter your choice: “ to enter a choice from the menu.
After a user enters his choice, the program will act according to the menu choice mentioned above.

That means, if a user enters ‘a’,
your program will take the number of COVID patients of
all the cities into the “patients” array from the keyboard.
If user enters ‘c’, it will count and display the # of cities
which have above average number of COVID patients.
For choice ‘c’, it also needs to compute the average number of
patients of all cities. For choices ‘b’ and ‘c’,
the program needs to check whether the number of COVID patients of
all the cities are already populated into the “patients” array or not.
If not populated, it will display “No patients information is found. Please populate patients information first.”
Use switch case to handle the choice options entered by the user. Do not use library functions to find average.
