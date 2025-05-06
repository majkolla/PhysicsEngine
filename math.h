#pragma once
#include <cmath> // for sqrt
// a simple 2D vector struct with the appriorate functions 

// we only need a 2D and a 3D vector so no need to generalize with templates


struct Vector2
{
    float x; 
    float y; 

    Vector2() : x(0), y(0) {}
    Vector2(float x_, float y_) : x(x_), y(y_) {}

    Vector2 operator+(const Vector2& other) const
    {
        return Vector2(x+ other.x, y + other.y); 
    }
    Vector2 operator+=(const Vector2& other) 
    {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vector2 operator-(const Vector2& other) const
    {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 operator*(float scalar) const
    {
        return Vector2(x * scalar, y * scalar);
    }

    Vector2& operator+=(const Vector2& other)
    {
        x += other.x;
        y += other.y;
        return *this;
    }

    float Dot(const Vector2& other) const
    {
        return x * other.x + y * other.y;
    }

    float Length() const
    {
        return std::sqrt(x * x + y * y);
    }

    Vector2 Normalized() const
    {
        float len = Length();
        if (len == 0) return Vector2(0, 0);
        return Vector2(x / len, y / len);
    }
};

struct Vector3
{
    float x; 
    float y;
    float z;

    Vector3() : x(0), y(0), z(0) 
    {}
    Vector3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) 
    {}

    Vector3 operator+(const Vector3& other) const
    {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    Vector3 operator-(const Vector3& other) const
    {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }
    Vector3 operator*(float scalar) const
    {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    float operator*(const Vector3& other) const
    {   
        // Dot product
        return x*other.x + y*other.y + z*other.z;
    }
    Vector3& operator+=(const Vector3& other)
    {
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }
}; 