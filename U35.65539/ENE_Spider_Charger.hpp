#ifndef UE4SS_SDK_ENE_Spider_Charger_HPP
#define UE4SS_SDK_ENE_Spider_Charger_HPP

class AENE_Spider_Charger_C : UENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UCapsuleComponent* Capsule1;
    UCapsuleComponent* Capsule;
    UPointLightComponent* Light_BackBody;
    float Timeline_1_0_NewTrack_3_58C49B7C4DBC0550846DEABB8A2FF230;
    TEnumAsByte<ETimelineDirection::Type> Timeline_1_0__Direction_58C49B7C4DBC0550846DEABB8A2FF230;
    UTimelineComponent* Timeline_1_0;
    TSubclassOf<AActor> AcidCloudClass;
    float LightIntensityCache;
    UStatusEffectsComponent* NewLocalVar_0;
    UAnimMontage* SpecialAttackMontage;

    void BeginSpecialAttack(int32 SpecialAttackIndex, UAnimMontage*& Montage);
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
    void ExecuteUbergraph_ENE_Spider_Charger(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, UAIController* CallFunc_GetAIController_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, UObject* CallFunc_GetValueAsObject_ReturnValue, AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_GetDirectionUnitVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue);
}

#endif
