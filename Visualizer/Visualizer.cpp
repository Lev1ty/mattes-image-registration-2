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
	GetCompositeOpacity()->AddPoint(0, 1);
	GetCompositeOpacity()->AddPoint(768, 1);
	GetCompositeOpacity()->AddPoint(1024, 1);
	GetVolumeProperty()->ShadeOff();
	GetVolumeProperty()->SetInterpolationType(VTK_LINEAR_INTERPOLATION);
	//GetVolumeProperty()->SetScalarOpacity(GetCompositeOpacity());
	std::cout << *GetVolumeProperty()->GetScalarOpacity() << std::endl;
	GetVolume()->SetMapper(GetSmartVolumeMapper());
	GetVolume()->SetProperty(GetVolumeProperty());
	GetRenderer()->AddViewProp(GetVolume());
	GetRenderer()->ResetCamera();
	GetRenderWindow()->Render();
	GetRenderWindowInteractor()->Start();
}

void Visualizer::Instantiate()
{
	SetCompositeOpacity(vtkPiecewiseFunction::New());
	SetRenderer(vtkRenderer::New());
	SetRenderWindow(vtkRenderWindow::New());
	SetRenderWindowInteractor(vtkRenderWindowInteractor::New());
	SetSmartVolumeMapper(vtkSmartVolumeMapper::New());
	SetVolume(vtkVolume::New());
	SetVolumeProperty(vtkVolumeProperty::New());
}