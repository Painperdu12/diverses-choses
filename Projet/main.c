/*
 * main.c
 *
 *  Created on: 9 nov. 2026
 *      Author: DENIZETMAXIME
 */

#include <stdio.h>
#include "entity/entity.h"
#include "math/vec3d.h"

void printVec(vec3d_t vec) {
	printf("Vec3D: \n");
	printf(" X: %lf \n", vec.x);
	printf(" Y: %lf \n", vec.y);
	printf(" Z: %lf \n", vec.z);
}

int main(void) {

	entity_t entity = { };
	initializeEntity(&entity);
	printEntity(entity);
	setEntityPosition(&entity, 20, 3);
	printEntity(entity);
	addEntityPosition(&entity, -2, 3);
	printEntity(entity);

	vec3d_t vec = { 25, 35.8, -78.5 };
	printVec(vec);
	subVec(&vec, 10, 0, 0);
	printVec(vec);
	mulVec(&vec, 2, 0.5, 0);
	printVec(vec);

	vec3d_t otherVec = { 25, 38.5, -87.5 };
	printf("%d\n", equalsVec(vec, otherVec));

	return 0;
}
