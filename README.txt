UnidaysChallenge

How to run the code

When the program loads, choose the items wanted from the grid dislpayed and enter all of the items you wish to add to your basket.
Press enter.
Your basket, total before delivery, delivery charge and the overall total are displayed.


My approach

I chose to use C++ to create this object-oriented program. I started by deciding what objects I would have then began writing the 
definitions of the classes. I had an Item class that stored all the information that an item could need. A main class called 
UnidaysDiscountChallenge that holds the list of item and a basket that holds the items added by the user and use these to be able 
to calculate the total price including the discount and delivery charge. 
When writing the CalculateTotalPrice function, I decided it would be best to keep track of the quantity of each item in the users 
basket then call a separate function for each type of item to calculate the total for that item minus the discount. These functions 
then return the total and all the individual totals get added to an overall total. Once all discounts have been taken into account, 
a check is done to see if the total is over the limit for free delivery. The CalculateTotalPrice function then returns two values. 
I had never returned to values from a function before so I did some research and found the best way to do this was to declare a pair, 
then make the pair within the return statement. Both values can be accessed in the user interface class by using the dot operator 
followed by first for the first value in the pair and second for the second value. I needed a UserInterface class that requested the 
input from the user, call the appropriate function in the UnidaysDiscountChallenge class and outputted the result. 
Once I had finished coding, I then used the example test cases to test my program. I ran through them all with no problems however I 
decided it would be more beneficial for the user to see the complete total of everything so I added another column to my little table 
that displays the basket, the total of the basket including discounts and delivery charge. I added an overall total column that shows 
the sum of the total and delivery charge. I then started through the test cases again to ensure the last column worked properly.
I have come back to check everything still works perfectly before submitting and realised it would be beneficial to ask the user if 
they would like to create a new order and repeat the process. I have added this feature in. It has also helped looping through the test 
cases quicker. 