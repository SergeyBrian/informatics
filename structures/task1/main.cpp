#include <iostream>
#include <string>

using namespace std;

struct AIR_COMPANY {
    string destination;
    int flightNumber;
    string airplaneType;
};

void sort(AIR_COMPANY * arr, int size) {
    for (int i = 0; i + 1 < size; i ++) {
        for (int j = 0; j + 1 < size - i; ++j) {
            if ((int)arr[j+1].destination[0] < (int)arr[j].destination[0]) {
                AIR_COMPANY tmp = arr[j+1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main() {
    int numberOfCompanies;
    cout << "Enter number of companies: ";
    cin >> numberOfCompanies;

    auto * airCompanies = new AIR_COMPANY[numberOfCompanies];

    for (int i = 0; i < numberOfCompanies; i++) {
        cout << "Air company #" << i + 1 << ": Enter destination: ";
        cin >> airCompanies[i].destination;

        cout << "Air company #" << i + 1 << ": Enter flight number: ";
        cin >> airCompanies[i].flightNumber;

        cout << "Air company #" << i + 1<< ": Enter airplane type: ";
        cin >> airCompanies[i].airplaneType;
    }

    sort(airCompanies, numberOfCompanies);
    cout << "Enter airplane type: ";
    string requiredAirplaneType;
    cin >> requiredAirplaneType;
    int results = 0;
    for (int i = 0; i < numberOfCompanies; i++) {
        if (airCompanies[i].airplaneType == requiredAirplaneType) {
            cout << "Company " << i + 1 << ":\n";
            cout << "Destination: " << airCompanies[i].destination << endl;
            cout << "Flight number: " << airCompanies[i].flightNumber << endl;
            cout << "Airplane type: " << airCompanies[i].airplaneType << endl << endl;
            results ++;
        }
    }

    if (!results) cout << "No companies with given airplane type found!" << endl;

    return 0;
}
