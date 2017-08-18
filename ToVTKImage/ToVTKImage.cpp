#include "ToVTKImage.h"

ToVTKImage::ToVTKImage()
{
}

ToVTKImage::~ToVTKImage()
{
}

itk::ImageToVTKImageFilter<ToVTKImage::ImageType>::Pointer ToVTKImage::GetConverter() const noexcept
{
	NULLPTR_ERROR(converter_.GetPointer());
	return converter_;
}

itk::ImageToVTKImageFilter<ToVTKImage::ImageType>::ConstPointer ToVTKImage::GetConstConverter() const noexcept
{
	return GetConverter();
}

void ToVTKImage::SetConverter(itk::ImageToVTKImageFilter<ToVTKImage::ImageType>::Pointer converter) noexcept
{
	NULLPTR_WARNING(converter_.GetPointer());
	converter_ = converter;
	NULLPTR_ERROR(converter_.GetPointer());
}

void ToVTKImage::Execute()
{
	Instantiate();
	GetConverter()->SetInput(Image::GetImage());
	GetConverter()->Update();
	VTKImageWrapper::SetImage(GetConverter()->GetOutput());
}

void ToVTKImage::Instantiate()
{
	SetConverter(itk::ImageToVTKImageFilter<ImageType>::New());
}