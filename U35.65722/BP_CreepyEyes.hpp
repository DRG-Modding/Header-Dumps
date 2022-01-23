#ifndef UE4SS_SDK_BP_CreepyEyes_HPP
#define UE4SS_SDK_BP_CreepyEyes_HPP

class ABP_CreepyEyes_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* EyeParent;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class USkeletalMeshComponent* EyeLids;
    class UBoxComponent* Box;
    class USceneComponent* Eyelids And Trigger;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    float Scale_1_NewTrack_3_BCD68ACC423F5ECA6576CB9BC05971B4;
    float Scale_1_Displacement_Offset_BCD68ACC423F5ECA6576CB9BC05971B4;
    TEnumAsByte<ETimelineDirection::Type> Scale_1__Direction_BCD68ACC423F5ECA6576CB9BC05971B4;
    class UTimelineComponent* Scale 1;
    bool IsMoving;
    bool IsTracking;
    TArray<class APlayerCharacter*> PlayersInSight;
    class APlayerCharacter* RandomPlayer;
    bool IsBeingHurt;
    FBP_CreepyEyes_COnBeingHurt OnBeingHurt;
    void OnBeingHurt(bool IsClosed);
    FTimerHandle EyeTimer;
    FTimerHandle BlinkTime;

    void GetRandomPlayer(class APlayerCharacter*& RandomPlayer, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerCharacter* CallFunc_Array_Get_Item);
    void Scale 1__FinishedFunc();
    void Scale 1__UpdateFunc();
    void OnNotifyEnd_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnNotifyBegin_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnInterrupted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnBlendOut_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void OnCompleted_94DC49124A78E8FE15AA45AD56169758(FName NotifyName);
    void LookAtRandom();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void Blink();
    void ReceiveBeginPlay();
    void CloseEyes();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnPlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void BlinkTimer(class APlayerCharacter* Player, bool enteredTrigger);
    void LookAt();
    void StartLookAt();
    void StopLookat();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_CreepyEyes(int32 EntryPoint, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FName K2Node_CustomEvent_NotifyName_4, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FName K2Node_CustomEvent_NotifyName_3, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_NotifyName_2, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FName K2Node_CustomEvent_NotifyName_1, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FName K2Node_CustomEvent_NotifyName, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FName Temp_name_Variable, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, FVector CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, FExecuteUbergraph_BP_CreepyEyesK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FRotator CallFunc_MakeRotator_ReturnValue, float K2Node_ComponentBoundEvent_Amount, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerCharacter* CallFunc_GetRandomPlayer_RandomPlayer, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class APlayerCharacter* CallFunc_GetRandomPlayer_RandomPlayer_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_6, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_8, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_InverseTransformLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, FRotator CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_RandomBool_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue_1, class APlayerCharacter* K2Node_CustomEvent_player_1, bool K2Node_CustomEvent_enteredTrigger_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger);
    void OnBeingHurt__DelegateSignature(bool IsClosed);
};

#endif
