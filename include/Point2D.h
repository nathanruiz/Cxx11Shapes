#pragma once
namespace Cxx11Shapes
{

/**
 * A class for managing operations common to any 2D point using a given type for
 * storing the X and Y coordinates.
 */
template<typename T>
class Point2D
{
public:
    /**
     * Create a new 2D point with the coordinates (0,0).
     */
    constexpr Point2D(): x(0), y(0) {}

    /**
     * Create a new 2D point with the same coordinates as a specified point.
     */
    constexpr Point2D(const Point2D<T>& cpy): x(cpy.x), y(cpy.y) {}

    /**
     * Create a new 2D point with the specified coordinates.
     */
    constexpr Point2D(T x, T y):  x(x), y(y) {}

    /**
     * The X and Y coordinates of this point.
     */
    T x, y;

    /**
     * Set the value of this point to the current value of another.
     */
    Point2D<T>& operator=(const Point2D<T>& cpy)
    {
        x = cpy.x;
        y = cpy.y;
        return *this;
    }

    /**
     * Get the sum of the coordinates of two points.
     */
    constexpr Point2D<T> operator+(const Point2D<T>& p)
    {
        return Point2D<T>(x + p.x, y + p.y);
    }

    /**
     * Add the coordinates of a specified point to this one.
     */
    Point2D<T>& operator+=(const Point2D<T>& p)
    {
        x += p.x;
        y += p.y;
        return *this;
    }

    /**
     * Get the coordinates of this points minus the coordinates of a specified
     * point.
     */
    constexpr Point2D<T> operator-(const Point2D<T>& p)
    {
        return Point2D<T>(x - p.x, y - p.y);
    }

    /**
     * Subtract the coordinates of a specified point from this one.
     */
    Point2D<T>& operator-=(const Point2D<T>& p)
    {
        x -= p.x;
        y -= p.y;
        return *this;
    }

    /**
     * Check if the location within this point exactly matches that of another.
     */
    constexpr bool operator==(const Point2D<T>& p)
    {
        return x == p.x && y == p.y;
    }

    /**
     * Check if the location within this point differs from another.
     */
    constexpr bool operator!=(const Point2D<T>& p)
    {
        return !(*this == p);
    }
};
}
