#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

struct MEASUREMENT {
    string location;
    int date[3];
    vector<int> temperature;
    vector<int> humidity;
};

int main(int argc, char ** argv) {
    vector<MEASUREMENT> CLIMATE;

    string filename;
    if (argc > 1) filename=argv[1];
    else {
        cout << "Enter file name: ";
        cin >> filename;
    }

    ifstream file(filename);

    string record;
    while (getline(file, record)) {
        if (record.empty()) continue;
        string location;
        int date[3];
        vector<int> temperature;
        vector<int> humidity;

        location = record.substr(0, record.find('.')-3);
        record.erase(0, record.find('.')-3);
        for (int i = 0; i < 3; i ++) {
            date[i] = stoi(record.substr(0, record.find('.')));
            record.erase(0, record.find(((i < 2) ? '.' : ' '))+1);
        }
        string temperatures = record.substr(0, record.find('|'));
        record.erase(0, record.find('|')+2);
        record += ' ';

        while (!temperatures.empty()) {
            temperature.push_back(stoi(temperatures.substr(0, temperatures.find(' '))));
            temperatures.erase(0, temperatures.find(' ')+1);
        }

        while (!record.empty()) {
            humidity.push_back(stoi(record.substr(0, record.find(' '))));
            record.erase(0, record.find(' ')+1);

        }

        CLIMATE.push_back(MEASUREMENT {location, date[0], date[1], date[2], temperature, humidity});
    }

    int comfortable_t, comfortable_h;

    cout << "Enter comfortable temperature: ";
    cin >> comfortable_t;
    cout << "Enter comfortable humidity: ";
    cin >> comfortable_h;
    bool result = false;
    for (auto & measurement : CLIMATE) {
        double dispersion_t = 0, dispersion_h = 0, deviation_t, deviation_h;

        for (auto t : measurement.temperature) {
            dispersion_t += pow(t-comfortable_t, 2);
        }

        for (auto h : measurement.humidity) {
            dispersion_h += pow(h-comfortable_h, 2);
        }

        dispersion_t /= measurement.temperature.size();
        dispersion_h /= measurement.humidity.size();

        deviation_t = sqrt(dispersion_t);
        deviation_h = sqrt(dispersion_h);

        if (deviation_t/comfortable_t*100 <= 20 && deviation_h/comfortable_h*100 <= 20) {
            result = true;
            cout << measurement.location << endl;
            cout << setw(2) << setfill('0') << measurement.date[0] << '.';
            cout << setw(2) << setfill('0') << measurement.date[1] << '.' << measurement.date[2] << endl;
        }

    }

    if (!result) cout << "No matching records found!" << endl;

    return 0;
}
