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
	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;
	//ディレクトリパス
	std::wstring directoryPath_;
	//ファイル名
	std::wstring fileName_;
	//ファイル拡張子
	std::wstring fileExt_;
};

