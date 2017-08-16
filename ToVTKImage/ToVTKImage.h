#pragma once
#include "Image.h"
#include "VTKImage.h"
#include <itkImageToVTKImageFilter.h>
class ToVTKImage :
	public Image,
	public VTKImage
{
public:
	ToVTKImage();
	~ToVTKImage();
};
