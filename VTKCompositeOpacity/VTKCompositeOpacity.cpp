#include "VTKCompositeOpacity.h"

VTKCompositeOpacity::VTKCompositeOpacity()
{
}

VTKCompositeOpacity::~VTKCompositeOpacity()
{
}

vtkPiecewiseFunction* VTKCompositeOpacity::GetCompositeOpacity() const noexcept
{
	return GetPiecewiseFunction();
}

vtkPiecewiseFunction* const VTKCompositeOpacity::GetConstCompositeOpacity() const noexcept
{
	return GetConstPiecewiseFunction();
}

void VTKCompositeOpacity::SetCompositeOpacity(vtkPiecewiseFunction* piecewise_function) noexcept
{
	SetPiecewiseFunction(piecewise_function);
}