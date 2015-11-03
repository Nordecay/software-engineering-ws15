#include "converter.hpp"

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "metertofootconverter.hpp"
#include "foottometerconverter.hpp"
#include "celciustofahrenheitconverter.hpp"
#include "fahrenheittocelciusconverter.hpp"
#include "ouncestogrammconverter.hpp"
#include "grammtoouncesconverter.hpp"

#include "tinytest.hpp"

#include "Factory.hpp"

#include "singleton.hpp"

#define DOUBLETOLLERANCE 0.001

#define TINYTEST_EQUAL_DOUBLE(expected, actual)						\
if (!(expected <= (actual + DOUBLETOLLERANCE) && expected >= (actual - DOUBLETOLLERANCE)))	\
{																							\
	printf("%s:%d expected %s, actual: %s\n", __FILE__, __LINE__, #expected, #actual);		\
	return 0;																				\
}

// ***************** old tests *****************
int DollarToEuroTest()
{
	dollarToEuroConverter* myConverter_ = new dollarToEuroConverter();
	double aLotOfEuros = myConverter_->convert(500);
	TINYTEST_EQUAL_DOUBLE(391.12, aLotOfEuros);
	
	return 1;
}

int EuroToDollarTest()
{
	EuroTodollarConverter* myConverter = new EuroTodollarConverter();
	double aLotOfDollars = myConverter->convert(600);
	TINYTEST_EQUAL_DOUBLE(767.028,aLotOfDollars);
	return 1;
}

int MetertToFoot()
{
	//Meter to Foot
	metertofootconverter* myConverter = new  metertofootconverter();
	double foot_ = myConverter->convert(10);
	TINYTEST_EQUAL_DOUBLE(32.808, foot_)
	return 1;
}
int FootToMeter()
{
	//Foot to Meter
	foottometerconverter* myConverter = new  foottometerconverter();

	double meter_ = myConverter->convert(500);
	TINYTEST_EQUAL_DOUBLE(152.402, meter_)
		return 1;
}

// TemperaturConverter
int CelciusToFahrenheit()
{
	//Celcius to Fahrenheit
	celciustofahrenheit* myConverter = new  celciustofahrenheit();
	double fahrenheit_ = myConverter->convert(30);
	TINYTEST_EQUAL_DOUBLE(86, fahrenheit_);
	return 1;
}

int FahrenheitToCelcius()
{
	// Fahrenheit to Celcius 
	fahrenheittocelcius* myConverter = new  fahrenheittocelcius();
	double celcius_ = myConverter->convert(100);
	TINYTEST_EQUAL_DOUBLE(37.7778, celcius_);
	return 1;
}
//WeightConverter
// Ounces to Gramm
int OuncesToGramm()
{
	ouncestogrammconverter* myConverter = new ouncestogrammconverter();
	double gramm_ = myConverter->convert(100);
	std::cout << "value test 1 : " << gramm_ << std::endl;
	TINYTEST_EQUAL_DOUBLE(2834.95, gramm_);
	return 1;
}
//Gramm to Ounces
int GrammtoOunces()
{
	grammtoouncesconverter* myConverter = new grammtoouncesconverter();
	double ounces_ = myConverter->convert(100);
	TINYTEST_EQUAL_DOUBLE(3.5274, ounces_);
	return 1;
}



// ***************** new tests *****************

//MoneyConverter Test
int DollarToEuro_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("DollarToEuro");
	double converted_value = converter->convert(500);
	TINYTEST_EQUAL_DOUBLE(391.12, converted_value);

	return 1;
}

int EuroToDollar_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("EuroToDollar");
	double converted_value = converter->convert(600);
	TINYTEST_EQUAL_DOUBLE(767.028, converted_value);

	return 1;
}

//LengthConverter Test

int FootToMeter_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("FootToMeter");
	double converted_value = converter->convert(500);
	TINYTEST_EQUAL_DOUBLE(152.402, converted_value);

	return 1;
}

int MetertToFoot_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("MeterToFoot");
	double converted_value = converter->convert(10);
	TINYTEST_EQUAL_DOUBLE(32.808, converted_value);

	return 1;
}

//WeightConverter Test
int OuncesToGramm_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("OuncesToGramm");
	double converted_value = converter->convert(100);
	TINYTEST_EQUAL_DOUBLE(2834.95, converted_value);

	return 1;
}

int GrammtoOunces_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("GrammToOunces");
	double converted_value = converter->convert(100);
	TINYTEST_EQUAL_DOUBLE(3.5274, converted_value);

	return 1;
}

//TempConverter

int CelciusToFahrenheit_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("CelciusToFahrenheit");
	double converted_value = converter->convert(30);
	TINYTEST_EQUAL_DOUBLE(86, converted_value);

	return 1;
}

int FahrenheitToCelcius_Test_2()
{

	auto factory = Singleton<FactoryPattern>::getInst();

	auto converter = factory->create("FahrenheitToCelcius");
	double converted_value = converter->convert(100);
	TINYTEST_EQUAL_DOUBLE(37.7778, converted_value);

	return 1;
}



/*  Einkommentieren für Test*/
TINYTEST_START_SUITE(MainTest);
/* Old Tests ex 02
TINYTEST_ADD_TEST(DollarToEuroTest);
TINYTEST_ADD_TEST(EuroToDollarTest);
TINYTEST_ADD_TEST(MetertToFoot);
TINYTEST_ADD_TEST(FootToMeter);
TINYTEST_ADD_TEST(CelciusToFahrenheit);
TINYTEST_ADD_TEST(FahrenheitToCelcius);
TINYTEST_ADD_TEST(OuncesToGramm);
TINYTEST_ADD_TEST(GrammtoOunces);
*/

/*new Test ex04*/

TINYTEST_ADD_TEST(DollarToEuro_Test_2);
TINYTEST_ADD_TEST(EuroToDollar_Test_2);
TINYTEST_ADD_TEST(MetertToFoot_Test_2);
TINYTEST_ADD_TEST(FootToMeter_Test_2);
TINYTEST_ADD_TEST(CelciusToFahrenheit_Test_2);
TINYTEST_ADD_TEST(FahrenheitToCelcius_Test_2);
TINYTEST_ADD_TEST(OuncesToGramm_Test_2);
TINYTEST_ADD_TEST(GrammtoOunces_Test_2);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(MainTest);
//