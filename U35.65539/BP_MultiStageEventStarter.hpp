#ifndef UE4SS_SDK_BP_MultiStageEventStarter_HPP
#define UE4SS_SDK_BP_MultiStageEventStarter_HPP

class ABP_MultiStageEventStarter_C : AEventStarterButton
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UStaticMeshComponent* StaticMesh;
    USkeletalMeshComponent* SkeletalMesh;
    UParticleSystem* EjectParticles;
    USoundCue* CrumbleSpire;
    bool EffectsShown;
    UMaterialInstanceDynamic* DynamicMaterial;
    float OriginalEmissive;

    void ShowUsedEffects(FColor Color, FLinearColor CallFunc_Conv_ColorToLinearColor_ReturnValue);
    void OnRep_EffectsShown(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
    void CheckTerrain(bool& ShouldCarve, float TraceLength, FVector Direction, FVector StartLocation, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_GetUpVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, FCSGRaycastHitInfo CallFunc_Linecast_hitInfo, bool CallFunc_Linecast_ReturnValue);
    void UserConstructionScript(UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue);
    void OnOpenedForUse(bool wasOpened);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_MultiStageEventStarter(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_wasOpened, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue);
}

#endif
