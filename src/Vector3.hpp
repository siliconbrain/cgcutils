#ifndef __CGCUTILS_VECTOR3_HPP__
#define __CGCUTILS_VECTOR3_HPP__

/**
 * A 3 dimensional vector class.
 */
class Vector3
{
    float x, y, z;

public:
    /**
     * Create (0,0,0) vector.
     */
    Vector3();

    /**
     * Create (x,y,z) vector.
     * @param x x coordinate of the vector
     * @param y y coordinate of the vector
     * @param z z coordinate of the vector
     */
    Vector3(float x, float y, float z);

    /**
     * Copy constructor.
     * @param other source vector to copy
     */
    Vector3(const Vector3& other);

    float getX() const;

    float getY() const;

    float getZ() const;

    Vector3 operator +(const Vector3& other) const;

    Vector3 operator -(const Vector3& other) const;

    Vector3 operator -() const;

    Vector3 operator *(const Vector3& other) const;

    Vector3 operator *(const float scalar) const;

    bool operator ==(const Vector3& other) const;

    bool operator !=(const Vector3& other) const;

    /**
     * Returns the dot product of this and the specified vector.
     * @param other the other vector
     * @return the dot product
     */
    float dot(const Vector3& other) const;

    /**
     * Returns the cross product of this and the specified vector.
     * @param other the other vector
     * @return the cross product
     */
    Vector3 cross(const Vector3& other) const;

    float length() const;

    Vector3& normalize();

    Vector3 normalized() const;
};

Vector3 operator *(const float scalar, const Vector3& vector);

#endif // __CGCUTILS_VECTOR3_HPP__
