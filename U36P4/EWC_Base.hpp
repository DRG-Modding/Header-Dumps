#ifndef UE4SS_SDK_EWC_Base_HPP
#define UE4SS_SDK_EWC_Base_HPP

class UEWC_Base_C : public UEnemyWaveController
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<TSoftObjectPtr<USoundCue>> Music;
    FMusicHandle MusicHandle;

    void OnLoaded_8674B549482B9237DC5FDA941DC11E00(class UObject* Loaded);
    void OnLoaded_8674B549482B9237DC5FDA94C82046A5(class UObject* Loaded);
    void PlayWaveMusac();
    void PlayEndWaveMusic();
    void StopWaveMusac();
    void ExecuteUbergraph_EWC_Base(int32 EntryPoint);
};

#endif
