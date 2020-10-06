#ifndef CTEXTURE_H_INCLUDED
#define CTEXTURE_H_INCLUDED

#include <iostream>
#include <stdio.h>
using namespace std;

struct STexture {
    int code;
    string pathToFile;
    CTextureList() {}
    CTextureList(int code_,string filePath) {
        code = code_;
        pathToFile = filePath;
    }
};

class CTextureList {
public:
    CTextureList() {}
    void Init();
    void CreateTexture(int code,string filePath);
    CTexture* GetTexture(int code);

protected:
    vector<CTexture> textureList;
};

#endif
