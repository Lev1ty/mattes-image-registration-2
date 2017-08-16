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
	reader->SetPath(new std::string{ "c:/training_001_mr_T1.mhd" });
	reader->Execute();
	auto writer = std::make_unique<Writer>();
	//writer->SetPath(new std::string{ "c:/users/adam yu/desktop/output.mhd" });
	//writer->SetImage(reader->GetImage());
	//writer->Execute();
	auto visualizer = std::make_unique<Visualizer>();
	return 0;
}