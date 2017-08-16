#include "VTKRenderWindowWrapper.h"

VTKRenderWindowWrapper::VTKRenderWindowWrapper()
{
}

VTKRenderWindowWrapper::~VTKRenderWindowWrapper()
{
}

vtkRenderWindow* VTKRenderWindowWrapper::GetRenderWindow() const noexcept
{
	NULLPTR_ERROR(render_window_.GetPointer());
	return render_window_.GetPointer();
}

vtkRenderWindow* const VTKRenderWindowWrapper::GetConstRenderWindow() const noexcept
{
	return GetRenderWindow();
}

void VTKRenderWindowWrapper::SetRenderWindow(vtkRenderWindow* render_window) noexcept
{
	NULLPTR_WARNING(render_window_.GetPointer());
	render_window_ = render_window;
	NULLPTR_ERROR(render_window_.GetPointer());
}