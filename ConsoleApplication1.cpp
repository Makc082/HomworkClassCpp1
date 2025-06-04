#include <iostream>
#include <windows.h>
using namespace std;

// папуга.
class Parrot {
	string name = "Rich";
	int age_in_month = 1;
	int energy = 100;
	string color = "blue";
	double height = 12.2;
    unsigned int namber_of_parrots = 1;
	int feed = 50;
	int water = 50;

public:

	void OpenCage() {
		string open_cage = "open";
		if (open_cage == "open") {
			cout << "The parrot is not in the cage.\n";
			namber_of_parrots -= 1;
		}
		else
		{
			cout << "The parrot is in the cage.\n";
		}
	}

	void FlyParrot() {
		if (energy > 0) {
			cout << "Parrot is flying\n";
			energy -= 20;
		}
		else
		{
			cout << "Parrot is too tired to fly\n";
		}
	}

	void FeedParrot() {
		if (feed < 100) {
			cout << "Parrot is eating\n";
			feed += 10;
			energy += 5;
			height += 0.1;
			namber_of_parrots += 1;
		}
		else
		{
			cout << "Parrot is not hungry\n";
		}
	}

	void ParrotDrink() {
		if (water < 100) {
			cout << "Parrot is drinking\n";
			water += 10;
			energy += 5;
		}
		else
		{
			cout << "Parrot is not thirsty\n";
		}
	}

	void PrintStateParrot() {
		cout << "**********************************\n";
		cout << "Parrot's name: " << name << "\n";
		cout << "Parrot's age in months: " << age_in_month << "\n";
		cout << "Parrot's energy: " << energy << "\n";
		cout << "Parrot's color: " << color << "\n";
		cout << "Parrot's height: " << height << "\n";
		cout << "Parrot's feed: " << feed << "\n";
		cout << "Parrot's water: " << water << "\n";
		cout << "Number of parrots: " << namber_of_parrots << "\n";
		cout << "**********************************\n";
	}

};
 
// фіалка.
class violet {
	string color = "purple";
	int flowers = 7; 
	int number_of_leaves = 12;
	double soil_moisture = 0.7;
	double height = 10;
	int health = 100;
	int age_in_months = 8;
	string sun_is_shining = "yes";
	int water = 100;
	bool is_sick = false;

public:
	void WaterViolets() {
		if (soil_moisture < 1.0) {
			cout << "\n**********************************\n";
			cout << "Watering the violet\n";
			water -= 10;
			soil_moisture += 0.5;
			health += 10;
		}
		else
		{
			cout << "The violet is already watered\n";
		}
	}

	void CheckHealth() {
		health = 80;
		if (health < 100) {
			cout << "The violet is sick\n";
			is_sick = true;
			flowers -= 1;
			number_of_leaves -= 1;
		}
		else
		{
			cout << "The violet is healthy\n";
			is_sick = false;
		}
	}

	void AgeViolet() {
		int day = 31;
		for (int i = 0; i < day; i++) {
			age_in_months = 9;
			if (age_in_months == 9) {
				cout << "The violet is aging, month: " << age_in_months << "\n";
				flowers += 1;
				number_of_leaves += 2;
				soil_moisture -= 0.1;
				height += 0.5;
			}
			break;
		}
	}

	void VioletsOnSun() {
		if (sun_is_shining == "yes") {
			cout << "The violet is on the sun\n";
			soil_moisture -= 0.2;
			height += 0.3;
		}
		else
		{
			cout << "The violet is not on the sun\n";
		}
	}

	void PrintStateViolet() {
		cout << "**********************************\n";
		cout << "Violet's color: " << color << "\n";
		cout << "Violet's flower: " << flowers << "\n";
		cout << "Violet's number of leaves: " << number_of_leaves << "\n";
		cout << "Violet's soil moisture: " << soil_moisture << "\n";
		cout << "Violet's height: " << height << "\n";
		cout << "Violet's health: " << health << "\n";
		cout << "Violet's age in months: " << age_in_months << "\n";
		cout << "********************************\n";
	}
};

// Синок.
class Son {
	string name = "Захар";
	double age = 7.8;
	int	famine = 50;
	double height = 113.5;
	int energy = 100;
	int knowledge = 10;

public:

	void SunStudy() {
		if (knowledge < 100) {
			cout << "\n********************************\n";
			cout << "The son is studying\n";
			knowledge += 10;
			energy -= 10;
		}
		else
		{
			cout << "The son has enough knowledge\n";
		}
	}

	void Play() {
		if (energy > 0) {
			cout << "The son is playing\n";
			energy -= 20;
			knowledge += 5;
		}
		else
		{
			cout << "The son is too tired to play\n";
		}
	}

	void SonSllep() {
		if (energy < 100) {
			cout << "The son is sleeping\n";
			energy += 20;
			famine += 10;
			height += 0.1;

		}
	}

	void Eat() {
		if (famine < 100) {
			cout << "The son is eating\n";
			famine -= 20;
			energy += 10;
		}
		else
		{
			cout << "The son is not hungry\n";
		}
	}

	void SonAge() {
		int day = 31;
		for (int i = 0; i < day; ++i) {
			age = 7.9;
			cout << "The son is aging, age: " << age << "\n";
			break;
		}
	}

	void PrintStateSon() {
		cout << "**********************************\n";
		cout << "Son's name: " << name << "\n";
		cout << "Son's age: " << age << "\n";
		cout << "Son's famine: " << famine << "\n";
		cout << "Son's health: " << height << "\n";
		cout << "Son's energy: " << energy << "\n";
		cout << "Son's knowledge: " << knowledge << "\n";
		cout << "**********************************\n";
	}
};

// шафа.
class wardrobe {
	string color = "white";
	int shelves = 12;
	int close_doors = 3;
	int open_doors = 0;
	bool wardrobe_clean;
	double height = 250;
	double width = 268.5;
	double depth = 60;

public:

	void OpenWardrobe() {
		if (open_doors < 3) {
			cout << "\n**********************************\n";
			cout << "Opening the wardrobe\n";
			open_doors += 1;
			close_doors -= 1;
			cout << "Open doors: " << open_doors << "\n";
			cout << "Closed doors: " << close_doors << "\n";
		}
		else
		{
			cout << "The wardrobe is already open\n";
		}
	}

	void PutThingsOnTheShelf() {
		cout << "Putting things on the shelf\n";
		int numb_of_sweaters = 12;
		for(int i = 0; i < numb_of_sweaters; ++i) {
			if (i % 3 == 0 && shelves > 0) {
				shelves -= 1;
			}
			else if(shelves == 0) {
				cout << "No more shelves available\n";
				break;
			}
		}
	}

	void CloseWardrobe() {
		if (open_doors > 0) {
			cout << "Closing the wardrobe\n";
			open_doors -= 1;
			close_doors += 1;
			cout << "Open doors: " << open_doors << "\n";
			cout << "Closed doors: " << close_doors << "\n";
		}
		else
		{
			cout << "The wardrobe is already closed\n";
		}
	}
	 
	void WashWardrobe() {
		wardrobe_clean = false;
		if (wardrobe_clean == false) {
			cout << "Washing the wardrobe\n";
			wardrobe_clean = true;
			cout << "Wardrobe's cleanliness: Clean\n";
		}
		else
		{
			cout << "The wardrobe is already clean\n";
		}
	}

	void PrintStateWardrobe() {
		cout << "**********************************\n";
		cout << "Wardrobe's color: " << color << "\n";
		cout << "Wardrobe's shelves: " << shelves << "\n";
		cout << "Wardrobe's doors: " << close_doors << "\n";
		cout << "Wardrobe's open doors: " << open_doors << "\n";
		cout << "Wardrobe's cleanliness: " << wardrobe_clean << "\n";
		cout << "Wardrobe's height: " << height << "\n";
		cout << "Wardrobe's width: " << width << "\n";
		cout << "Wardrobe's depth: " << depth << "\n";
		cout << "**********************************\n";
	}
};

// кондиціонер.
class air_conditioning {
	string brand = "Midea";
	int temperature = 25;
	double hight = 30.5;
	double width = 85.5;
	double depth = 20.5;
	int power = 1600;
	bool is_on = false;

public:

	void TurnOn() {
		if (!is_on) {
			cout << "\n**********************************\n";
			cout << "Turning on the air conditioning\n";
			is_on = true;
		}
		else
		{
			cout << "The air conditioning is already on\n";
		}
	}

	void AirCooling() {
		temperature = 30;
		if (temperature > 25) {
			cout << "Cooling the air\n";
			temperature -= 5;
			is_on = true;
		}
		else
		{
			cout << "The air is already cool\n";
		}
	}

	void AirVentilation() {
		if (temperature == 25) {
			cout << "Ventilating the air\n";
			temperature -= 1;
			is_on = true;
		}
		else {
			cout << "The air is already ventilated\n";
		}
	}

	void AirHeating() {
		temperature = 16;
		if (temperature < 20) {
			cout << "Heating the air\n";
			temperature += 5;
			is_on = true;
		}
		else {
			cout << "The air is already warm\n";
			is_on = false;
		}
	}

	void PrintStateAirConditioning() {
		cout << "**********************************\n";
		cout << "Air conditioning brand: " << brand << "\n";
		cout << "Air conditioning temperature: " << temperature << "\n";
		cout << "Air conditioning height: " << hight << "\n";
		cout << "Air conditioning width: " << width << "\n";
		cout << "Air conditioning depth: " << depth << "\n";
		cout << "Air conditioning power: " << power << "\n";
		cout << "Is the air conditioning on?" << is_on << "\n";
		cout << "**********************************\n";
	}
};

int main()
{
	SetConsoleOutputCP(1251);

	Parrot p;
	p.OpenCage();
	p.FlyParrot();
	p.FeedParrot();
	p.ParrotDrink();
	p.PrintStateParrot();

	violet v;
	v.WaterViolets();
	v.CheckHealth();
	v.AgeViolet();
	v.VioletsOnSun();
	v.PrintStateViolet();

	Son S;
	S.SunStudy();
	S.Play();
	S.SonSllep();
	S.Eat();
	S.SonAge();
	S.PrintStateSon();

	wardrobe w;
	w.OpenWardrobe();
	w.PutThingsOnTheShelf();
	w.CloseWardrobe();
	w.WashWardrobe();
	w.PrintStateWardrobe();

	air_conditioning ar;
	ar.TurnOn();
	ar.AirCooling();
	ar.AirVentilation();
	ar.AirHeating();
	ar.PrintStateAirConditioning();
}
