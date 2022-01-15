#ifndef UE4SS_SDK_ImgMedia_HPP
#define UE4SS_SDK_ImgMedia_HPP

class UImgMediaSource : UBaseMediaSource
{
    FFrameRate FrameRateOverride;
    FString ProxyOverride;
    FDirectoryPath SequencePath;

    void SetSequencePath(FString Path);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
}

#endif
