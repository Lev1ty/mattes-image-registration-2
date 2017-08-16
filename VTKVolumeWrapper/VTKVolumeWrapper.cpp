#include "VTKVolumeWrapper.h"

VTKVolumeWrapper::VTKVolumeWrapper()
{
}

VTKVolumeWrapper::~VTKVolumeWrapper()
{
}

vtkVolume* VTKVolumeWrapper::GetVolume() const noexcept
{
	NULLPTR_ERROR(volume_.GetPointer());
	return volume_.GetPointer();
}

vtkVolume* const VTKVolumeWrapper::GetConstVolume() const noexcept
{
	return GetVolume();
}

void VTKVolumeWrapper::SetVolume(vtkVolume* volume) noexcept
{
	NULLPTR_WARNING(volume_.GetPointer());
	volume_ = volume;
	NULLPTR_ERROR(volume_.GetPointer());
}