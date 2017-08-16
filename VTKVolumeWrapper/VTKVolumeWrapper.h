#pragma once
#include "CHECK.h"
#include <vtkVolume.h>
#include <vtkSmartPointer.h>
class VTKVolumeWrapper :
	virtual public CHECK
{
public:
	VTKVolumeWrapper();
	~VTKVolumeWrapper();
public:
	vtkVolume* GetVolume() const noexcept;
	vtkVolume* const GetConstVolume() const noexcept;
	void SetVolume(vtkVolume*) noexcept;
private:
	vtkSmartPointer<vtkVolume> volume_;
};