# two-dice-simulation
This program silmulates the possiblilities with throwing two dices and adding the value together.
The dice_eyes is firstly dinfined and initilized.
After in select_random_eyes(), a number between 1-6 in chosen using rand() and modulus.
In throw_5000_times(), in a for-loop we start by chosing 2 random numbers using the function before, and adding the values together into totalNumber. The result is saved in an array.
in resultat(), the function returns the the value in percent. 
In main() we put all the functions together, where we firstly call srand of time, to create different seeds. Then we call trow_5000_times, and in a for-loop, the resultet and percent is printed in terminal using printf.
