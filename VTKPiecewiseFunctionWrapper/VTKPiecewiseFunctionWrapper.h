#include "CHECK.h"
#include <vtkPiecewiseFunction.h>
#include <vtkSmartPointer.h>
class VTKPiecewiseFunctionWrapper :
	virtual public CHECK
{
public:
	VTKPiecewiseFunctionWrapper();
	~VTKPiecewiseFunctionWrapper();
protected:
	vtkPiecewiseFunction* GetPiecewiseFunction() const noexcept;
	vtkPiecewiseFunction* const GetConstPiecewiseFunction() const noexcept;
	void SetPiecewiseFunction(vtkPiecewiseFunction*) noexcept;
private:
	vtkSmartPointer<vtkPiecewiseFunction> piecewise_function_;
};