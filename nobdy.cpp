#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>


struct sim{
    std::vector<double> masses;
    std::vector<std::vector<double>> positions;
    std::vector<std::vector<double>> velocities;
    std::vector<std::vector<double>> forces;

    void randomConfig() {


    }

    void predefinedConfig() {
        

    }

    void loadFromFile(const std::string& filename) {

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}