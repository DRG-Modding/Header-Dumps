#ifndef UE4SS_SDK_BP_ConeAttackBase_HPP
#define UE4SS_SDK_BP_ConeAttackBase_HPP

class UBP_ConeAttackBase_C : USpecialAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPrimitiveComponent* ConeCollider;
    TSubclassOf<UStatusEffect> StatusEffect;
    bool AttackIsActive;

    void ReceiveBeginPlay();
    void OnAttackActionNotify_Event(FName nameValue);
    void SetConeCollider(UPrimitiveComponent* ConeCollider);
    void Cone_Begin_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Cone_End_Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnFrozen(bool IsFrozen);
    void ReceiveAbortAttack();
    void ExecuteUbergraph_BP_ConeAttackBase(int32 EntryPoint, NameDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ComponentBeginOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ComponentEndOverlapSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FName K2Node_CustomEvent_nameValue, bool K2Node_SwitchName_CmpSuccess, UPrimitiveComponent* K2Node_CustomEvent_ConeCollider, UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent_1, AActor* K2Node_CustomEvent_OtherActor_1, UPrimitiveComponent* K2Node_CustomEvent_OtherComp_1, int32 K2Node_CustomEvent_OtherBodyIndex_1, bool K2Node_CustomEvent_bFromSweep, const FHitResult K2Node_CustomEvent_SweepResult, UPrimitiveComponent* K2Node_CustomEvent_OverlappedComponent, AActor* K2Node_CustomEvent_OtherActor, UPrimitiveComponent* K2Node_CustomEvent_OtherComp, int32 K2Node_CustomEvent_OtherBodyIndex, bool CallFunc_NotEqual_ObjectObject_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_isFrozen);
}

#endif
