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
    void ExecuteUbergraph_BP_DropPod_Escape_Escort(int32 EntryPoint);
};

#endif
