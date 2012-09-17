#include "Vector2.hpp"

#include <math.h>

Vector2::Vector2() : x(), y()
{
}

Vector2::Vector2(float x, float y) : x(x), y(y)
{
}

Vector2::Vector2(const Vector2& other) : x(other.x), y(other.y)
{
}

float Vector2::getX() const
{
    return x;
}

float Vector2::getY() const
{
    return y;
}

Vector2 Vector2::operator +(const Vector2& other) const
{
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator -(const Vector2& other) const
{
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator -() const
{
    return Vector2(-x, -y);
}

Vector2 Vector2::operator *(const Vector2& other) const
{
    return Vector2(x * other.x, y * other.y);
}

Vector2 Vector2::operator *(const float scalar) const
{
    return Vector2(x * scalar, y * scalar);
}

Vector2 Vector2::operator /(const float scalar) const
{
    return Vector2(x / scalar, y / scalar);
}

bool Vector2::operator ==(const Vector2& other) const
{
    return (x == other.x) && (y == other.y);
}

bool Vector2::operator !=(const Vector2& other) const
{
    return (x != other.x) || (y != other.y);
}

float Vector2::dot(const Vector2& other) const
{
    return x * other.x + y * other.y;
}

float Vector2::length() const
{
    return sqrt(x * x + y * y);
}

Vector2& Vector2::normalize()
{
    float li = 1.0f / length();
    x *= li;
    y *= li;
    return *this;
}

Vector2 Vector2::normalized() const
{
    float li = 1.0f / length();
    return Vector2(x * li, y * li);
}

float Vector2::angle() const
{
    return atan2(y, x);
}

Vector2& Vector2::rotate(const float angle)
{
    float x0 = x;
    float s = sin(angle);
    float c = cos(angle);

    x = x0 * c - y * s;
    y = x0 * s + y * c;
    return *this;
}

Vector2 Vector2::rotated(const float angle) const
{
    float s = sin(angle);
    float c = cos(angle);
    return Vector2(x * c - y * s, x * s + y * c);
}

Vector2 Vector2::fromPolar(const float angle, const float length)
{
    return Vector2(length * cos(angle), length * sin(angle));
}

Vector2 operator *(const float scalar, const Vector2& vector)
{
    return vector * scalar;
}
