#pragma once
#include "CHECK.h"
#include <vtkSmartVolumeMapper.h>
#include <vtkSmartPointer.h>
class VTKSmartVolumeMapperWrapper :
	virtual public CHECK
{
public:
	VTKSmartVolumeMapperWrapper();
	~VTKSmartVolumeMapperWrapper();
public:
	vtkSmartVolumeMapper* GetSmartVolumeMapper() const noexcept;
	vtkSmartVolumeMapper* const GetConstSmartVolumeMapper() noexcept;
	void SetSmartVolumeMapper(vtkSmartVolumeMapper*) noexcept;
private:
	vtkSmartPointer<vtkSmartVolumeMapper> smart_volume_mapper_;
};
