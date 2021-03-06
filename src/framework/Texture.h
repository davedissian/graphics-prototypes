/*
 * GL Framework
 * Copyright (c) David Avedissian 2014-2015
 */
#pragma once

class Texture
{
public:
    Texture(const string& file);
    Texture(uint width, uint height, GLuint format = GL_RGB, GLuint type = GL_UNSIGNED_BYTE);
    ~Texture();

    void bind(uint unit);

    GLuint getId() const;
    uint getWidth() const;
    uint getHeight() const;

private:
    GLuint mTextureID;

    uint mWidth;
    uint mHeight;
};
