#pragma once
#include "CHECK.h"
#include <vtkImageData.h>
#include <vtkSmartPointer.h>
class VTKImageWrapper :
	virtual public CHECK
{
public:
	VTKImageWrapper();
	~VTKImageWrapper();
public:
	vtkImageData* GetImage() const noexcept;
	vtkImageData* const GetConstImage() const noexcept;
	void SetImage(vtkImageData*) noexcept;
private:
	vtkSmartPointer<vtkImageData> image_;
};
