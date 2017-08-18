#pragma once
#include "Image.h"
#include "VTKImageWrapper.h"
#include <itkImageToVTKImageFilter.h>
/// \see https://itk.org/ITKExamples/src/Bridge/VtkGlue/ConvertAnitkImageTovtkImageData/Documentation.html
class ToVTKImage :
	public Image,
	public VTKImageWrapper
{
public:
	ToVTKImage();
	~ToVTKImage();
public:
	itk::ImageToVTKImageFilter<ImageType>::Pointer GetConverter() const noexcept;
	itk::ImageToVTKImageFilter<ImageType>::ConstPointer GetConstConverter() const noexcept;
	void SetConverter(itk::ImageToVTKImageFilter<ImageType>::Pointer) noexcept;
public:
	void Execute();
	void Instantiate();
private:
	itk::ImageToVTKImageFilter<ImageType>::Pointer converter_;
};
