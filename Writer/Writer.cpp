#include "Writer.h"

Writer::Writer()
{
}

Writer::~Writer()
{
}

Writer::WriterType::Pointer Writer::GetWriter() const noexcept
{
	NULLPTR_ERROR(writer_.GetPointer());
	return writer_;
}

Writer::WriterType::ConstPointer Writer::GetConstWriter() const noexcept
{
	NULLPTR_ERROR(writer_.GetPointer());
	return writer_;
}

void Writer::SetWriter(Writer::WriterType::Pointer writer) noexcept
{
	NULLPTR_WARNING(writer_.GetPointer());
	writer_ = writer;
}

void Writer::Execute()
{
	SetWriter(WriterType::New());
	GetWriter()->SetFileName(GetConstPath()->c_str());
	GetWriter()->SetInput(GetConstImage());
	GetWriter()->Update();
}