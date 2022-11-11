#ifndef UE4SS_SDK_BP_DLC_Audio_HPP
#define UE4SS_SDK_BP_DLC_Audio_HPP

class ABP_DLC_Audio_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMediaSoundComponent* MediaSound;
    class USceneComponent* DefaultSceneRoot;
    float FadeIn_AudioScale_D73C76464EAD5A69C208C4917A2DBA68;
    TEnumAsByte<ETimelineDirection::Type> FadeIn__Direction_D73C76464EAD5A69C208C4917A2DBA68;
    class UTimelineComponent* FadeIn;
    bool Playing;

    void FadeIn__FinishedFunc();
    void FadeIn__UpdateFunc();
    void BeginAudio(class UMediaPlayer* InMediaPlayer);
    void EndAudio();
    void ExecuteUbergraph_BP_DLC_Audio(int32 EntryPoint);
};

#endif
