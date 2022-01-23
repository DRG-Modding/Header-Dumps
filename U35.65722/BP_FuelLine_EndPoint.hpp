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

    void UpdateState(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UMaterialInterface* K2Node_Select_Default);
    void UserConstructionScript(int32 CallFunc_GetMaterialIndex_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue);
    void ReceivePing(bool InValidPlacement);
    void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(class UTrackBuilderConnectPoint* InConnectPoint, class ATrackBuilderSegment* InSegment);
    void ReceiveBeginPlay();
    void PingAudio(bool InNewPing, bool InPlacementValidChanged);
    void ExecuteUbergraph_BP_FuelLine_EndPoint(int32 EntryPoint, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, bool K2Node_Event_InValidPlacement, class UTrackBuilderConnectPoint* K2Node_ComponentBoundEvent_InConnectPoint, class ATrackBuilderSegment* K2Node_ComponentBoundEvent_InSegment, bool K2Node_CustomEvent_InNewPing, bool K2Node_CustomEvent_InPlacementValidChanged, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_UpdateBool_ValueChanged_1, bool CallFunc_UpdateBool_OutValue_1, class USoundBase* K2Node_Select_Default);
};

#endif
