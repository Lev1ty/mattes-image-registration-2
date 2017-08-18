#pragma once
#include "Reader.h"
#include "ToVTKImage.h"
#include "Visualizer.h"
#include "Writer.h"
class App :
	public Reader,
	public Visualizer,
	public Writer
{
public:
	App();
	~App();
};
