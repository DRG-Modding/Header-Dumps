#ifndef UE4SS_SDK_BP_LaserEventStarter_HPP
#define UE4SS_SDK_BP_LaserEventStarter_HPP

class ABP_LaserEventStarter_C : AEventStarterButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    UOutlineComponent* outline;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UAudioComponent* LaserWarmUp;
    UPointLightComponent* PointLight;
    USphereComponent* Sphere;
    USkeletalMeshComponent* BatteryInserter;
    UAudioComponent* LaserSound;
    UStaticMeshComponent* StaticMesh Laser Beam;
    USkeletalMeshComponent* SkeletalMesh;
    UMaterialInstanceDynamic* LightMaterial;
    AGameEvent* OwningEvent;
    UParticleSystemComponent* LaserParticles;
    FVector2D OriginalEmissivaValues;
    UMaterialInstanceDynamic* BatteryMaterial;
    float OriginalBatteryEmissive;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void UsedEffects(FLinearColor Color);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void OnOpenedForUse(bool wasOpened);
    void OnEventFinished(bool eventSuccess);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserEventStarter(int32 EntryPoint, bool K2Node_Event_eventSuccess, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_Event_wasOpened, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float K2Node_Event_Progress, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1);
}

#endif
