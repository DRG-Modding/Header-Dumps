#ifndef UE4SS_SDK_BP_RivalBombNode_HPP
#define UE4SS_SDK_BP_RivalBombNode_HPP

class ABP_RivalBombNode_C : public ARivalBombNode
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_RivalBombNode_Electricity;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UFSDAudioComponent* RivalBombNodeHackable;
    class UAudioComponent* RivalBombNodeIdle_Cue;
    class USkeletalMeshComponent* SK_RivalBombNode;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* SM_LightCone003;
    class USpotLightComponent* SpotLight;
    class UDamageComponent* PushPlayerDamage;
    class USphereComponent* HackUse;
    class UPointLightComponent* PointLight;
    class USpawnActorWithDebrisPosComponent* SpawnActorWithDebrisPos;
    float TurnOnLight_Intensity_6982697C46CE12F6891FD997002FC29A;
    TEnumAsByte<ETimelineDirection::Type> TurnOnLight__Direction_6982697C46CE12F6891FD997002FC29A;
    class UTimelineComponent* TurnOnLight;
    float ActiveLightIntensity;
    class UMaterialInterface* M_Normal;
    class UMaterialInterface* M_Hackable;
    class UMaterialInterface* M_Hackable_Blink;
    class UMaterialInterface* M_Hacked;
    class UMaterialInterface* M_Off;
    float HackedLightIntensity;
    FTimerHandle ProgressHandler;
    TArray<FName> ProgressSlotNames;
    class URivalBombNodeAniminstance* AnimInstance;

    void ShoutNearest(class UDialogDataAsset* Shout);
    void SetLightConeIntensity(float Intensity01);
    void SetAudioPlaying(class UAudioComponent* InAudioComponent, bool InPlaying);
    bool GetIsCompleted();
    void UpdateProgressBar();
    void SetCableConnected(bool InConnected);
    void TurnOnLight__FinishedFunc();
    void TurnOnLight__UpdateFunc();
    void ReceiveBeginPlay();
    void SetAllLightsMaterial(class UMaterialInterface* Material);
    void ReceiveStateUpdated();
    void UpdateState();
    void Turn On Light Cone();
    void UpdateProgressBarAndTimer();
    void Turn Off Light Cone();
    void ExecuteUbergraph_BP_RivalBombNode(int32 EntryPoint);
};

#endif
