#include <iostream>		//for output and input
#include <string>		//for string
#include <sstream>		//for streamstring
using namespace std;

//include class modules
#include "UserInterface.h"

int main()
{
	UserInterface ui;
	//show to items available with their detail, delivery charge and ask user for input
	ui.DisplayItems();
	
	//take user input and add all items to the basket
	ui.CreateUsersBasket();

	//calculate any discounts, total price of basket and delivery charge
	ui.CalculateTotal();

	//display basket and total to the user
	ui.DisplayTotal();


	ui.HoldWindow();
	return 0;
}