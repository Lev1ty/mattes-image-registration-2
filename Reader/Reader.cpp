#include "Reader.h"

Reader::Reader()
{
}

Reader::~Reader()
{
}

itk::ImageFileReader<Reader::ImageType>::Pointer Reader::GetReader() const noexcept
{
	NULLPTR_ERROR(reader_.GetPointer());
	return reader_;
}

itk::ImageFileReader<Reader::ImageType>::ConstPointer Reader::GetConstReader() const noexcept
{
	return GetReader();
}

void Reader::SetReader(itk::ImageFileReader<ImageType>::Pointer reader) noexcept
{
	NULLPTR_WARNING(reader_.GetPointer());
	reader_ = reader;
	NULLPTR_ERROR(reader_.GetPointer());
}

void Reader::Execute()
{
	Instantiate();
	GetReader()->SetFileName(GetConstPath()->c_str());
	GetReader()->Update();
	SetImage(GetReader()->GetOutput());
}

void Reader::Instantiate()
{
	SetReader(itk::ImageFileReader<ImageType>::New());
}