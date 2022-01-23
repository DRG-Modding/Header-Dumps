#ifndef UE4SS_SDK_BP_Refinery_Depositor_HPP
#define UE4SS_SDK_BP_Refinery_Depositor_HPP

class ABP_Refinery_Depositor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* AudioDepositing1;
    class UCapsuleComponent* OpenTrigger;
    class UResourceBank* ResourceBank;
    class UCapsuleComponent* ResourceBankCollider;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    TArray<class APlayerCharacter*> NearbyPlayers;
    bool DepositorOpen;
    FBP_Refinery_Depositor_COnDepositorOpenChanged OnDepositorOpenChanged;
    void OnDepositorOpenChanged(bool InOpen);

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OpenTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void UpdateOpenAnim();
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void BndEvt__ResourceBank_K2Node_ComponentBoundEvent_1_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void ExecuteUbergraph_BP_Refinery_Depositor(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user_1, class APlayerCharacter* K2Node_ComponentBoundEvent_user);
    void OnDepositorOpenChanged__DelegateSignature(bool InOpen);
};

#endif
