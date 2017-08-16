#pragma once
#include "CHECK.h"
#include <vtkVolumeProperty.h>
#include <vtkSmartPointer.h>
class VTKVolumePropertyWrapper :
	virtual public CHECK
{
public:
	VTKVolumePropertyWrapper();
	~VTKVolumePropertyWrapper();
public:
	vtkVolumeProperty* GetVolumeProperty() const noexcept;
	vtkVolumeProperty* const GetConstVolumeProperty() const noexcept;
	void SetVolumeProperty(vtkVolumeProperty*) noexcept;
private:
	vtkSmartPointer<vtkVolumeProperty> volume_property_;
};
