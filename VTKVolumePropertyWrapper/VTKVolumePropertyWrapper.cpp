#include "VTKVolumePropertyWrapper.h"

VTKVolumePropertyWrapper::VTKVolumePropertyWrapper()
{
}

VTKVolumePropertyWrapper::~VTKVolumePropertyWrapper()
{
}

vtkVolumeProperty* VTKVolumePropertyWrapper::GetVolumeProperty() const noexcept
{
	NULLPTR_ERROR(volume_property_.GetPointer());
	return volume_property_.GetPointer();
}

vtkVolumeProperty* const VTKVolumePropertyWrapper::GetConstVolumeProperty() const noexcept
{
	return GetVolumeProperty();
}

void VTKVolumePropertyWrapper::SetVolumeProperty(vtkVolumeProperty* volume_property) noexcept
{
	NULLPTR_WARNING(volume_property_.GetPointer());
	volume_property_ = volume_property;
	NULLPTR_ERROR(volume_property_.GetPointer());
}