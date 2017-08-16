#include "Reader.h"

Reader::Reader()
{
}

Reader::~Reader()
{
}

Reader::ReaderType::Pointer Reader::GetReader() const noexcept
{
	NULLPTR_ERROR(reader_.GetPointer());
	return reader_;
}

Reader::ReaderType::ConstPointer Reader::GetConstReader() const noexcept
{
	NULLPTR_ERROR(reader_.GetPointer());
	return reader_;
}

void Reader::SetReader(Reader::ReaderType::Pointer reader) noexcept
{
	NULLPTR_WARNING(reader_.GetPointer());
	reader_ = reader;
}

void Reader::Execute()
{
	SetReader(ReaderType::New());
	GetReader()->SetFileName(GetConstPath()->c_str());
	GetReader()->Update();
	SetImage(GetReader()->GetOutput());
}