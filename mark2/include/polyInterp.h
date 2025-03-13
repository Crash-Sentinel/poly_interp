#pragma once

#ifndef POLYINTERP_H
#define POLYINTERP_H
#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    float x;
    float y;
} Point;

float poly_interp(
    float x,
    const Point* points // could use restrict for C
);

#ifdef __cplusplus
}
#endif


#endif // POLYINTERP_H