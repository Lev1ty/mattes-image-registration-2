#include "VTKPiecewiseFunctionWrapper.h"

VTKPiecewiseFunctionWrapper::VTKPiecewiseFunctionWrapper()
{
}

VTKPiecewiseFunctionWrapper::~VTKPiecewiseFunctionWrapper()
{
}

vtkPiecewiseFunction* VTKPiecewiseFunctionWrapper::GetPiecewiseFunction() const noexcept
{
	NULLPTR_ERROR(piecewise_function_.GetPointer());
	return piecewise_function_.GetPointer();
}

vtkPiecewiseFunction* const VTKPiecewiseFunctionWrapper::GetConstPiecewiseFunction() const noexcept
{
	return GetPiecewiseFunction();
}

void VTKPiecewiseFunctionWrapper::SetPiecewiseFunction(vtkPiecewiseFunction* piecewise_function) noexcept
{
	NULLPTR_WARNING(piecewise_function_.GetPointer());
	piecewise_function_ = piecewise_function;
	NULLPTR_ERROR(piecewise_function_.GetPointer());
}