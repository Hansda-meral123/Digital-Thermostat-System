# Digital Thermostat System

The Digital Thermostat System is a simulated thermostat that allows users to set the desired temperature and observe the current temperature readings. It includes a control algorithm to adjust a virtual heating or cooling system based on the temperature readings and the desired temperature set by the user.

## Architecture

The system is implemented in C++ programming language and follows a modular design. It consists of the following components:

- `Thermostat`: The main class representing the thermostat system. It handles temperature generation, user input for setting the desired temperature, control logic for adjusting the heating/cooling system, and displaying temperature information.

- `generateTemperature()`: A function to generate random temperature readings within a specified range.

## Hardware Requirements

To run this digital thermostat system, you will need the following hardware components:

- Temperature Sensor: A temperature sensor to measure the current temperature. You can use various temperature sensors compatible with your hardware platform, such as LM35 or DHT11.

- Actuators: Heating and cooling systems or relays to control the temperature. Connect these actuators to your hardware according to the specific requirements and guidelines of your hardware platform.

- Microcontroller or Development Board: A microcontroller or development board to interface with the temperature sensor and actuators. Examples include Arduino, Raspberry Pi, or any other compatible platform.

- Wiring and Power Supply: Ensure proper wiring connections between the temperature sensor, actuators, and microcontroller. Provide an appropriate power supply to the components as per their specifications.

## Building and Running the Simulation

To build and run the digital thermostat system, follow these steps:

1. Ensure that you have a C++ compiler installed on your system.

2. Download or clone the repository containing the source code.

3. Open a terminal or command prompt and navigate to the project directory.

4. Connect the temperature sensor and actuators to the microcontroller or development board as per the hardware requirements.

5. Modify the code to interface with your specific hardware platform. Update the necessary pin configurations or communication protocols used for reading temperature and controlling the heating/cooling systems.

6. Compile the source code using the C++ compiler. For example, using g++:


7. Run the compiled program:


8. The program will simulate temperature readings, display the current and desired temperature, and adjust the virtual heating/cooling system based on the control logic. It will also interact with the connected hardware components.

9. Observe the behavior of the heating/cooling systems based on the temperature readings and desired temperature set by the user.

10. To exit the program, you can manually terminate it by pressing Ctrl+C.

## Contributing

Contributions to the Digital Thermostat System are welcome! If you have any ideas, improvements, or bug fixes, please open an issue or submit a pull request on the GitHub repository.

## License

This project is licensed under the [MIT License](LICENSE).
