#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

// Function to generate random temperature readings
double generateTemperature() {
    // Generate a random temperature between 15 and 32 degrees Celsius
    double temperature = (rand() % 18) + 15;
    return temperature;
}

// Class for the thermostat system
class Thermostat {
private:
    double currentTemperature;
    double desiredTemperature;

public:
    // Constructor
    Thermostat() {
        currentTemperature = generateTemperature();
        desiredTemperature = 24.0;
    }

    // Function to set the desired temperature
    void setDesiredTemperature(double temperature) {
        desiredTemperature = temperature;
    }

    // Function to update the current temperature and control the heating/cooling system
    void update() {
        currentTemperature = generateTemperature();

        // Control logic to adjust the virtual heating/cooling system
        if (currentTemperature < desiredTemperature) {
            // Turn on the heating system
            std::cout << "Heating system is ON" << std::endl;
        }
        else if (currentTemperature > desiredTemperature) {
            // Turn on the cooling system
            std::cout << "Cooling system is ON" << std::endl;
        }
        else {
            // Temperature is at the desired level
            std::cout << "Temperature is at the desired level" << std::endl;
        }
    }

    // Function to display the current temperature and desired temperature
    void displayTemperature() {
        std::cout << "Current Temperature: " << currentTemperature << "°C" << std::endl;
        std::cout << "Desired Temperature: " << desiredTemperature << "°C" << std::endl;
    }
};

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Create a thermostat object
    Thermostat thermostat;

    // Simulation loop
    int iterations = 0;
    while (iterations < 5) {
        // Update the thermostat
        thermostat.update();

        // Display the current and desired temperature
        thermostat.displayTemperature();

        // Wait for a certain period of time (e.g., 1 second)
        std::this_thread::sleep_for(std::chrono::seconds(1));

        iterations++;
    }

    return 0;
}
