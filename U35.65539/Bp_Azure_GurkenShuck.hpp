#ifndef UE4SS_SDK_Bp_Azure_GurkenShuck_HPP
#define UE4SS_SDK_Bp_Azure_GurkenShuck_HPP

class ABp_Azure_GurkenShuck_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UParticleSystemComponent* P_Flower_Gurken_Pollen;
    USphereComponent* WalkinTrigger;
    UCapsuleComponent* HitBox;
    USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Gurken;
    UAudioComponent* AzureGurkenIdleSound;
    UParticleSystemComponent* P_Flower_HollowBall_lightdust;
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight;
    UPathfinderCollisionComponent* PathfinderCollision;
    USceneComponent* Scene;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USimpleHealthComponent* SimpleHealth;
    float Fade_up_NewTrack_0_1973A28E419F187C363458893321988E;
    TEnumAsByte<ETimelineDirection::Type> Fade_up__Direction_1973A28E419F187C363458893321988E;
    UTimelineComponent* Fade up;
    int32 LightIntensity;
    int32 LightAttenuation;

    void Fade up__FinishedFunc();
    void Fade up__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void OpenFlower();
    void ExecuteUbergraph_Bp_Azure_GurkenShuck(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_HasAuthority_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue, const TArray<uint8>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const TArray<AActor*>& K2Node_MakeArray_Array_1, TArray<AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, AActor* CallFunc_Array_Get_Item, ABp_Azure_GurkenShuck_C* K2Node_DynamicCast_AsBp_Azure_Gurken_Shuck, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
}

#endif
