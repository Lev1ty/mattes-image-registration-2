#pragma once
#include "Image.h"
#include "Path.h"
#include <itkImageFileWriter.h>
class Writer :
	public Image,
	public Path
{
protected:
	using WriterType = itk::ImageFileWriter<ImageType>;
public:
	Writer();
	~Writer();
public:
	WriterType::Pointer GetWriter() const noexcept;
	WriterType::ConstPointer GetConstWriter() const noexcept;
	void SetWriter(WriterType::Pointer) noexcept;
public:
	void Execute();
private:
	WriterType::Pointer writer_;
};
