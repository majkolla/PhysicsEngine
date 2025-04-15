#pragma once

// a simple 2D vector struct with the appriorate functions 
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

    Vector2 operator-(const Vector2& other) const
    {
        return Vector2(x - other.x, y - other.y);
    }

    Vector2 operator*(float scalar) 
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

// Implement a 3D vector as well 