// BlueprintGeneratedClass BP_FuelLine_EndPoint.BP_FuelLine_EndPoint_C
// Size: 0x252 (Inherited: 0x230)
struct ABP_FuelLine_EndPoint_C : AFuelLineEndPoint {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x238(0x08)
	UParticleSystemComponent* P_Extractor_PipeLinkUp; // 0x240(0x08)
	UMaterialInterface* DefaultRingMaterial; // 0x248(0x08)
	bool Pinging; // 0x250(0x01)
	bool PlacementValid; // 0x251(0x01)

	void UpdateState();
	void UserConstructionScript();
	void ReceivePing(bool InValidPlacement);
	void BndEvt__ConnectPoint_K2Node_ComponentBoundEvent_0_ConnectionDelegate__DelegateSignature(UTrackBuilderConnectPoint* InConnectPoint, ATrackBuilderSegment* InSegment);
	void ReceiveBeginPlay();
	void PingAudio(bool InNewPing, bool InPlacementValidChanged);
	void ExecuteUbergraph_BP_FuelLine_EndPoint(int32_t EntryPoint);
};

