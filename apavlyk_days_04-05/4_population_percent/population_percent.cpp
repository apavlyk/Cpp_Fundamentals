#include <iostream>
const float perc = 100.0;

int main()
{
	using namespace std;
	long long world_population, us_population;
	cout << "Enter the world's population: ";
	cin >> world_population;
	cin.get();
	cout << "Enter the population of the US: ";
	cin >> us_population;
	cin.get();
	cout << "The population of the US is " << us_population * perc / world_population << "% of the world population.";
	cin.get();
	return 0;
}