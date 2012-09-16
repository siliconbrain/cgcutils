#ifndef __GFXUTIL_VECTOR2_HPP__
#define __GFXUTIL_VECTOR2_HPP__

class Vector2
{
    float x, y;

public:
    /**
     * Create (0,0) vector.
     */
    Vector2();

    /**
     * Create (x,y) vector.
     * @param x x coordinate of the vector
     * @param x y coordinate of the vector
     */
    Vector2(float x, float y);

    /**
     * Copy constructor.
     * @param other source vector to copy
     */
    Vector2(const Vector2& other);

    /**
     * Create vector from polar coordinates.
     * @param angle angle of the vector in radians
     * @param length length of the vector
     * @return a new vector from the specified parameters
     */
    static Vector2 fromPolar(const float angle, const float length);

    /**
     * Get the x coordinate of the vector.
     * @return x coordinate of the vector
     */
    float getX() const;

    /**
     * Get the y coordinate of the vector.
     * @return y coordinate of the vector
     */
    float getY() const;

    Vector2 operator +(const Vector2& other) const;

    Vector2 operator -(const Vector2& other) const;

    Vector2 operator -() const;

    Vector2 operator *(const Vector2& other) const;

    Vector2 operator *(const float scalar) const;

    Vector2 operator /(const float scalar) const;

    bool operator ==(const Vector2& other) const;

    bool operator !=(const Vector2& other) const;

    /**
     * Get the length of the vector.
     * @return length of the vector
     */
    float length() const;

    /**
     * Get the angle of the vector.
     * @return angle of the vector in radians
     */
    float angle() const;

    /**
     * Normalizes the vector.
     * @return reference to self
     */
    Vector2& normalize();

    /**
     * Create unit vector from this.
     * @return unit vector with same orientation as this
     */
    Vector2 normalized() const;

    /**
     * Rotates the vector CCW with the specified angle.
     * @param angle angle to rotate with in radians
     * @return reference to self
     */
    Vector2& rotate(const float angle);

    /**
     * Create a vector rotated CCW from this with the specified angle.
     * @param angle angle to rotate with in radians
     * @return new, rotated vector
     */
    Vector2 rotated(const float angle) const;
};

Vector2 operator *(const float scalar, const Vector2& vector);

#endif
