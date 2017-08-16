#include "VTKImageWrapper.h"

VTKImageWrapper::VTKImageWrapper()
{
}

VTKImageWrapper::~VTKImageWrapper()
{
}

vtkImageData* VTKImageWrapper::GetImage() const noexcept
{
	NULLPTR_ERROR(image_.GetPointer());
	return image_.GetPointer();
}

vtkImageData* const VTKImageWrapper::GetConstImage() const noexcept
{
	return GetImage();
}

void VTKImageWrapper::SetImage(vtkImageData* image) noexcept
{
	NULLPTR_WARNING(image_.GetPointer());
	image_ = image;
	NULLPTR_ERROR(image_.GetPointer());
}