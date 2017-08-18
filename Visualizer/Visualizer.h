#pragma once
#include "VTKCompositeOpacity.h"
#include "VTKImageWrapper.h"
#include "VTKRendererWrapper.h"
#include "VTKRenderWindowWrapper.h"
#include "VTKRenderWindowInteractorWrapper.h"
#include "VTKSmartVolumeMapperWrapper.h"
#include "VTKVolumeWrapper.h"
#include "VTKVolumePropertyWrapper.h"
/// \see http://www.vtk.org/Wiki/VTK/Examples/Cxx/VolumeRendering/SmartVolumeMapper
class Visualizer :
	public VTKCompositeOpacity,
	public VTKImageWrapper,
	public VTKRendererWrapper,
	public VTKRenderWindowInteractorWrapper,
	public VTKRenderWindowWrapper,
	public VTKSmartVolumeMapperWrapper,
	public VTKVolumePropertyWrapper,
	public VTKVolumeWrapper
{
public:
	Visualizer();
	~Visualizer();
public:
	void Execute();
	void Instantiate();
};