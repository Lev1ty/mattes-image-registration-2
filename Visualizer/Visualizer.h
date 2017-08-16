#pragma once
#include "VTKImageWrapper.h"
#include "VTKRendererWrapper.h"
#include "VTKRenderWindowWrapper.h"
#include "VTKRenderWindowInteractorWrapper.h"
#include "VTKSmartVolumeMapperWrapper.h"
#include "VTKVolumeWrapper.h"
#include "VTKVolumePropertyWrapper.h"
class Visualizer :
	public VTKImageWrapper,
	public VTKRendererWrapper,
	public VTKRenderWindowWrapper,
	public VTKRenderWindowInteractorWrapper,
	public VTKSmartVolumeMapperWrapper,
	public VTKVolumeWrapper,
	public VTKVolumePropertyWrapper
{
public:
	Visualizer();
	~Visualizer();
public:
	void Execute();
	void Instantiate();
};