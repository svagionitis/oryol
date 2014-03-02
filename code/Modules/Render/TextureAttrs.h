#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::Render::TextureAttrs
    @brief holds the public attributes of a Texture object
    
    @todo: describe Render::TextureAttrs
*/
#include "Core/Types.h"
#include "Resource/Locator.h"
#include "Render/Usage.h"
#include "Render/TextureType.h"
#include "Render/PixelFormat.h"

namespace Oryol {
namespace Render {
    
class TextureAttrs {
public:
    /// constructor
    TextureAttrs();
    
    /// get resource locator
    const Resource::Locator& GetLocator() const;
    
    /// get texture type
    TextureType::Code GetType() const;
    /// get pixel format
    PixelFormat::Code GetPixelFormat() const;
    /// get usage
    Usage::Code GetUsage() const;
    
    /// get width
    int32 GetWidth() const;
    /// get height
    int32 GetHeight() const;
    /// get depth
    int32 GetDepth() const;
    
    /// return true if the texture has a mipmap chain
    bool HasMipmaps() const;
    /// return true if texture is a render target
    bool IsRenderTarget() const;
    /// return true if render target is the default render target
    bool IsDefaultRenderTarget() const;
    /// return true if render target, and has depth buffer
    bool HasDepthBuffer() const;
    /// return true if render target, and has shared depth buffer
    bool HasSharedDepthBuffer() const;
    /// return true if this is a depth-texture
    bool IsDepthTexture() const;

    /// resource locator
    void setLocator(const Resource::Locator& loc);
    /// set texture type
    void setType(TextureType::Code type);
    /// set pixel format
    void setPixelFormat(PixelFormat::Code format);
    /// set usage
    void setUsage(Usage::Code usage);
    /// set width
    void setWidth(int32 width);
    /// set height
    void setHeight(int32 height);
    /// set depth (for 3D textures)
    void setDepth(int32 depth);
    /// set mipmaps flag
    void setMipmapsFlag(bool b);
    /// set render target flag
    void setRenderTargetFlag(bool b);
    /// set default render target flag
    void setDefaultRenderTargetFlag(bool b);
    /// set depth buffer flag
    void setDepthBufferFlag(bool b);
    /// set shared depth buffer flag
    void setSharedDepthBufferFlag(bool b);
    /// set depth-texture flag
    void setDepthTextureFlag(bool b);
    
private:
    Resource::Locator locator;
    TextureType::Code type;
    PixelFormat::Code pixelFormat;
    Usage::Code usage;
    int32 width;
    int32 height;
    int32 depth;
    bool hasMipmaps : 1;
    bool isRenderTarget : 1;
    bool isDefaultRenderTarget : 1;
    bool hasDepthBuffer : 1;
    bool hasSharedDepthBuffer : 1;
    bool isDepthTexture : 1;
};
    
//------------------------------------------------------------------------------
inline const Resource::Locator&
TextureAttrs::GetLocator() const {
    return this->locator;
}

//------------------------------------------------------------------------------
inline TextureType::Code
TextureAttrs::GetType() const {
    return this->type;
}

//------------------------------------------------------------------------------
inline PixelFormat::Code
TextureAttrs::GetPixelFormat() const {
    return this->pixelFormat;
}

//------------------------------------------------------------------------------
inline Usage::Code
TextureAttrs::GetUsage() const {
    return this->usage;
}

//------------------------------------------------------------------------------
inline int32
TextureAttrs::GetWidth() const {
    return this->width;
}

//------------------------------------------------------------------------------
inline int32
TextureAttrs::GetHeight() const {
    return this->height;
}

//------------------------------------------------------------------------------
inline int32
TextureAttrs::GetDepth() const {
    return this->depth;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::HasMipmaps() const {
    return this->hasMipmaps;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::IsRenderTarget() const {
    return this->isRenderTarget;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::IsDefaultRenderTarget() const {
    return this->isDefaultRenderTarget;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::HasDepthBuffer() const {
    return this->hasDepthBuffer;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::HasSharedDepthBuffer() const {
    return this->hasSharedDepthBuffer;
}

//------------------------------------------------------------------------------
inline bool
TextureAttrs::IsDepthTexture() const {
    return this->isDepthTexture;
}

} // namespace Render
} // namespace Oryol