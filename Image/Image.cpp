#include "Image.h"

Image::Image()
{
}

Image::~Image()
{
}

Image::ImageType::Pointer Image::GetImage() const noexcept
{
	NULLPTR_ERROR(image_.GetPointer());
	return image_;
}

Image::ImageType::ConstPointer Image::GetConstImage() const noexcept
{
	NULLPTR_ERROR(image_.GetPointer());
	return image_;
}

void Image::SetImage(Image::ImageType::Pointer image) noexcept
{
	NULLPTR_WARNING(image_.GetPointer());
	image_ = image;
}