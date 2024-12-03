/*Buildings of Rome
1. Implement the class Building with the string name as protected member, a constructor that receives a string name and a public method getName() that returns the name of the building.
2. Implement the class Warehouse derived from Building that contains:
    a. The members wood, rocks and wheat (integers) that cannot be accessed from outside the class
    b. A constructor that receives a string name, and three integers (wood, rocks and wheat).
    c. A public method printResources() that prints on the screen the value of the members of the class (in the same way as it can be seen in the screenshot of the next page).
3. Implement the class House derived from Building that contains:
    a. The members floors, inhabitants and servants (integers) that cannot be accessed from outside the class
    b. A constructor that receives a string name, and three integers (floors, inhabitants and servants).
    c. A public method printHouse() that prints on the screen the value of the members of the class.
4. Implement the class Temple derived from Building that contains:
    a. The members god (string) and priests (integer) that cannot be accessed from outside the class
    b. A constructor that receives a string name, a string god and the number of priests of the temple (an integer called priest).
    c. A public method printTemple() that prints on the screen the value of the members of the class.
5. Your program must create one of each class and use their print function to display the data*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Building
class Building {
protected:
    string name;  // Protected member for the building name

public:
    // Constructor to initialize the name
    Building(string n) : name(n) {}

    // Public method to get the name of the building
    string getName() {
        return name;
    }
};

// Derived class: Warehouse
class Warehouse : public Building {
private:
    int wood, rocks, wheat;  // Private members for resources

public:
    // Constructor that receives name and resources
    Warehouse(string n, int w, int r, int wh)
        : Building(n), wood(w), rocks(r), wheat(wh) {}

    // Public method to print the resources
    void printResources() {
        cout << "Warehouse: " << getName() << endl;
        cout << "Wood: " << wood << ", Rocks: " << rocks << ", Wheat: " << wheat << endl;
    }
};

// Derived class: House
class House : public Building {
private:
    int floors, inhabitants, servants;  // Private members for house details

public:
    // Constructor that receives name and house details
    House(string n, int f, int i, int s)
        : Building(n), floors(f), inhabitants(i), servants(s) {}

    // Public method to print the house details
    void printHouse() {
        cout << "House: " << getName() << endl;
        cout << "Floors: " << floors << ", Inhabitants: " << inhabitants << ", Servants: " << servants << endl;
    }
};

// Derived class: Temple
class Temple : public Building {
private:
    string god;  // Private member for god's name
    int priests; // Private member for the number of priests

public:
    // Constructor that receives name, god and number of priests
    Temple(string n, string g, int p)
        : Building(n), god(g), priests(p) {}

    // Public method to print the temple details
    void printTemple() {
        cout << "Temple: " << getName() << endl;
        cout << "God: " << god << ", Priests: " << priests << endl;
    }
};

int main() {
    int choice = 0;

    Warehouse warehouse("Granary", 100, 50, 200);
    House house("Villa", 2, 5, 3);
    Temple temple("Pantheon", "Jupiter", 10);

    while (choice != 4) {
        cout << "Please, choose wich building do you want to see: " << endl;
        cout << "1. Warehouse" << endl;
        cout << "2. House" << endl;
        cout << "3. Temple" << endl;
        cout << "4. Exit" << endl;
        
        cin >> choice;

        if (choice == 1) {
            warehouse.printResources();
        }
        else if (choice == 2) {
            house.printHouse();
        }
        else if (choice == 3) {
            temple.printTemple();
        }
    }
    return 0;
}
