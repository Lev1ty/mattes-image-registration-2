#pragma once
#include "Image.h"
#include "VTKImageWrapper.h"
#include <itkImageToVTKImageFilter.h>
class ToVTKImage :
	public Image,
	public VTKImageWrapper
{
public:
	ToVTKImage();
	~ToVTKImage();
};
