#pragma once
#include <exception>
#include <iostream>
class CHECK
{
protected:
	template <typename T>
	[[noreturn]] void NULLPTR_ERROR(const T* t) const
	{
		if (t == nullptr) throw std::exception("NULLPTR_ERROR");
	}
	template <typename T>
	void NULLPTR_WARNING(const T* t) const noexcept
	{
		if (t == nullptr) std::cerr << "NULLPTR_WARNING" << std::endl;
	}
};