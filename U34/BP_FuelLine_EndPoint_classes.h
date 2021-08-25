// BlueprintGeneratedClass BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C
// Size: 0x252 (Inherited: 0x230)
struct ABP_FuelLine_EndPoint_C : AFuelLineEndPoint {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x238(0x08)
	struct UParticleSystemComponent* P_Extractor_PipeLinkUp; // 0x240(0x08)
	struct UMaterialInterface* DefaultRingMaterial; // 0x248(0x08)
	bool Pinging; // 0x250(0x01)
	bool PlacementValid; // 0x251(0x01)

	void UpdateState(); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.UpdateState
	void UserConstructionScript(); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.UserConstructionScript
	void ReceivePing(bool InValidPlacement); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.ReceivePing
	void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(struct UTrackBuilderConnectPoint* InConnectPoint, struct ATrackBuilderSegment* InSegment); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.ReceiveBeginPlay
	void PingAudio(bool InNewPing, bool InPlacementValidChanged); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.PingAudio
	void ExecuteUbergraph_BP_FuelLine_EndPoint(int32_t EntryPoint); // Function BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C.ExecuteUbergraph_BP_FuelLine_EndPoint
};

