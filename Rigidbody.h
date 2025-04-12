#pragma once
#include "Math.h"

struct RigidBody
{
    Vector2 position;
    Vector2 velocity;
    Vector2 acceleration;
    float mass;
    float inverseMass;

    RigidBody(const Vector2& pos, float m)
        : position(pos), mass(m)
    {
        inverseMass = (mass != 0) ? 1.0f / mass : 0.0f;
        velocity = Vector2(0, 0);
        acceleration = Vector2(0, 0);
    }

    void ApplyForce(const Vector2& force)
    {
        acceleration += force * inverseMass;
    }

    void Integrate(float dt)
    {
        velocity += acceleration * dt;
        position += velocity * dt;
        acceleration = Vector2(0, 0); 
    }
};
