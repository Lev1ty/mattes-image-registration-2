#include "Entry.h"
#include "Reader.h"
/// \brief entry point for program
int main()
{
	auto entry = std::make_unique<Entry>();
	return entry->Execute();
}