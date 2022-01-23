#ifndef UE4SS_SDK_BP_FloatingLightPlant2_HPP
#define UE4SS_SDK_BP_FloatingLightPlant2_HPP

class ABP_FloatingLightPlant2_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* SK_FloatingLightPlant_A;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UTerrainPlacementComponent* terrainPlacement;
    class UTerrainDetectComponent* TerrainDetect;
    class USimpleHealthComponent* SimpleHealth;
    class USphereComponent* ProximityTrigger;
    class USceneComponent* DefaultSceneRoot;
    float VariationLoop_Variation_1D8B412C4585AB2E56DAE8A298D8B484;
    TEnumAsByte<ETimelineDirection::Type> VariationLoop__Direction_1D8B412C4585AB2E56DAE8A298D8B484;
    class UTimelineComponent* VariationLoop;
    float FloaterValues_Brightness_D91E97D14BA4C776610A308453452A23;
    float FloaterValues_Height_D91E97D14BA4C776610A308453452A23;
    TEnumAsByte<ETimelineDirection::Type> FloaterValues__Direction_D91E97D14BA4C776610A308453452A23;
    class UTimelineComponent* FloaterValues;
    float BaseFloaterHeight;
    float FloaterHeightVariation;
    class UMaterialInstanceDynamic* DynamicMaterial;
    float BaseMaterialEmmisive;
    float TimelineBrightnessChangeOnHit;
    float TimelineVariationWhileFloating;
    float TimelineBrightness;
    float TimelineHeight;
    float BaseIntensity;
    float BaseFloaterScale;
    bool HIdeFloater;
    FName Param_EmmisiveMult;
    FName Param_DisplacementSpeed;
    FName Param_DisplacementIntensity;
    float BaseMaterialDisplacement;
    FBP_FloatingLightPlant2_COnChangeState OnChangeState;
    void OnChangeState(bool IsOpen, bool IsHIt);
    float HideDuration;

    void OnRep_HIdeFloater();
    void VariationLoop__FinishedFunc();
    void VariationLoop__UpdateFunc();
    void FloaterValues__FinishedFunc();
    void FloaterValues__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void Hide();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_FloatingLightPlant2(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_Multiply_FloatFloat_ReturnValue_3, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_Less_IntInt_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float K2Node_ComponentBoundEvent_Damage, class UDamageClass* K2Node_ComponentBoundEvent_damageClass, class AActor* K2Node_ComponentBoundEvent_DamageCauser, bool K2Node_ComponentBoundEvent_anyHealthLost);
    void OnChangeState__DelegateSignature(bool IsOpen, bool IsHIt);
};

#endif
