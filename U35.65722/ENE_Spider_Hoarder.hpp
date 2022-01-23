#ifndef UE4SS_SDK_ENE_Spider_Hoarder_HPP
#define UE4SS_SDK_ENE_Spider_Hoarder_HPP

class AENE_Spider_Hoarder_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPhysicalAnimationComponent* PhysicalAnimation;
    class USkeletalMeshComponent* SK_HoarderHead_A;
    class USkeletalMeshComponent* SK_HoarderBack_A;
    class UPointLightComponent* PointLight1;
    class UAudioComponent* AudioScaredEnd;
    class UAudioComponent* AudioScaredLoop;
    class UAudioComponent* AudioScaredBegin;
    class UBP_BurrowComponent_C* BP_BurrowComponent;
    class USphereComponent* Sphere;
    float Timeline_2_Light_IntensityB_BC447F934BD2DA41ABECE685727C08B5;
    float Timeline_2_Light_Intensity_G_BC447F934BD2DA41ABECE685727C08B5;
    float Timeline_2_Light_Intensity_R_BC447F934BD2DA41ABECE685727C08B5;
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_BC447F934BD2DA41ABECE685727C08B5;
    class UTimelineComponent* Timeline_2;
    float Timeline_0_Light_Intensity_05D4ADFF47FD2761700DC0BF63BC24DC;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_05D4ADFF47FD2761700DC0BF63BC24DC;
    class UTimelineComponent* Timeline_0;
    TArray<class UResourceData*> Loot;
    FVector2D ChunkCountRange;
    TArray<class UResourceData*> ResourceTypes;
    float DamageLootDropChance;
    float DamageLootDropCoolDown;
    float LastLootDrop;
    FVector2D ChunkValueRange;
    class AActor* TargetActor;
    bool IsScared;
    bool IsAlive;
    float AlertedSpeed;
    int32 DamageTimes;

    void UpdateTarget(float MaxDistance, bool& OutTargetChanged, bool TargetChanged, class AActor* NewTarget, FName KeyTarget, FName KeyIsAlerted, class UBlackboardComponent* Blackboard, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
    void HasLoot(bool& Has Loot, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void OnRagdoll();
    void ReceiveBeginPlay();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DamageSig__DelegateSignature(float Amount);
    void DropLoot();
    void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__BP_BurrowComponent_K2Node_ComponentBoundEvent_1_OnBurrowComplete__DelegateSignature(bool IsEmerging);
    void HandleTargetServerside();
    void OnUpdateTarget();
    void BndEvt__AudioScaredBegin_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
    void BndEvt__AudioScaredLoop_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
    void All_ScaredChanged(bool InScared);
    void HandleScaredAnim();
    void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_4_SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void ExecuteUbergraph_ENE_Spider_Hoarder(int32 EntryPoint, bool Temp_bool_Variable, FExecuteUbergraph_ENE_Spider_HoarderK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float K2Node_ComponentBoundEvent_Amount, bool CallFunc_HasLoot_Has_Loot, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasLoot_Has_Loot_1, int32 CallFunc_Array_LastIndex_ReturnValue, class UResourceData* CallFunc_Array_Get_Item_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const FTransform CallFunc_GetTransform_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FVector CallFunc_GetActorUpVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_HasLoot_Has_Loot_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_ComponentBoundEvent_IsEmerging, class AProceduralSetup* CallFunc_GetProceduralSetup_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_UpdateTarget_OutTargetChanged, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_CustomEvent_InScared, bool CallFunc_IsPlaying_ReturnValue_1, class UAudioComponent* K2Node_Select_Default, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class USpiderAnimInstance* K2Node_DynamicCast_AsSpider_Anim_Instance, bool K2Node_DynamicCast_bSuccess, const FTransform CallFunc_GetTransform_ReturnValue_1, class APawn* K2Node_ComponentBoundEvent_Pawn, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_GetIsAlerted_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Array_Index_Variable, FResourceSpawner CallFunc_Array_Get_Item_2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class UGoogleAnalyticsWrapper* CallFunc_GetGoogleAnalyticsWrapper_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_GetActorRightVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue_1, FVector CallFunc_Multiply_VectorFloat_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_4, FVector CallFunc_Multiply_VectorFloat_ReturnValue_3, FVector CallFunc_Add_VectorVector_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue_1, class AResourceChunk* CallFunc_SpawnResource_ReturnValue);
};

#endif
