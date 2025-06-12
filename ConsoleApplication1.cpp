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

	void SetName(string n) {
		if (n != "Rich") {
			name = n;
		}
		else {
			cout << "The parrot's name is already Rich.\n";
		}
	}

	void SetAge(int a) {
		if (a > 0) {
			age_in_month = a;
		}
		else {
			cout << "Age cannot be negative or zero.\n";
		}
	}

	void SetColor(string c) {
		if (c != "blue") {
			color = c;
		}
		else {
			cout << "The parrot is already blue.\n";
		}
	}

	void SetHeight(double h) {
		if (h > 0) {
			height = h;
		}
		else {
			cout << "Height cannot be negative or zero.\n";
		}
	}

	void SetNamberOfParrots(unsigned int n) {
		if (n > 0) {
			namber_of_parrots = n;
		}
		else {
			cout << "Number of parrots cannot be negative or zero.\n";
		}
	}

	string GetName() const {
		return name;
	}

	int GetAge() const {
		return age_in_month;
	}

	string GetColor() const {
		return color;
	}

	double GetHeight() const {
		return height;
	}

	unsigned int GetNamberOfParrots() const {
		return namber_of_parrots;
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

	void SetColor(string c) {
		if (c != "purple") {
			color = c;
		}
		else {
			cout << "The violet's color is already purple.\n";
		}
	}

	void SetFlowers(int f) {
		if (f > 0) {
			flowers = f;
		}
		else {
			cout << "Number of flowers cannot be negative or zero.\n";
		}
	}

	void SetNumberOfLeaves(int n) {
		if (n > 0) {
			number_of_leaves = n;
		}
		else {
			cout << "Number of leaves cannot be negative or zero.\n";
		}
	}

	void SetHeight(double h) {
		if (h > 0) {
			height = h;
		}
		else {
			cout << "Height cannot be negative or zero.\n";
		}
	}

	void SetAge(int a) {
		if (a > 0) {
			age_in_months = a;
		}
		else {
			cout << "Age cannot be negative or zero.\n";
		}
	}

	string GetColor() const {
		return color;
	}

	int GetFlowers() const {
		return flowers;
	}

	int GetNumberOfLeaves() const {
		return number_of_leaves;
	}

	double GetHeight() const {
		return height;
	}

	int GetAge() const {
		return age_in_months;
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

	void SetName(string n) {
		if (n != "Захар") {
			name = n;
		}
		else {
			cout << "Захар.\n";
		}
	}

	void SetAge(double a) {
		if (a > 0) {
			age = a;
		}
		else {
			cout << "Age cannot be negative or zero.\n";
		}
	}

	void SetFamine(int f) {
		if (f >= 0 && f <= 100) {
			famine = f;
		}
		else {
			cout << "Famine must be between 0 and 100.\n";
		}
	}

	void SetHeight(double h) {
		if (h > 0) {
			height = h;
		}
		else {
			cout << "Height cannot be negative or zero.\n";
		}
	}

	void SetKnowledge(int k) {
		if (k >= 0 && k <= 100) {
			knowledge = k;
		}
		else {
			cout << "Knowledge must be between 0 and 100.\n";
		}
	}

	string GetName() const {
		return name;
	}

	double GetAge() const {
		return age;
	}

	int GetFamine() const {
		return famine;
	}

	double GetHeight() const {
		return height;
	}

	int GetKnowledge() const {
		return knowledge;
	}
};

// шафа.
class wardrobe {
	string color = "white";
	int shelves = 12;
	int doors = 3;
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

	void SetColor(string c) {
		if (c != "white") {
			color = c;
		}
		else {
			cout << "The wardrobe's color is already white.\n";
		}
	}

	void SetShelves(int s) {
		if (s > 0) {
			shelves = s;
		}
		else {
			cout << "Number of shelves cannot be negative or zero.\n";
		}
	}

	void SetDoors(int d) {
		if (d > 0) {
			doors = d;
		}
		else {
			cout << "Number of doors cannot be negative or zero.\n";
		}
	}

	void SetHeight(double h) {
		if (h > 0) {
			height = h;
		}
		else {
			cout << "Height cannot be negative or zero.\n";
		}
	}

	void SetWidth(double w) {
		if (w > 0) {
			width = w;
		}
		else {
			cout << "Width cannot be negative or zero.\n";
		}
	}

	string GetColor() const {
		return color;
	}

	int GetShelves() const {
		return shelves;
	}

	int GetDoors() const {
		return doors;
	}

	double GetHeight() const {
		return height;
	}

	double GetWidth() const {
		return width;
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

	void SetBrand(string b) {
		if (b != "Midea") {
			brand = b;
		}
		else {
			cout << "The air conditioning brand is already Midea.\n";
		}
	}

	void SetTemperature(int t) {
		if (t >= 16 && t <= 30) {
			temperature = t;
		}
		else {
			cout << "Temperature must be between 16 and 30 degrees.\n";
		}
	}

	void SetHeight(double h) {
		if (h > 0) {
			hight = h;
		}
		else {
			cout << "Height cannot be negative or zero.\n";
		}
	}

	void SetWidth(double w) {
		if (w > 0) {
			width = w;
		}
		else {
			cout << "Width cannot be negative or zero.\n";
		}
	}

	void SetPower(int p) {
		if (p >= 1500 && p <= 2000) {
			power = p;
		}
		else {
			cout << "Power should be between 1500 and 2000 watts.\n";
		}
	}

	string GetBrand() const {
		return brand;
	}

	int GetTemperature() const {
		return temperature;
	}

	double GetHeight() const {
		return hight;
	}

	double GetWidth() const {
		return width;
	}

	int GetPower() const {
		return power;
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
	p.SetName("Parrot");
	p.SetAge(2);
	p.SetColor("green");
	p.SetHeight(15.0);
	p.SetNamberOfParrots(2);
	cout << "Parrot's name: " << p.GetName() << "\n";
	cout << "Parrot's age in months: " << p.GetAge() << "\n";
	cout << "Parrot's color: " << p.GetColor() << "\n";
	cout << "Parrot's height: " << p.GetHeight() << "\n";
	cout << "Number of parrots: " << p.GetNamberOfParrots() << "\n";


	violet v;
	v.WaterViolets();
	v.CheckHealth();
	v.AgeViolet();
	v.VioletsOnSun();
	v.PrintStateViolet();
	v.SetColor("pink");
	v.SetFlowers(10);
	v.SetNumberOfLeaves(15);
	v.SetHeight(12.0);
	v.SetAge(10);
	cout << "Violet's color: " << v.GetColor() << "\n";
	cout << "Violet's flowers: " << v.GetFlowers() << "\n";
	cout << "Violet's number of leaves: " << v.GetNumberOfLeaves() << "\n";
	cout << "Violet's height: " << v.GetHeight() << "\n";
	cout << "Violet's age in months: " << v.GetAge() << "\n";

	Son S;
	S.SunStudy();
	S.Play();
	S.SonSllep();
	S.Eat();
	S.SonAge();
	S.PrintStateSon();
	S.SetName("Захар");
	S.SetAge(8.0);
	S.SetFamine(60);
	S.SetHeight(115.0);
	S.SetKnowledge(30);
	cout << "Son's name: " << S.GetName() << "\n";
	cout << "Son's age: " << S.GetAge() << "\n";
	cout << "Son's famine: " << S.GetFamine() << "\n";
	cout << "Son's height: " << S.GetHeight() << "\n";
	cout << "Son's knowledge: " << S.GetKnowledge() << "\n";

	wardrobe w;
	w.OpenWardrobe();
	w.PutThingsOnTheShelf();
	w.CloseWardrobe();
	w.WashWardrobe();
	w.PrintStateWardrobe();
	w.SetColor("black");
	w.SetShelves(10);
	w.SetDoors(4);
	w.SetHeight(260.0);
	w.SetWidth(270.0);
	cout << "Wardrobe's color: " << w.GetColor() << "\n";
	cout << "Wardrobe's shelves: " << w.GetShelves() << "\n";
	cout << "Wardrobe's doors: " << w.GetDoors() << "\n";
	cout << "Wardrobe's height: " << w.GetHeight() << "\n";
	cout << "Wardrobe's width: " << w.GetWidth() << "\n";

	air_conditioning ar;
	ar.TurnOn();
	ar.AirCooling();
	ar.AirVentilation();
	ar.AirHeating();
	ar.PrintStateAirConditioning();
	ar.SetBrand("Samsung");
	ar.SetTemperature(22);
	ar.SetHeight(32.0);
	ar.SetWidth(90.0);
	ar.SetPower(1850);
	cout << "Air conditioning brand: " << ar.GetBrand() << "\n";
	cout << "Air conditioning temperature: " << ar.GetTemperature() << "\n";
	cout << "Air conditioning height: " << ar.GetHeight() << "\n";
	cout << "Air conditioning width: " << ar.GetWidth() << "\n";
	cout << "Air conditioning power: " << ar.GetPower() << "\n";
}
