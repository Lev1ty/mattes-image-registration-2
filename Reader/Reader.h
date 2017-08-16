#pragma once
#include "Image.h"
#include "Path.h"
#include <itkImageFileReader.h>
class Reader :
	public Image,
	public Path
{
public:
	Reader();
	~Reader();
public:
	itk::ImageFileReader<ImageType>::Pointer GetReader() const noexcept;
	itk::ImageFileReader<ImageType>::ConstPointer GetConstReader() const noexcept;
	void SetReader(itk::ImageFileReader<ImageType>::Pointer) noexcept;
public:
	void Execute();
	void Instantiate();
private:
	itk::ImageFileReader<ImageType>::Pointer reader_;
};
