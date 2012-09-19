#include "Vector3.hpp"

#include <math.h>

Vector3::Vector3() : x(), y(), z()
{
}

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z)
{
}

Vector3::Vector3(const Vector3& other) : x(other.x), y(other.y), z(other.z)
{
}

float Vector3::getX() const
{
    return x;
}

float Vector3::getY() const
{
    return y;
}

float Vector3::getZ() const
{
    return z;
}

Vector3 Vector3::operator +(const Vector3& other) const
{
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator -(const Vector3& other) const
{
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator -() const
{
    return Vector3(-x, -y, -z);
}

Vector3 Vector3::operator *(const float scalar) const
{
    return Vector3(x * scalar, y * scalar, z * scalar);
}

bool Vector3::operator ==(const Vector3& other) const
{
    return (x == other.x) && (y == other.y) && (z == other.z);
}

bool Vector3::operator !=(const Vector3& other) const
{
    return (x != other.x) || (y != other.y) || (z != other.z);
}

float Vector3::dot(const Vector3& other) const
{
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const
{
    return Vector3(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
}

float Vector3::length() const
{
    return sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::unit() const
{
    float li = 1.0f / length();
    return Vector3(x * li, y * li, z * li);
}

Vector3 operator *(const float scalar, const Vector3& vector)
{
    return vector * scalar;
}
