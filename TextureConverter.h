#pragma once
#include<d3dx12.h>
#include<DirectXTex.h>

using namespace DirectX;

class TextureConverter
{
public:
	
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	void LoadWICTextureFromFile(const std::string& filePath);

	void SeparateFilePath(const std::wstring& filePath);

	void SvaeDDSTextureToFile();

private:
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);
	 
private:
	//�摜�̏��
	DirectX::TexMetadata metadata_;
	//�摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scratchImage_;
	//�f�B���N�g���p�X
	std::wstring directoryPath_;
	//�t�@�C����
	std::wstring fileName_;
	//�t�@�C���g���q
	std::wstring fileExt_;
};

