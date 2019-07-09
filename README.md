# Tablets-Stock-Game

Tablets Stock Game is played as follows: 
•	You start the game with N Tablets, 0 < N <= 10,000. 
•	You may ask for or give back Tablets according to these rules: 
◦ If the number of Tablets you have is an odd number, increment the number of Tablets by 1 and then you can turn in (remove) exactly half the Tablets you have. 
◦ If the number of Tablets you have is a multiple of 3, you can ask for (receive) third as many Tablets as you currently have.  
◦ You can always ask for (receive) exactly 24 Tablets. 
•	There is no priority among the rules; you may choose any rule that applies in a given situation. 
•	The number of Tablets you hold must always be greater than 0 and can never be more than 10,000. 
•	The object of the game is to end with exactly 18 Tablets in no more than 21 moves. 
Your program will ask the user for the starting number of Tablets, and then use a recursive function to search for a solution. 
