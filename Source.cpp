#include <iostream>
#include <cstring>
class ElectroFuel
{
public:
	void info() {
		std::cout << "electric fuel" << std::endl;
	}
};
template <typename T>
class Vehicle
{
public:
	void printFuelInfo() {
		_fuel.info();
	}
private:
	T _fuel;
};
template<typename T>
class electricBicycle : public Vehicle<ElectroFuel>
{
public:
	void printBicycleInfo() {
		std::cout << "Name electric Bicycle: “Tornado”." << std::endl;
	}
};
/// <summary>
template<typename ...T>
class Summary
{
public:
	double sum_all(T...args) {
		return (args + ...);
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	electricBicycle <std::string>  inf;

	inf.printBicycleInfo();
	inf.printFuelInfo();


	Summary< int, double, float>  r;
	std::cout << r.sum_all(100, 2.34, 2.3);

	return 0;
}