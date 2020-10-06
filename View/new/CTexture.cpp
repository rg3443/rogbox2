#include "CTexture.h"

void CTextureList::Init()
{
    this->CreateTexture(0,"test");
}

void CTextureList::CreateTexture(int code,string filePath)
{
    textureList.push_back(CTexture(code,filePath));
}

CTexture* CTextureList::GetTexture(int code)
{
    for(int i=0;i<textureList.size();i++) {
        if(textureList[i].code == code) {
            return &textureList[i];
        }
    }
}
