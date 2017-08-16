#pragma once
#include "CHECK.h"
#include <string>
#include <memory>
class Path :
	virtual public CHECK
{
public:
	Path();
	~Path();
public:
	std::string* GetPath() const noexcept;
	std::string* const GetConstPath() const noexcept;
	void SetPath(std::string*) noexcept;
private:
	std::unique_ptr<std::string> path_;
};
