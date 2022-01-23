#ifndef UE4SS_SDK_BP_ConeAttackBase_HPP
#define UE4SS_SDK_BP_ConeAttackBase_HPP

class UBP_ConeAttackBase_C : public USpecialAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPrimitiveComponent* ConeCollider;
    TSubclassOf<class UStatusEffect> StatusEffect;
    bool AttackIsActive;

    void ReceiveBeginPlay();
    void OnAttackActionNotify_Event(FName nameValue);
    void SetConeCollider(class UPrimitiveComponent* ConeCollider);
    void Cone_Begin_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cone_End_Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnFrozen(bool IsFrozen);
    void ReceiveAbortAttack();
    void ExecuteUbergraph_BP_ConeAttackBase(int32 EntryPoint, FExecuteUbergraph_BP_ConeAttackBaseK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_ConeAttackBaseK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_BP_ConeAttackBaseK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_nameValue, bool K2Node_SwitchName_CmpSuccess, class UPrimitiveComponent* K2Node_CustomEvent_ConeCollider, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, class AActor* K2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const FHitResult K2Node_CustomEvent_SweepResult, class UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_isFrozen);
};

#endif
