#ifndef UE4SS_SDK_BP_DropPod_Escape_Escort_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Escort_HPP

class ABP_DropPod_Escape_Escort_C : public ABP_DropPod_Escape_Normal_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Doretta_Broken;
    class UBoxComponent* DorettaCollision;
    class UBoxComponent* DorettaHeadChecker;
    float DorettaHeadMove_Alpha_C2033C6740443751B5AF4294D2EFCD51;
    TEnumAsByte<ETimelineDirection::Type> DorettaHeadMove__Direction_C2033C6740443751B5AF4294D2EFCD51;
    class UTimelineComponent* DorettaHeadMove;
    bool IsDorettaHeadInside;
    FTransform DorettaStart;
    FTransform DorettaEnd;

    void OnRep_IsDorettaHeadInside();
    void DorettaHeadMove__FinishedFunc();
    void DorettaHeadMove__UpdateFunc();
    void OnPrepForTakeOff();
    void Transfer Doretta(FTransform DorettaHeadTransform);
    void ServerHandleDorettaHead(class ADorrettaHead* DorettaHead);
    void BndEvt__DorettaHeadChecker_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_DropPod_Escape_Escort(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ADorrettaHead* K2Node_DynamicCast_AsDorretta_Head, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetCarriedItem_ReturnValue, class ADorrettaHead* K2Node_DynamicCast_AsDorretta_Head_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess_3, FTransform K2Node_CustomEvent_DorettaHeadTransform, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FTransform CallFunc_TLerp_ReturnValue, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult, FHitResult CallFunc_K2_SetWorldTransform_SweepHitResult_1, class ADorrettaHead* K2Node_CustomEvent_DorettaHead, class UStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1);
};

#endif
