#pragma once
#include "../CoreFunction/SingletonT.h"

template <typename T>
class Factory : public SingletonT<Factory>
{
public:
	T CreateObject(T p_object);
};