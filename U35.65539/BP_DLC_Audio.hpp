#ifndef UE4SS_SDK_BP_DLC_Audio_HPP
#define UE4SS_SDK_BP_DLC_Audio_HPP

class ABP_DLC_Audio_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UMediaSoundComponent* MediaSound;
    USceneComponent* DefaultSceneRoot;

    void EndAudio();
    void BeginAudio(UMediaPlayer* InMediaPlayer);
    void ExecuteUbergraph_BP_DLC_Audio(int32 EntryPoint, UMediaPlayer* K2Node_CustomEvent_InMediaPlayer);
}

#endif
