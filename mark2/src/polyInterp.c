#include "..\include\polyInterp.h"

float poly_interp (
    float x,
    const Point* points
)
{
    float t0 = (x - points[1].x) * (x - points[2].x) / ((points[0].x - points[1].x) * (points[0].x - points[2].x));
    float t1 = (x - points[0].x) * (x - points[2].x) / ((points[1].x - points[0].x) * (points[1].x - points[2].x));
    float t2 = (x - points[0].x) * (x - points[1].x) / ((points[2].x - points[0].x) * (points[2].x - points[1].x));
    return t0 * points[0].y + t1 * points[1].y + t2 * points[2].y;
}