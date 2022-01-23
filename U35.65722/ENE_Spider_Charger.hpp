#ifndef UE4SS_SDK_ENE_Spider_Charger_HPP
#define UE4SS_SDK_ENE_Spider_Charger_HPP

class AENE_Spider_Charger_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule1;
    class UCapsuleComponent* Capsule;
    class UPointLightComponent* Light_BackBody;
    float Timeline_1_0_NewTrack_3_58C49B7C4DBC0550846DEABB8A2FF230;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_58C49B7C4DBC0550846DEABB8A2FF230;
    class UTimelineComponent* Timeline_1_0;
    TSubclassOf<class AActor> AcidCloudClass;
    float LightIntensityCache;
    class UStatusEffectsComponent* NewLocalVar_0;
    class UAnimMontage* SpecialAttackMontage;

    void BeginSpecialAttack(int32 SpecialAttackIndex, class UAnimMontage*& Montage);
    void UserConstructionScript();
    void Timeline_1_0__FinishedFunc();
    void Timeline_1_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnRagdoll();
    void OnDeathBase();
    void StartFadeBody();
    void SpecialAttackFlow();
    void CancelSpecialAttack();
    void charge();
    void ExecuteUbergraph_ENE_Spider_Charger(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
};

#endif
