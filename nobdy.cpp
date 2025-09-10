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
        double minForce = -1.0, maxForce = 1.0;
        std::srand(std::time(0));

        int numParticles = minParticles + (std::rand() % (maxParticles - minParticles + 1));

        // Resizing is more efficient than pushing back elements one by one
        masses.resize(numParticles);
        positions.resize(numParticles, std::vector<double>(3));
        velocities.resize(numParticles, std::vector<double>(3));
        forces.resize(numParticles, std::vector<double>(3, 0.0));

        // loop to assign random values to each particle's properties
        for (int i = 0; i < numParticles; i++) {
            masses[i] = minMass + static_cast<double>(std::rand()) / RAND_MAX * (maxMass - minMass);
            for (int j = 0; j < 3; ++j) {
                positions[i][j] = minPosition + static_cast<double>(std::rand()) / RAND_MAX * (maxPosition - minPosition);
                velocities[i][j] = minVelocity + static_cast<double>(std::rand()) / RAND_MAX * (maxVelocity - minVelocity);
                forces[i][j] = minForce + static_cast<double>(std::rand()) / RAND_MAX * (maxForce - minForce);
            }
        }

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