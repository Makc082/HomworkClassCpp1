#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

class Continent {
	string name = "Continent!";
public:
	virtual void Print() {
		cout << "Continent: " << name << "\n";
	}
};

class Africa : public Continent {
	string name = "Africa";
public:
	virtual void Print() override {
		cout << "Continent: " << name << "\n";
	}
};

class NorthAmerica : public Continent {
	string name = "South America";
public:
	virtual void Print() override {
		cout << "Continent: " << name << "\n";
	}
};

class Herbivore : public Continent {
protected:
	int weight = 0;
	bool isAlive = false;
public:
	virtual void EatGrass() {
		cout << "Eating grass. \n";
		weight += 10;
	}
	virtual int GetWeight() const {
		return weight;
	}
};

class Wildebeest : public Herbivore {
	string name;
public:
	Wildebeest() {
		name = "Wildebeest";
		weight = 150;
		isAlive = true;
	}

	virtual void Print() override {
		cout << "Continent: Africa, Animal: " << name << "\n";
	}

	virtual void EatGrass() {
		cout << "Wildebeest is eating grass. \n";
		weight += 10;
		cout << "Wildebeest weight: " << weight << "\n";
		isAlive = true;
		cout << "Wildebeest is alive: " << (isAlive ? "Yes" : "No") << "\n";
	}
};

class Bison : public Herbivore {
	string name;
public:
	Bison() {
		name = "Bison";
		weight = 350;
		isAlive = true;
	}

	virtual void Print() override {
		cout << "Continent: North America, Animal: " << name << "\n";
	}

	virtual void EatGrass() {
		cout << "Bison is eating grass. \n";
		weight += 10;
		cout << "Bison weight: " << weight << "\n";
		isAlive = true;
		cout << "Bison is alive: " << (isAlive ? "Yes" : "No") << "\n";
	}
};

class Carnivore : public Continent {
protected:
	int power = 0;
	bool isAlive = false;
public:
	virtual void EatMeat() {
		cout << "Eating meat. \n";
		power += 15;
	}
};

class Lion : public Carnivore {
	string name;
public:
	Lion() {
		name = "Lion";
		power = 200;
		isAlive = true;
	}

	virtual void Print() override {
		cout << "Continent: Africa, Animal: " << name << "\n";
	}


	virtual void EatMeat(const Wildebeest& prey) {
		if (power > prey.GetWeight()) {
			cout << "Lion is eating Wildebeest. \n";
			power += 10;
			cout << "Lion power: " << power << "\n";
			isAlive = true;
			cout << "Lion is alive: " << (isAlive ? "Yes" : "No") << "\n";
		}
		else {
			cout << "Lion is too weak to eat Wildebeest. \n";
			power -= 10;
			if (power <= 0) {
				isAlive = false;
				cout << "Lion has died. \n";
			}
		}
	}
};

class Woolf : public Carnivore {
	string name;
public:
	Woolf() {
		name = "Woolf";
		power = 150;
		isAlive = true;
	}

	virtual void Print() override {
		cout << "Continent: North America, Animal: " << name << "\n";
	}

	virtual void EatMeat(const Bison& prey) {
		if (power > prey.GetWeight()) {
			cout << "Woolf is eating Bison.\n";
			power += 10;
			cout << "Woolf power: " << power << "\n";
			isAlive = true;
			cout << "Woolf is alive: " << (isAlive ? "Yes" : "No") << "\n";
		}
		else {
			cout << "Woolf is too weak to eat Bison. \n";
			power -= 10;
			cout << "Woolf power: " << power << "\n";
			if (power <= 0) {
				isAlive = false;
				cout << "Woolf has died. \n";
			}
		}
	}
};

void MealsHerbivores() {
	Wildebeest w;
	w.Print();
	w.EatGrass();

	Bison b;
	b.Print();
	b.EatGrass();
}

void NutritionCarnivores() {
	Wildebeest w;
	Lion l;
	l.Print();
	l.EatMeat(w); 

	Bison b;
	Woolf wl;
	wl.Print();
	wl.EatMeat(b);

}

void AnimalWorld(int action) {
	if (action == 1) {
		MealsHerbivores();
	}
	else if (action == 2) {
		NutritionCarnivores();
	}
	else if (action == 3) {
		MealsHerbivores();
		NutritionCarnivores();
	}
	else {
		cout << "Invalid action. Please choose 1 or 2.\n";
		return;
	}
	cout << "Animal world simulation completed.\n";	
}

int main() {

	int action = 0;
	cout << "Choose an action:\n";
	cout << "1. Herbivores meals\n";
	cout << "2. Carnivores meals\n";
	cout << "3. All animals meals\n";
	cin >> action;
	
	AnimalWorld(action);
		
	
}