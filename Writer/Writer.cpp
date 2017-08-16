#include "Writer.h"

Writer::Writer()
{
}

Writer::~Writer()
{
}

itk::ImageFileWriter<Writer::ImageType>::Pointer Writer::GetWriter() const noexcept
{
	NULLPTR_ERROR(writer_.GetPointer());
	return writer_;
}

itk::ImageFileWriter<Writer::ImageType>::ConstPointer Writer::GetConstWriter() const noexcept
{
	return GetWriter();
}

void Writer::SetWriter(itk::ImageFileWriter<ImageType>::Pointer writer) noexcept
{
	NULLPTR_WARNING(writer_.GetPointer());
	writer_ = writer;
	NULLPTR_ERROR(writer_.GetPointer());
}

void Writer::Execute()
{
	Instantiate();
	GetWriter()->SetFileName(GetConstPath()->c_str());
	GetWriter()->SetInput(GetConstImage());
	GetWriter()->Update();
}

void Writer::Instantiate()
{
	SetWriter(itk::ImageFileWriter<ImageType>::New());
}