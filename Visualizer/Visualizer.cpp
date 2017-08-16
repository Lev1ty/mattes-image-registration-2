#include "Visualizer.h"

Visualizer::Visualizer()
{
}

Visualizer::~Visualizer()
{
}

vtkRenderWindow* GetRenderWindow() const noexcept
{
  NULLPTR_ERROR(render_window_.GetPointer());
  return render_window_.GetPointer();
}

vtkRenderWindow* const GetConstRenderWindow() const noexcept
{
  NULLPTR_ERROR(render_window_.GetPointer());
  return render_window_.GetPointer();
}

void SetRenderWindow(vtkRenderWindow* render_window) noexcept
{
  NULLPTR_WARNING(render_window_.GetPointer());
  render_window_ = render_window;
  NULLPTR_ERROR(render_window_.GetPointer());
}

vtkRenderer* GetRenderer() const noexcept
{
  NULLPTR_ERROR(renderer_.GetPointer());
  return renderer_.GetPointer();
}

vtkRenderer* const GetConstRenderer() const noexcept
{
  NULLPTR_ERROR(renderer_.GetPointer());
  return renderer_.GetPointer();
}

void SetRenderer(vtkRenderer* renderer) noexcept
{
  NULLPTR_WARNING(renderer_.GetPointer());
  renderer_ = renderer;
  NULLPTR_ERROR(renderer_.GetPointer());  
}

vtkRenderWindowInteractor* GetRenderWindowInteractor() const noexcept
{
  NULLPTR_ERROR(render_window_interactor_.GetPointer());
  return render_window_interactor_.GetPointer();
}

vtkRenderWindowInteractor* const GetConstRenderWindowInteractor() const noexcept
{
  NULLPTR_ERROR(render_window_interactor_.GetPointer());
  return render_window_interactor_.GetPointer();
}

void SetRenderWindowIneractor(vtkRenderWindowInteractor* render_window_interactor) noexcept
{
  NULLPTR_WARNING(render_window_interactor_.GetPointer());
  render_window_interactor_ = render_window_interactor;
  NULLPTR_ERROR(render_window_interactor_.GetPointer());
}

vtkSmartVolumeMapper* GetSmartVolumeMapper() const noexcept
{
  NULLPTR_ERROR(smart_volume_mapper_.GetPointer());
  return smart_volume_mapper_.GetPointer();
}

vtkSmartVolumeMapper* const GetConstSmartVolumeMapper() noexcept
{
  NULLPTR_ERROR(smart_volume_mapper_.GetPointer());
  return smart_volume_mapper_.GetPointer();
}

void SetSmartVolumeMapper(vtkSmartVolumeMapper* smart_volume_mapper) noexcept
{
  NULLPTR_ERROR(smart_volume_mapper_.GetPointer());
  smart_volume_mapper_ = smart_volume_mapper;
  NULLPTR_WARNING(smart_volume_mapper_.GetPointer());  
}