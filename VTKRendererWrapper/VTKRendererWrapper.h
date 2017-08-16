#pragma once
#include "CHECK.h"
#include <vtkRenderer.h>
#include <vtkSmartPointer.h>
class VTKRendererWrapper :
	virtual public CHECK
{
public:
	VTKRendererWrapper();
	~VTKRendererWrapper();
public:
	vtkRenderer* GetRenderer() const noexcept;
	vtkRenderer* const GetConstRenderer() const noexcept;
	void SetRenderer(vtkRenderer*) noexcept;
private:
	vtkSmartPointer<vtkRenderer> renderer_;
};
