#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <ctime>


struct sim{
    std::vector<double> masses;
    std::vector<std::vector<double>> positions;
    std::vector<std::vector<double>> velocities;
    std::vector<std::vector<double>> forces;

    void randomConfig() {
        int minParticles = 2, maxParticles = 5;
        double minMass = 1.0, maxMass = 10.0;
        double minPosition = -100.0, maxPosition = 100.0;
        double minVelocity = -10.0, maxVelocity = 10.0;
        std::srand(std::time(0));
        
        int numParticles = minParticles + (std::rand() % (maxParticles - minParticles + 1));



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