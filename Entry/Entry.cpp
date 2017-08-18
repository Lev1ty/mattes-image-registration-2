#include "Entry.h"

Entry::Entry()
{
}

Entry::~Entry()
{
}

int Entry::Execute()
{
	auto reader = std::make_unique<Reader>();
	reader->SetPath(new std::string{ "C:/Users/Adam Yu/Desktop/Iterations2/FinalCombined.mhd" });
	reader->Execute();
	auto writer = std::make_unique<Writer>();
	//writer->SetPath(new std::string{ "c:/users/adam yu/desktop/output.mhd" });
	//writer->SetImage(reader->GetImage());
	//writer->Execute();
	auto converter = std::make_unique<ToVTKImage>();
	converter->Image::SetImage(reader->GetImage());
	converter->Execute();
	auto visualizer = std::make_unique<Visualizer>();
	visualizer->SetImage(converter->VTKImageWrapper::GetImage());
	visualizer->Execute();
	return 0;
}