//
// Created by Evan George on 11/3/19.
//

#ifndef RAYTRACERCPP_VECTOR3D_H
#define RAYTRACERCPP_VECTOR3D_H

namespace raytracer {

	class Vector3D {
	public:
		//CONSTRUCTOR
		Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

		//ACCESSORS
		double getX() const { return x; }
		double getY() const { return y; }
		double getZ() const { return z; }

		double magnitude() const;					//returns the magnitude of the vector
		double dotProduct(const Vector3D &v) const;	//returns the dot product of this and v

		//OPERATORS
		bool operator==(const Vector3D &v) const;	//returns true if the vectors are exactly identical
	private:
		double x, y, z;
	};

	//returns a Vector3D in the direction of (x, y, z) with size 1
	Vector3D getNormalizedVector(double x, double y, double z);
}
#endif //RAYTRACERCPP_VECTOR3D_H
