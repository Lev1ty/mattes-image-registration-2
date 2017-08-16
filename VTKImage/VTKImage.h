#pragma once
#include "CHECK.h"
#include <vtkImageData.h>
class VTKImage :
	virtual public CHECK
{
public:
	VTKImage();
	~VTKImage();
};
