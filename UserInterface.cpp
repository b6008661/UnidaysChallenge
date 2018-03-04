#include "UserInterface.h"

//set up pricing rules within a vector in the constructer
UserInterface::UserInterface() : pricingRules({ Item("A", 8.00, "NONE"), Item("B", 12.00, "2 for 20.00"), 
	Item("C", 4.00, "3 for 10.00"), Item("D", 7.00, "Buy 1 get 1 free"), Item("E", 5.00, "3 for the price of 2")})
{
	example = UnidaysDiscountChallenge(pricingRules);
}

void UserInterface::DisplayItems()
{
	//grid to show items and delivery charge
	cout << "\tItem \t\t Price \t\t Discount\t\t\tDelivery Charge: "<< char(156) << "7:00. Over " << char(156) << "50: Free";
	for (int row(0); row < 5; row++)
	{
		cout << "\n\n\t" + pricingRules.at(row).GetName() << "\t\t" << char(156) << fixed << setprecision(2) << 
			pricingRules.at(row).GetPrice() << "\t\t" << pricingRules.at(row).GetDiscount() << "\n";
	}


	cout << "\n\n\n";
	cout << "\n\tEnter all of the items you would like to add to your basket using the appropriate characters: ";
	cin >> input;
	transform(input.begin(), input.end(), input.begin(), ::toupper); //change to upper case to remove confusion
}

void UserInterface::CreateUsersBasket()
{
	for (int i = 0; i < input.length(); i++)
	{
		for (int v = 0; v < pricingRules.size(); v++)
		{
			string item = pricingRules.at(v).GetName();
			if (item[0] == input[i])
			{
				example.AddToBasket(pricingRules.at(v));
			}
		}

	}
}

void UserInterface::CalculateTotal()
{
	auto result = example.CalculateTotalPrice(); //get the two return values from the calculate total price function

	totalPrice = result.first; //take first value and save in totalPrice
	deliveryCharge = result.second; //take the second value and save in delveryCharge

	overallTotal = totalPrice + deliveryCharge; //calucalute the total price for the whole order
}

void UserInterface::DisplayTotal()
{
	//grid to show basket, total and delivery charge
	cout << "\n\tItems\t\tTotal\t\tDelivery Charge\t\tOverall Total\n";
	cout << "\n\t" << input << "\t\t" << char(156) << fixed << setprecision(2) << totalPrice << "\t\t" 
		<< char(156) << fixed << setprecision(2) << deliveryCharge << "\t\t\t" << char(156) << fixed 
		<< setprecision(2) << overallTotal;

}
void UserInterface::HoldWindow() const {
	cout << "\n\n";
	system("pause");
}

