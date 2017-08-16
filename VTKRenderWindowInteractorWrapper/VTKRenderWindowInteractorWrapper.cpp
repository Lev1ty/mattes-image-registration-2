#include "VTKRenderWindowInteractorWrapper.h"

VTKRenderWindowInteractorWrapper::VTKRenderWindowInteractorWrapper()
{
}

VTKRenderWindowInteractorWrapper::~VTKRenderWindowInteractorWrapper()
{
}

vtkRenderWindowInteractor* VTKRenderWindowInteractorWrapper::GetRenderWindowInteractor() const noexcept
{
	NULLPTR_ERROR(render_window_interactor_.GetPointer());
	return render_window_interactor_.GetPointer();
}

vtkRenderWindowInteractor* const VTKRenderWindowInteractorWrapper::GetConstRenderWindowInteractor() const noexcept
{
	return GetRenderWindowInteractor();
}

void VTKRenderWindowInteractorWrapper::SetRenderWindowInteractor(vtkRenderWindowInteractor* render_window_interactor) noexcept
{
	NULLPTR_WARNING(render_window_interactor_.GetPointer());
	render_window_interactor_ = render_window_interactor;
	NULLPTR_ERROR(render_window_interactor_.GetPointer());
}