#include "Visualizer.h"

Visualizer::Visualizer()
{
}

Visualizer::~Visualizer()
{
}

void Visualizer::Execute()
{
	Instantiate();
	GetRenderWindow()->AddRenderer(GetRenderer());
	GetRenderWindowInteractor()->SetRenderWindow(GetRenderWindow());
	GetRenderWindow()->Render();
	GetSmartVolumeMapper()->SetBlendModeToComposite();
	GetSmartVolumeMapper()->SetInputData(GetImage());
	GetVolumeProperty()->ShadeOff();
	GetVolumeProperty()->SetInterpolationType(VTK_LINEAR_INTERPOLATION);
	GetVolume()->SetMapper(GetSmartVolumeMapper());
	GetVolume()->SetProperty(GetVolumeProperty());
	GetRenderer()->AddViewProp(GetVolume());
	GetRenderer()->ResetCamera();
	GetRenderWindow()->Render();
	GetRenderWindowInteractor()->Render();
}

void Visualizer::Instantiate()
{
	SetRenderWindow(vtkRenderWindow::New());
	SetRenderer(vtkRenderer::New());
	SetRenderWindowInteractor(vtkRenderWindowInteractor::New());
	SetSmartVolumeMapper(vtkSmartVolumeMapper::New());
	SetVolumeProperty(vtkVolumeProperty::New());
	SetVolume(vtkVolume::New());
}