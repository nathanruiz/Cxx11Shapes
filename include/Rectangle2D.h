#pragma once
#include "Point2D.h"

namespace Cxx11Shapes
{

/**
 * A class for managing 2D rectangles using a given type for storing the
 * location, width, and height.
 */
template<typename T>
class Rectangle2D
{
public:
    /**
     * The top left corner of this rectangle.
     */
    Point2D<T> location;

    /**
     * The height and width of this rectangle.
     */
    T width, height;

    /**
     * Create a new rectangle with a specified top-left corner, width and
     * height.
     */
    constexpr Rectangle2D(): width(0), height(0) {}

    /**
     * Create a new rectangle with a specified top-left corner, width and
     * height.
     */
    constexpr Rectangle2D(const Point2D<T>& top_left, T width, T height):
        location(top_left), width(width), height(height) {}

    /**
     * Get the point at the center of this rectangle.
     */
    constexpr Point2D<T> getCenter() const
    {
        return Point2D<T>(location.x + (width / 2), location.y + (height / 2));
    }

    /**
     * Get the X coordinate of the right of this rectangle.
     */
    constexpr T getRight() const
    {
        return location.x + width;
    }

    /**
     * Get the Y coordinate of the bottom of this rectangle.
     */
    constexpr T getBottom() const
    {
        return location.y + height;
    }

    /**
     * Get the area of this rectangle.
     */
    constexpr T getArea() const
    {
        return width * height;
    }

    /**
     * Check if a specified rectangle represents the same area as this one (the
     * same location and size).
     */
    constexpr bool operator==(const Rectangle2D& r) const
    {
        return location == r.location && width == r.width && height == r.height;
    }

    /**
     * Check if a specified rectangle doesn't represents the same area as this
     * one (the same location and size).
     */
    constexpr bool operator!=(const Rectangle2D& r) const
    {
        return !(*this == r);
    }

    /**
     * Set the location of this rectangle so that it is centered at a given
     * point.
     */
    void setCenter(const Point2D<T>& n)
    {
        location = n - Point2D<T>(width / 2, height / 2);
    }

    /**
     * Set the location of this rectangle so that it's right side is equal to
     * the specified value.
     */
    void setRight(T n)
    {
        location.x = n - width;
    }

    /**
     * Set the location of this rectangle so that it's bottom Y value is equal
     * to the specified value.
     */
    void setBottom(T n)
    {
        location.y = n - height;
    }
};
}
