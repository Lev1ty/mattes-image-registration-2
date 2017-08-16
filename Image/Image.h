#pragma once
#include "CHECK.h"
#include <itkImage.h>
class Image :
	virtual public CHECK
{
protected:
	using ImageType = itk::Image<double, 3>;
public:
	Image();
	~Image();
public:
	ImageType::Pointer GetImage() const noexcept;
	ImageType::ConstPointer GetConstImage() const noexcept;
	void SetImage(ImageType::Pointer) noexcept;
private:
	ImageType::Pointer image_;
};
