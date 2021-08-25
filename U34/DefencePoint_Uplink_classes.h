// BlueprintGeneratedClass DefencePoint_Uplink.DefencePoint_Uplink_C
// Size: 0x318 (Inherited: 0x298)
struct ADefencePoint_Uplink_C : ADefencePointActor_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UChildActorComponent* ChildActor; // 0x2a0(0x08)
	struct UChildActorComponent* OxygenTank02; // 0x2a8(0x08)
	struct UChildActorComponent* OxygenTank01; // 0x2b0(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x2b8(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2c0(0x08)
	struct UOxygenSourceComponent* OxygenSource; // 0x2c8(0x08)
	struct UPointLightComponent* PointLight2; // 0x2d0(0x08)
	struct UPointLightComponent* PointLight1; // 0x2d8(0x08)
	struct UPointLightComponent* PointLight; // 0x2e0(0x08)
	struct UStaticMeshComponent* UplinkScreenMesh1; // 0x2e8(0x08)
	struct UStaticMeshComponent* UplinkScreenMesh2; // 0x2f0(0x08)
	struct UBoxComponent* Uplink Collision; // 0x2f8(0x08)
	struct USkeletalMeshComponent* UplinkMesh; // 0x300(0x08)
	float Disassemble_uplink_dissassemble_8BB753934FA5061C0948A886CF6B0D73; // 0x308(0x04)
	char Disassemble_uplink__Direction_8BB753934FA5061C0948A886CF6B0D73; // 0x30c(0x01)
	char UnknownData_30D[0x3]; // 0x30d(0x03)
	struct UTimelineComponent* Disassemble uplink; // 0x310(0x08)

	void Disassemble uplink__FinishedFunc(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.Disassemble uplink__FinishedFunc
	void Disassemble uplink__UpdateFunc(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.Disassemble uplink__UpdateFunc
	void ReceiveBeginPlay(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.ReceiveBeginPlay
	void BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature
	void DefenseFail(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.DefenseFail
	void DefenseStart(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.DefenseStart
	void DefenseComplete(); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.DefenseComplete
	void ExecuteUbergraph_DefencePoint_Uplink(int32_t EntryPoint); // Function DefencePoint_Uplink.DefencePoint_Uplink_C.ExecuteUbergraph_DefencePoint_Uplink
};

