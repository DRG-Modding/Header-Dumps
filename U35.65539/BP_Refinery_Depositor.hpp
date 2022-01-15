#ifndef UE4SS_SDK_BP_Refinery_Depositor_HPP
#define UE4SS_SDK_BP_Refinery_Depositor_HPP

class ABP_Refinery_Depositor_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAudioComponent* AudioDepositing1;
    UCapsuleComponent* OpenTrigger;
    UResourceBank* ResourceBank;
    UCapsuleComponent* ResourceBankCollider;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    TArray<APlayerCharacter*> NearbyPlayers;
    bool DepositorOpen;
    FBP_Refinery_Depositor_COnDepositorOpenChanged OnDepositorOpenChanged;
    void OnDepositorOpenChanged(bool InOpen);

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateOpenAnim();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(UPlayerCharacter* User);
    void ExecuteUbergraph_BP_Refinery_Depositor(int32 EntryPoint, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user_1, UPlayerCharacter* K2Node_ComponentBoundEvent_user);
    void OnDepositorOpenChanged__DelegateSignature(bool InOpen);
}

#endif
