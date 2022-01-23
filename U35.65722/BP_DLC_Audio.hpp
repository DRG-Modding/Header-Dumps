#ifndef UE4SS_SDK_BP_DLC_Audio_HPP
#define UE4SS_SDK_BP_DLC_Audio_HPP

class ABP_DLC_Audio_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMediaSoundComponent* MediaSound;
    class USceneComponent* DefaultSceneRoot;

    void EndAudio();
    void BeginAudio(class UMediaPlayer* InMediaPlayer);
    void ExecuteUbergraph_BP_DLC_Audio(int32 EntryPoint, class UMediaPlayer* K2Node_CustomEvent_InMediaPlayer);
};

#endif
