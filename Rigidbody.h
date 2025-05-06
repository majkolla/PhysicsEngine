#pragma once
#include "Math.h"
#include "vector"
// Create a  rigid body class 
// different shapes that we can add and model physics

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
    void SetPosition(const Vector2& pos)
    {
        position = pos;
    }
    void SetVelocity(const Vector2& vel)
    {
        velocity = vel;
    }
    void SetAcceleration(const Vector2& acc)
    {
        acceleration = acc;
    }
    void SetMass(float m)
    {
        mass = m;
        inverseMass = (mass != 0) ? 1.0f / mass : 0.0f;
    }

};

struct Circle : public RigidBody
{
    float radius; 
    Circle(const Vector2& pos, float mass, float radius)
        : RigidBody(pos, mass), radius(radius) {}
    // Add more circle specific functions here
    void SetRadius(float r)
    {
        radius = r;
    }
    float GetRadius() const
    {
        return radius;
    }
    float GetArea() const 
    {
        return 3.14f * radius * radius; // pi * r^2
    }
}; 

struct Rectangle : public RigidBody
{
    float width; 
    float height; 

    Rectangle(const Vector2& pos, float mass, float width, float height)
        : RigidBody(pos, mass), width(width), height(height) {}
    // Add more rectangle specific functions here
};

// polygon? Maybe we can implement 3D stuff? 

struct Polygon : public RigidBody
{

}; 

struct Rigidbody3D 
{
    Vector3 acceleration; 
    Vector3 position; 
    Vector3 velocity; 
    float mass; 
    float inversemass; 
}; 