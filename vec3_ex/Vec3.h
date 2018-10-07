#include <math.h>
#ifndef VEC3_H_
#define VEC3_H_

template<class T>
class Vec3
{
public:
	T x, y, z;

	Vec3();
	Vec3(T x,T y,T z);

	Vec3<T> operator+(const Vec3<T>& other) const;
	Vec3<T> operator=(const Vec3<T>& other);

	void Normalize();
	double distance_to(const Vec3<T>& other) const;

	~Vec3();
};

template<class T>
inline Vec3<T>::Vec3(): x(0), y(0), z(0)
{
}

template<class T>
inline Vec3<T>::Vec3(T x, T y, T z) : x(x), y(y), z(z)
{

}

template<class T>
inline Vec3<T> Vec3<T>::operator+(const Vec3<T>& other) const
{
	return Vec3(this->x + other.x, this->y + other.y , this->z + other.z);
}

template<class T>
inline Vec3<T> Vec3<T>::operator=(const Vec3<T>& other)
{
	if (this != &other)
	{
		x = other.x;
		y = other.y;
		z = other.z;
	}
	return *this;
}

template<class T>
inline void Vec3<T>::Normalize()
{
	T newX = x / (x + y + z);
	T newY = y / (x + y + z);
	T newZ = z / (x + y + z);

	x = newX;
	y = newY;
	z = newZ;
}

template<class T>
inline double Vec3<T>::distance_to(const Vec3<T>& other) const
{
	return sqrt(pow(x - other.x,2)+ pow(y - other.y,2)+ pow(z - other.z,2));
}


template<class T>
inline Vec3<T>::~Vec3()
{
}

#endif // !VEC3_H_
