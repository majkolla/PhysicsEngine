// here is where the main loop is going to be 
#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "RigidBody.h"


// simple main loop implementation
int main()
{
    std::vector<RigidBody> bodies; 
    bodies.emplace_back(Vector2(0, 0), 1.0f); // Create one rigid body

    float g {9.82f};
    const Vector2 gravity(0, g);

    while (true)
    {
        for (RigidBody& body: bodies)
        {
            body.ApplyForce(gravity * body.mass); // add this operator 
        }

        for (const RigidBody& body : bodies)
        {
            std::cout << "Position: (" << body.position.x << ", " << body.position.y << ")\n";
        }

    }
    return 0; 
}