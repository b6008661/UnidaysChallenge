#if !defined(UserInterfaceH)
#define UserInterfaceH

#include "UnidaysDiscountChallenge.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <algorithm> 
#include <iomanip>
using namespace std;

class UserInterface
{
public:
	UserInterface();
	UnidaysDiscountChallenge example;
	vector<Item> pricingRules;
	void HoldWindow() const;
	void DisplayItems();
	void CreateUsersBasket();
	void CalculateTotal();
	void DisplayTotal();

private:
	double totalPrice;
	double deliveryCharge;
	double overallTotal;
	string input;
};

#endif
