#pragma once
#include "CHECK.h"
#include <vtkImageData.h>
class VTKImage :
	virtual public CHECK
{
public:
	VTKImage();
	~VTKImage();
public:
	vtkImageData* GetImage() const noexcept;
	vtkImageData* const GetConstImage() const noexcept;
	void SetImage(vtkImageData*) noexcept;
private:
	vtkSmartPointer<vtkImageData> image_;
};
