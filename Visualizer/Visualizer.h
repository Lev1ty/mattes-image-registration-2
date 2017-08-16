#pragma once
#include "VTKImage.h"
class Visualizer :
	public VTKImage
{
public:
	Visualizer();
	~Visualizer();
public:
	vtkRenderWindow* GetRenderWindow() const noexcept;
	vtkRenderWindow* const GetConstRenderWindow() const noexcept;
	void SetRenderWindow(vtkRenderWindow*) noexcept;
	vtkRenderer* GetRenderer() const noexcept;
	vtkRenderer* const GetConstRenderer() const noexcept;
	void SetRenderer(vtkRenderer*) noexcept;
	vtkRenderWindowInteractor* GetRenderWindowInteractor() const noexcept;
	vtkRenderWindowInteractor* const GetConstRenderWindowInteractor() const noexcept;
	void SetRenderWindowIneractor(vtkRenderWindowInteractor*) noexcept;
	vtkSmartVolumeMapper* GetSmartVolumeMapper() const noexcept;
	vtkSmartVolumeMapper* const GetConstSmartVolumeMapper() noexcept;
	void SetSmartVolumeMapper(vtkSmartVolumeMapper*) noexcept;
private:
	vtkSmartPointer<vtkRenderWindow> render_window_;
	vtkSmartPointer<vtkRenderer> renderer_;
	vtkSmartPointer<vtkRenderWindowInteractor> render_window_interactor_;
	vtkSmartPointer<vtkSmartVolumeMapper> smart_volume_mapper_;
};
