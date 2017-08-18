#pragma once
#include "VTKPiecewiseFunctionWrapper.h"
class VTKCompositeOpacity :
	virtual public VTKPiecewiseFunctionWrapper
{
public:
	VTKCompositeOpacity();
	~VTKCompositeOpacity();
public:
	vtkPiecewiseFunction* GetCompositeOpacity() const noexcept;
	vtkPiecewiseFunction* const GetConstCompositeOpacity() const noexcept;
	void SetCompositeOpacity(vtkPiecewiseFunction*) noexcept;
};
