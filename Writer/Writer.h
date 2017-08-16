#pragma once
#include "Image.h"
#include "Path.h"
#include <itkImageFileWriter.h>
class Writer :
	public Image,
	public Path
{
public:
	Writer();
	~Writer();
public:
	itk::ImageFileWriter<ImageType>::Pointer GetWriter() const noexcept;
	itk::ImageFileWriter<ImageType>::ConstPointer GetConstWriter() const noexcept;
	void SetWriter(itk::ImageFileWriter<ImageType>::Pointer) noexcept;
public:
	void Execute();
	void Instantiate();
private:
	itk::ImageFileWriter<ImageType>::Pointer writer_;
};
