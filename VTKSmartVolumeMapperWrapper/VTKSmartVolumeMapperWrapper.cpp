#include "VTKSmartVolumeMapperWrapper.h"

VTKSmartVolumeMapperWrapper::VTKSmartVolumeMapperWrapper()
{
}

VTKSmartVolumeMapperWrapper::~VTKSmartVolumeMapperWrapper()
{
}

vtkSmartVolumeMapper* VTKSmartVolumeMapperWrapper::GetSmartVolumeMapper() const noexcept
{
	NULLPTR_ERROR(smart_volume_mapper_.GetPointer());
	return smart_volume_mapper_.GetPointer();
}

vtkSmartVolumeMapper* const VTKSmartVolumeMapperWrapper::GetConstSmartVolumeMapper() noexcept
{
	return GetSmartVolumeMapper();
}

void VTKSmartVolumeMapperWrapper::SetSmartVolumeMapper(vtkSmartVolumeMapper* smart_volume_mapper) noexcept
{
	NULLPTR_WARNING(smart_volume_mapper_.GetPointer());
	smart_volume_mapper_ = smart_volume_mapper;
	NULLPTR_ERROR(smart_volume_mapper_.GetPointer());
}