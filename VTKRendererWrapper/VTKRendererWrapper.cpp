#include "VTKRendererWrapper.h"

VTKRendererWrapper::VTKRendererWrapper()
{
}

VTKRendererWrapper::~VTKRendererWrapper()
{
}

vtkRenderer* VTKRendererWrapper::GetRenderer() const noexcept
{
	NULLPTR_ERROR(renderer_.GetPointer());
	return renderer_.GetPointer();
}

vtkRenderer* const VTKRendererWrapper::GetConstRenderer() const noexcept
{
	return GetRenderer();
}

void VTKRendererWrapper::SetRenderer(vtkRenderer* renderer) noexcept
{
	NULLPTR_WARNING(renderer_.GetPointer());
	renderer_ = renderer;
	NULLPTR_ERROR(renderer_.GetPointer());
}