#if !defined(UnidaysDiscountChallengeH)
#define UnidaysDiscountChallengeH

#include "Item.h"
#include <vector>
#include <iostream>
#include <tuple>
using namespace std;

class UnidaysDiscountChallenge
{
public:
	UnidaysDiscountChallenge();
	UnidaysDiscountChallenge(vector<Item>);
	void AddToBasket(Item);
	pair<double, double> CalculateTotalPrice();

private:
	vector<Item> basket;
	vector<Item> pricingRules_;
	double CalculateTotal_A(int);
	double CalculateTotal_B(int);
	double CalculateTotal_C(int);
	double CalculateTotal_D(int);
	double CalculateTotal_E(int);
};

#endif