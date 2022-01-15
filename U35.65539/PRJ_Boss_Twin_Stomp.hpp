#ifndef UE4SS_SDK_PRJ_Boss_Twin_Stomp_HPP
#define UE4SS_SDK_PRJ_Boss_Twin_Stomp_HPP

class APRJ_Boss_Twin_Stomp_C : UProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* Twin_B_ProjectileBarrage_Cue;
    UNiagaraComponent* Niagara;
    UDamageComponent* Damage;
    UBoxComponent* Box;

    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void CustomEvent_0(AActor* DestroyedActor);
    void ExecuteUbergraph_PRJ_Boss_Twin_Stomp(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, FVector CallFunc_K2_GetComponentLocation_ReturnValue, TArray<AActor*>& CallFunc_CopyArrayOfMoveIgnoreActors_ReturnValue, AActor* K2Node_CustomEvent_DestroyedActor, AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
