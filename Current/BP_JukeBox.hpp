#ifndef UE4SS_SDK_BP_JukeBox_HPP
#define UE4SS_SDK_BP_JukeBox_HPP

class ABP_JukeBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_SpaceRig_Jukebox_B;
    class UWidgetComponent* Widget5;
    class UWidgetComponent* Widget4;
    class UWidgetComponent* Widget3;
    class UWidgetComponent* Widget2;
    class UWidgetComponent* Widget1;
    class UWidgetComponent* Widget_Display;
    class UStaticMeshComponent* Jukebox;
    class USphereComponent* DanceSphere;
    class UStaticMeshComponent* SM_Speaker1;
    class UStaticMeshComponent* SM_Speaker;
    class UBoxComponent* Box;
    class UAudioComponent* JukeBox_Random_Cue;
    class UInstantUsable* InstantUsable;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_Scale_Transform_97D3E280454882350654EE88E83F3CA7;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_97D3E280454882350654EE88E83F3CA7;
    class UTimelineComponent* Timeline_0;
    float RotationSpeed;
    bool Can Use;
    int32 musicIndex;
    FVector Scale;
    TArray<TSoftObjectPtr<USoundBase>> MusicList;
    class UFSDAchievement* PartyTimeAchievement;
    int32 PartyTimeDwarves;
    TArray<TSoftObjectPtr<USoundBase>> SafeMusicList;
    int32 LocalMusicIndex;

    void UpdateCurrentMusic();
    void GetAvailableMusic(TArray<TSoftObjectPtr<USoundBase>>& OutMusicList);
    void PayCredits(class APlayerCharacter* User, int32 Amount, bool& Purchased);
    void OnRep_MusicIndex();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnLoaded_C15A19DC4718016F57823CA232EE5860(class UObject* Loaded);
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void ToggleSpeakerRocking();
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__DanceSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void LoadAndPlay(TSoftObjectPtr<USoundBase> Music);
    void Stop Juke Box();
    void StopJukebox();
    void SetupDisableJukeboxMusic();
    void OnStreamerModeChanged(bool NewValue);
    void OnSaluteEvent_Event_0();
    void ExecuteUbergraph_BP_JukeBox(int32 EntryPoint);
};

#endif
