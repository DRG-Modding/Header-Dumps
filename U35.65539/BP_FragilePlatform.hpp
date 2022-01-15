#ifndef UE4SS_SDK_BP_FragilePlatform_HPP
#define UE4SS_SDK_BP_FragilePlatform_HPP

class ABP_FragilePlatform_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBoxComponent* Box;
    USimpleHealthComponent* SimpleHealth;
    UTerrainPlacementComponent* terrainPlacement;
    UStaticMeshComponent* Platform;
    USceneComponent* Default root component;
    TEnumAsByte<ETimelineDirection::Type> Crack_Timer__Direction_1ABFCC984A9885503D55279811F213E0;
    UTimelineComponent* Crack Timer;
    float Time Between Cracks;
    TEnumAsByte<EFragilePlatformState::Type> CrackState;
    int32 Amount of actors inside;
    float Time until next crack;
    UStaticMesh* Stage1 mesh;
    UStaticMesh* Stage2 mesh;
    UStaticMesh* Stage3 mesh;
    float current state health;
    float State max health;
    float Rotation;

    void OnRep_Rotation(FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult);
    void Take damage on state(float Damage, float left over Damage, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
    void OnRep_CrackState(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
    void Crack Timer__FinishedFunc();
    void Crack Timer__UpdateFunc();
    void ReceiveBeginPlay();
    void Break Platform();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_6_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_FragilePlatform(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 Temp_int_Variable_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloatInRange_ReturnValue, float K2Node_ComponentBoundEvent_Amount, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent);
}

#endif
