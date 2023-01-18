#ifndef UE4SS_SDK_BP_FuelLine_EndPoint_HPP
#define UE4SS_SDK_BP_FuelLine_EndPoint_HPP

class ABP_FuelLine_EndPoint_C : public AFuelLineEndPoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UParticleSystemComponent* P_Extractor_PipeLinkUp;
    class UMaterialInterface* DefaultRingMaterial;
    bool Pinging;
    bool PlacementValid;

    void UpdateState();
    void UserConstructionScript();
    void ReceivePing(bool InValidPlacement);
    void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    void ReceiveBeginPlay();
    void PingAudio(bool InNewPing, bool InPlacementValidChanged);
    void ExecuteUbergraph_BP_FuelLine_EndPoint(int32 EntryPoint);
};

#endif
