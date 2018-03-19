#include <iostream>		//for output and input
#include <string>		//for string
#include <sstream>		//for streamstring
using namespace std;

//include class modules
#include "UserInterface.h"

int main()
{
	UserInterface ui;
	bool run = true;
	//show to items available with their detail, delivery charge and ask user for input
	while (run == true)
	{
		ui.DisplayItems();

		//take user input and add all items to the basket
		ui.CreateUsersBasket();

		//calculate any discounts, total price of basket and delivery charge
		ui.CalculateTotal();

		//display basket and total to the user
		ui.DisplayTotal();

		//ask user if they would like to make a new order
		run = ui.AskAgain();
	}

	ui.HoldWindow();
	return 0;
}