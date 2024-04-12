#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <chrono>
#include <thread>
using namespace std;
// Constants
const double G = 0.00005; // Gravitational constant

// Class representing a celestial body
class Body {
public:
    Body(string name, double x, double y, double vx, double vy, double mass)
        : name(name), x(x), y(y), vx(vx), vy(vy), mass(mass) {}

    // Function to calculate gravitational force on this body due to another body
    void calculateForce(const Body& other) {
        double dx = other.x - x;
        double dy = other.y - y;
        double distanceSquared = dx * dx + dy * dy;
        double force = (G * mass * other.mass) / distanceSquared;
        double angle = atan2(dy, dx);

        fx += force * cos(angle);
        fy += force * sin(angle);
    }

    // Function to update the position and velocity of the body
    void updatePosition(double dt) {
        double ax = fx / mass;
        double ay = fy / mass;

        vx += ax * dt;
        vy += ay * dt;

        x += vx * dt;
        y += vy * dt;

        // Reset accumulated forces for the next iteration
        fx = 0.0;
        fy = 0.0;
    }

    // Function to display the body's information
    void display() const {
        cout << "Body " << name << " - Position: (" << x << ", " << y << ") - Velocity: (" << vx << ", " << vy << ")\n";
    }

private:
    string name;
    double x, y;    // Position
    double vx, vy;  // Velocity
    double mass;    // Mass
    double fx, fy;  // Accumulated forces
};

// Class representing the universe
class Universe {
public:
    // Function to add a body to the universe
    void addBody(const Body& body) {
        bodies.push_back(body);
    }

    // Function to simulate the universe
    void simulate(double dt) {
        for (size_t i = 0; i < bodies.size(); ++i) {
            for (size_t j = 0; j < bodies.size(); ++j) {
                if (i != j) {
                    bodies[i].calculateForce(bodies[j]);
                }
            }
        }

        for (auto& body : bodies) {
            body.updatePosition(dt);
            body.display();
        }
    }

private:
    vector<Body> bodies;
};

int main() {
    // Read data from the file
    ifstream file("nbody.txt");
    if (!file.is_open()) {
        cerr << "Error opening file.\n";
        return 1;
    }

    double gravitationalConstant;
    file >> gravitationalConstant;

    // Create the universe
    Universe universe;

    // Read body data from the file and add bodies to the universe
    string name;
    double x, y, vx, vy, mass;
    while (file >> name >> x >> y >> vx >> vy >> mass) {
        Body body(name, x, y, vx, vy, mass);
        universe.addBody(body);
    }

    // Simulate the universe
    const double timeStep = 0.1; // Adjust as needed
    while (true) {
        universe.simulate(timeStep);
        // Add a delay to slow down the animation
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    return 0;
}
