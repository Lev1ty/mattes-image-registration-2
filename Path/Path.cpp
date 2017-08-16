#include "Path.h"

Path::Path()
{
}

Path::~Path()
{
}

std::string* Path::GetPath() const noexcept
{
	NULLPTR_ERROR(path_.get());
	return path_.get();
}

std::string* const Path::GetConstPath() const noexcept
{
	NULLPTR_ERROR(path_.get());
	return path_.get();
}

void Path::SetPath(std::string* path) noexcept
{
	NULLPTR_WARNING(path_.get());
	path_.reset(path);
}