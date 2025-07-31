#include "Factory.h"

template<typename T>
inline T* Factory<T>::CreateObject()
{
	return new T();
}
