#pragma once
#include<d3dx12.h>

class TextureConverter
{
public:
	
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	void LoadWICTextureFromFile(const std::string& filePath);

private:
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};

