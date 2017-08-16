#pragma once
#include "CHECK.h"
#include <vtkRenderWindowInteractor.h>
#include <vtkSmartPointer.h>
class VTKRenderWindowInteractorWrapper :
	virtual public CHECK
{
public:
	VTKRenderWindowInteractorWrapper();
	~VTKRenderWindowInteractorWrapper();
public:
	vtkRenderWindowInteractor* GetRenderWindowInteractor() const noexcept;
	vtkRenderWindowInteractor* const GetConstRenderWindowInteractor() const noexcept;
	void SetRenderWindowInteractor(vtkRenderWindowInteractor*) noexcept;
private:
	vtkSmartPointer<vtkRenderWindowInteractor> render_window_interactor_;
};
