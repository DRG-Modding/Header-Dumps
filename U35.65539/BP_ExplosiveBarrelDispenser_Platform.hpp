#ifndef UE4SS_SDK_BP_ExplosiveBarrelDispenser_Platform_HPP
#define UE4SS_SDK_BP_ExplosiveBarrelDispenser_Platform_HPP

class ABP_ExplosiveBarrelDispenser_Platform_C : ARessuplyPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UDropToTerrainComponent* DropToTerrain;
    UTerrainDetectComponent* TerrainDetect;
    UWidgetComponent* Widget;
    UOutlineComponent* outline;
    UTerrainPlacementComponent* TerrainPlacement1;
    UChildActorComponent* RightDispenser;
    UChildActorComponent* BackDispenser;
    UChildActorComponent* LeftDispenser;
    UChildActorComponent* ForwardDispenser;
    UPointLightComponent* PointLight;
    UCapsuleComponent* Capsule;
    USkeletalMeshComponent* Drill;
    UAutoCarverComponent* AutoCarver;
    USkeletalMeshComponent* Base;
    AGameEvent* OwningEvent;
    float OutlineTime;
    FTimerHandle ResizeCarverTimer;
    bool ChildrenActive;
    bool ActivateOnLanding;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(AGameEvent* GameEventbool CallFunc_IsValid_ReturnValue);
    void OnRep_ChildrenActive(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<AActor*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, AItemDispenser* K2Node_DynamicCast_AsItem_Dispenser, bool K2Node_DynamicCast_bSuccess);
    void SetChildrenReady(bool IsReady, bool CallFunc_HasAuthority_ReturnValue);
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void OnEventTriggered();
    void OnDropStarted();
    void OnDroppodImpact();
    void DeployAnimations();
    void OnEventFinished(bool eventSuccess);
    void ManageOutlines();
    void OnDroppodCloseToImpact();
    void ReceiveBeginPlay();
    void ResizeCarver();
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_0_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_ExplosiveBarrelDispenser_Platform(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_Progress, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_eventSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<UChildActorComponent*>& K2Node_MakeArray_Array, UChildActorComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UBP_BarrelDispenser_C* K2Node_DynamicCast_AsBP_Barrel_Dispenser, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FVector CallFunc_MakeVector_ReturnValue, bool Temp_bool_Variable, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_ComponentBoundEvent_IsFalling, float K2Node_Select_Default);
}

#endif
