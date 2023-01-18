#ifndef UE4SS_SDK_BP_RockCracker_EndPoint_HPP
#define UE4SS_SDK_BP_RockCracker_EndPoint_HPP

class ABP_RockCracker_EndPoint_C : public ARockCrackerDrill
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UChildActorComponent* LHologram;
    class UOutlineComponent* outline;
    class UParticleSystemComponent* P_Extractor_PipeLinkUp;
    class UCapsuleComponent* BuildTrigger;
    class USkeletalMeshComponent* SK_Hologram;
    class USkeletalMeshComponent* SK_RockCracker;
    class UStaticMeshComponent* SM_FuelLine_Connector;
    class UAudioComponent* RockCrackerPodEndpointRunning_Cue;
    class USceneComponent* PistonRoot;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    bool Pinging;
    bool PlacementValid;
    bool shouldHide;
    FBP_RockCracker_EndPoint_COnConnected OnConnected;
    void OnConnected(class ABP_RockCracker_EndPoint_C* EndPoint);
    TArray<class UMaterialInterface*> OriginalMaterials;
    float Time;
    bool ShowBuildIcon;
    FTimerHandle StartDrillTimer;

    void OnRep_ShouldHide();
    void OnRep_ShowBuildIcon();
    void EnableButton();
    void GetRockCrackerPod(class ATrackBuilderSegment* Segment, class ABP_RockCrackerPod_C*& Pod);
    void UpdateState();
    void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    void ReceiveBeginPlay();
    void HideEndpoint(bool shouldHide);
    void ShouldAnimate(bool ShouldAnimate);
    void EventStarted();
    void BndEvt__BP_RockCracker_EndPoint_ConstructUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__BP_RockCracker_EndPoint_ConstructUsable_K2Node_ComponentBoundEvent_3_GenericUsableDelegate__DelegateSignature();
    void StartDrill();
    void ExecuteUbergraph_BP_RockCracker_EndPoint(int32 EntryPoint);
    void OnConnected__DelegateSignature(class ABP_RockCracker_EndPoint_C* EndPoint);
};

#endif
