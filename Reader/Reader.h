#pragma once
#include "Image.h"
#include "Path.h"
#include <itkImageFileReader.h>
class Reader :
	public Image,
	public Path
{
protected:
	using ReaderType = itk::ImageFileReader<ImageType>;
public:
	Reader();
	~Reader();
public:
	ReaderType::Pointer GetReader() const noexcept;
	ReaderType::ConstPointer GetConstReader() const noexcept;
	void SetReader(ReaderType::Pointer) noexcept;
public:
	void Execute();
private:
	ReaderType::Pointer reader_;
};
