#ifndef UE4SS_SDK_EWC_Base_HPP
#define UE4SS_SDK_EWC_Base_HPP

class UEWC_Base_C : public UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class USoundCue*> Music;
    FMusicHandle MusicHandle;

    void PlayWaveMusac();
    void PlayEndWaveMusic();
    void StopWaveMusac();
    void ExecuteUbergraph_EWC_Base(int32 EntryPoint, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class USoundCue* CallFunc_Array_Get_Item, FMusicHandle CallFunc_Play_ReturnValue, class UMusicManager* CallFunc_GetWorldSubsystem_ReturnValue_2, FMusicHandle CallFunc_Play_ReturnValue_1);
};

#endif
