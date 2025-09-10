#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <ctime>


struct sim{

    int numParticles;
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

        numParticles = minParticles + (std::rand() % (maxParticles - minParticles + 1));

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
        // Using Sun, Moon, and Erth like in pdf instruction
        // Did not take physics so most of these nums will just be rando except for mass
        masses.resize(3);
        positions.resize(3, std::vector<double>(3));
        velocities.resize(3, std::vector<double>(3));
        forces.resize(3, std::vector<double>(3));

        // Particle 1 (sun)
        // Sun is the center so setting everything to 0
        masses[0] = 1.989e30; // mass of the sun
        positions[0] = {0.0, 0.0, 0.0}; 
        velocities[0] = {0.0, 0.0, 0.0}; 
        forces[0] = {0.0, 0.0, 0.0}; 

        // Particle 2 (moon)
        // literally typing random numbers except for mass from Google
        masses[1] = 7.342e22; // mass of the moon
        positions[1] = {10.0, 5.0, 2.0}; 
        velocities[1] = {0.0, 500.0, 100.0}; 
        forces[1] = {0.0, 0.0, 0.0};


        // Particle 3 (earth)
        masses[2] = 5.972e24; // mass of the earth
        positions[2] = {20.0, 10.0, 5.0}; 
        velocities[2] = {0.0, 300.0, 50.0}; 
        forces[2] = {0.0, 0.0, 0.0};
    }

    void loadFromFile(const std::string& filename) {

    }

    void forceCalculation() {
        const double G = 6.67430e-11; // gravitational constant
        
        // clear forces
        for (int i = 0; i < numParticles; ++i) {
            for (int j = 0; j < 3; ++j) {
                forces[i][j] = 0.0;
            }
        }

        


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}