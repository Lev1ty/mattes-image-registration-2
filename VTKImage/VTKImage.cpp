#include "VTKImage.h"

VTKImage::VTKImage()
{
}

VTKImage::~VTKImage()
{
}

vtkImageData* GetImage() const noexcept
{
  NULLPTR_ERROR(image_.GetPointer());
  return image_.GetPointer();
}

vtkImageData* const GetConstImage() const noexcept
{
  NULLPTR_ERROR(image_.GetPointer());
  return image_.GetPointer();
}

void SetImage(vtkImageData* image) noexcept
{
  NULLPTR_WARNING(image_.GetPointer());
  image_ = image;
  NULLPTR_ERROR(image_.GetPointer());
}