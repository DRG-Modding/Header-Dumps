#ifndef UE4SS_SDK_ImgMediaFactory_HPP
#define UE4SS_SDK_ImgMediaFactory_HPP

class UImgMediaSettings : UObject
{
    FFrameRate DefaultFrameRate;
    float CacheBehindPercentage;
    float CacheSizeGB;
    int32 CacheThreads;
    int32 CacheThreadStackSizeKB;
    float GlobalCacheSizeGB;
    bool UseGlobalCache;
    uint32 ExrDecoderThreads;
    FString DefaultProxy;
    bool UseDefaultProxy;
}

#endif
