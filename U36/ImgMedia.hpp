#ifndef UE4SS_SDK_ImgMedia_HPP
#define UE4SS_SDK_ImgMedia_HPP

class UImgMediaSource : public UBaseMediaSource
{
    bool IsPathRelativeToProjectRoot;
    FFrameRate FrameRateOverride;
    FString ProxyOverride;
    FDirectoryPath SequencePath;

    void SetSequencePath(FString Path);
    void SetMipLevelDistance(float Distance);
    void RemoveTargetObject(class AActor* InActor);
    void RemoveGlobalCamera(class AActor* InActor);
    FString GetSequencePath();
    void GetProxies(TArray<FString>& OutProxies);
    void AddTargetObject(class AActor* InActor, float Width);
    void AddGlobalCamera(class AActor* InActor);
};

#endif
