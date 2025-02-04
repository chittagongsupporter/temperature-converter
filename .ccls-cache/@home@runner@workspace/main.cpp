#include <iostream>

// converts temperaure from Fahrenheit to Celsius or celsius to farenheit
// depending on userinput
void convertTemperatures() {
  // declarations
  double numberToBeConverted;
  double convertedNumber;

  // C means the calculator will be converting from Farnheit to Celsius
  // F means the calculator will be converting from Celsius to Farnheit
  std::string choice;

  // prompt user for input
  std::cout << "Enter C to convert to Celsius or F to convert to Fahrenheit: "
            << std::endl;
  std::cin >> choice;

  if (choice == "C") {
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> numberToBeConverted;
    convertedNumber = (numberToBeConverted - 32) * 5 / 9;
    std::cout << "The temperature in Celsius is: " << convertedNumber
              << std::endl;
  } else if (choice == "F") {
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> numberToBeConverted;
    convertedNumber = (numberToBeConverted * 9 / 5) + 32;
    std::cout << "The temperature in Fahrenheit is: " << convertedNumber
              << std::endl;
  } else {
    std::cout << "Invalid choice. Please enter C or F." << std::endl;
  }
}
// main execution of flow
int main() {
  convertTemperatures();
  return 0;
}