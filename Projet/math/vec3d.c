/*
 * vec3d.c
 *
 *  Created on: 12 nov. 2026
 *      Author: DENIZETMAXIME
 */

#include "vec3d.h"
#include <math.h>

void setVec(vec3d_t *vec, double x, double y, double z) {
	vec->x = x;
	vec->y = y;
	vec->z = z;
}

double lenghtVecSqrd(vec3d_t vec) {
	return vec.x * vec.x + vec.y * vec.y + vec.z * vec.z;
}

double lenghtVec(vec3d_t vec) {
	return sqrt(lenghtVecSqrd(vec));
}

void normalizeVec(vec3d_t *vec) {
	double lenght = lenghtVec(*vec);

	vec->x /= lenght;
	vec->y /= lenght;
	vec->z /= lenght;
}

double distanceVecSqrd(vec3d_t vecA, vec3d_t vecB) {
	double xd = vecB.x - vecA.x;
	double yd = vecB.y - vecA.y;
	double zd = vecB.z - vecA.z;

	return xd * xd + yd * yd + zd * zd;
}

double distanceVec(vec3d_t vecA, vec3d_t vecB) {
	return sqrt(distanceVecSqrd(vecA, vecB));
}

double dotVec(vec3d_t vecA, vec3d_t vecB) {
	double x = vecA.x * vecB.x;
	double y = vecA.y * vecB.y;
	double z = vecA.z * vecB.z;

	return x + y + z;
}

void addVec(vec3d_t *vec, double x, double y, double z) {
	vec->x += x;
	vec->y += y;
	vec->z += z;
}

void addValVec(vec3d_t *vec, double value) {
	vec->x += value;
	vec->y += value;
	vec->z += value;
}

void subVec(vec3d_t *vec, double x, double y, double z) {
	vec->x -= x;
	vec->y -= y;
	vec->z -= z;
}

void subValVec(vec3d_t *vec, double value) {
	vec->x -= value;
	vec->y -= value;
	vec->z -= value;
}

void mulVec(vec3d_t *vec, double x, double y, double z) {
	vec->x *= x;
	vec->y *= y;
	vec->z *= z;
}

void mulValVec(vec3d_t *vec, double value) {
	vec->x *= value;
	vec->y *= value;
	vec->z *= value;
}

void divVec(vec3d_t *vec, double x, double y, double z) {
	vec->x /= x;
	vec->y /= y;
	vec->z /= z;
}

void divValVec(vec3d_t *vec, double value) {
	vec->x /= value;
	vec->y /= value;
	vec->z /= value;
}

void negateVec(vec3d_t *vec) {
	vec->x = -vec->x;
	vec->y = -vec->y;
	vec->z = -vec->z;
}

int equalsVec(vec3d_t vecA, vec3d_t vecB) {
	return vecA.x == vecB.x && vecA.y == vecB.y && vecA.z == vecB.z ? VEC_EQUAL : VEC_INEQUAL;
}
