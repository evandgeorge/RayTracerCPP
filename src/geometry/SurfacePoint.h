//
// Created by Evan George on 12/15/19.
//

#ifndef RAYTRACERCPP_SURFACEPOINT_H
#define RAYTRACERCPP_SURFACEPOINT_H

#include "Vector3D.h"

namespace raytracer {

	class Shape;

	struct SurfacePoint {

		SurfacePoint() {}

		SurfacePoint(const Vector3D &position, const Vector3D &surfaceNormal, const Shape* shape)
			: position(position), surfaceNormal(surfaceNormal), shape(shape) {}

		const Vector3D &getPosition() { return position; }
		const Vector3D &getSurfaceNormal() { return surfaceNormal; }

	private:
		Vector3D position;			//position of the point on the objects surface
		Vector3D surfaceNormal;		//surface normal at the point

		const Shape* shape;			//pointer to shape the surface point lies on
	};

}

#endif //RAYTRACERCPP_SURFACEPOINT_H