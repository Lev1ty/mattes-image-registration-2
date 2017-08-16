#pragma once
#include "CHECK.h"
#include <vtkRenderWindow.h>
#include <vtkSmartPointer.h>
class VTKRenderWindowWrapper :
	virtual public CHECK
{
public:
	VTKRenderWindowWrapper();
	~VTKRenderWindowWrapper();
public:
	vtkRenderWindow* GetRenderWindow() const noexcept;
	vtkRenderWindow* const GetConstRenderWindow() const noexcept;
	void SetRenderWindow(vtkRenderWindow*) noexcept;
private:
	vtkSmartPointer<vtkRenderWindow> render_window_;
};
