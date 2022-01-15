#ifndef UE4SS_SDK_EWC_Base_HPP
#define UE4SS_SDK_EWC_Base_HPP

class UEWC_Base_C : UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<USoundCue*> Music;
    FMusicHandle MusicHandle;

    void PlayWaveMusac();
    void PlayEndWaveMusic();
    void StopWaveMusac();
    void ExecuteUbergraph_EWC_Base(int32 EntryPoint, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, USoundCue* CallFunc_Array_Get_Item, FMusicHandle CallFunc_Play_ReturnValue, UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_2, FMusicHandle CallFunc_Play_ReturnValue_1);
}

#endif
