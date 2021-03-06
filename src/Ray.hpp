#ifndef __CGCUTILS_RAY_HPP__
#define __CGCUTILS_RAY_HPP__

template<class T> class Ray
{
    T src, dir;

public:
    Ray(const T& src, const T& dir) : src(src), dir(dir.unit())
    {
    }

    Ray(const Ray& other) : src(other.src), dir(other.dir)
    {
    }

    T getSource() const
    {
        return src;
    }

    T getDirection() const
    {
        return dir;
    }
};

#endif // __CGCUTILS_RAY_HPP__
