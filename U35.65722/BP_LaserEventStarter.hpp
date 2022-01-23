#ifndef UE4SS_SDK_BP_LaserEventStarter_HPP
#define UE4SS_SDK_BP_LaserEventStarter_HPP

class ABP_LaserEventStarter_C : public AEventStarterButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule;
    class UOutlineComponent* outline;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* LaserWarmUp;
    class UPointLightComponent* PointLight;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* BatteryInserter;
    class UAudioComponent* LaserSound;
    class UStaticMeshComponent* StaticMesh Laser Beam;
    class USkeletalMeshComponent* SkeletalMesh;
    class UMaterialInstanceDynamic* LightMaterial;
    class AGameEvent* OwningEvent;
    class UParticleSystemComponent* LaserParticles;
    FVector2D OriginalEmissivaValues;
    class UMaterialInstanceDynamic* BatteryMaterial;
    float OriginalBatteryEmissive;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void UsedEffects(FLinearColor Color);
    void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void OnOpenedForUse(bool wasOpened);
    void OnEventFinished(bool eventSuccess);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserEventStarter(int32 EntryPoint, bool K2Node_Event_eventSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool K2Node_Event_wasOpened, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float K2Node_Event_Progress, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue_1, bool CallFunc_GetPhotosensitiveMode_ReturnValue_1);
};

#endif
