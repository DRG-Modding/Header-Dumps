// BlueprintGeneratedClass DefencePoint_Uplink.DefencePoint_Uplink_C
// Size: 0x318 (Inherited: 0x298)
struct ADefencePoint_Uplink_C : ADefencePointActor_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	UChildActorComponent* ChildActor; // 0x2a0(0x08)
	UChildActorComponent* OxygenTank02; // 0x2a8(0x08)
	UChildActorComponent* OxygenTank01; // 0x2b0(0x08)
	UDropToTerrainComponent* DropToTerrain; // 0x2b8(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2c0(0x08)
	UOxygenSourceComponent* OxygenSource; // 0x2c8(0x08)
	UPointLightComponent* PointLight2; // 0x2d0(0x08)
	UPointLightComponent* PointLight1; // 0x2d8(0x08)
	UPointLightComponent* PointLight; // 0x2e0(0x08)
	UStaticMeshComponent* UplinkScreenMesh1; // 0x2e8(0x08)
	UStaticMeshComponent* UplinkScreenMesh2; // 0x2f0(0x08)
	UBoxComponent* Uplink Collision; // 0x2f8(0x08)
	USkeletalMeshComponent* UplinkMesh; // 0x300(0x08)
	float Disassemble_uplink_dissassemble_8BB753934FA5061C0948A886CF6B0D73; // 0x308(0x04)
	enum class ETimelineDirection Disassemble_uplink__Direction_8BB753934FA5061C0948A886CF6B0D73; // 0x30c(0x01)
	UTimelineComponent* Disassemble uplink; // 0x310(0x08)

	void Disassemble uplink__FinishedFunc();
	void Disassemble uplink__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
	void DefenseFail();
	void DefenseStart();
	void DefenseComplete();
	void ExecuteUbergraph_DefencePoint_Uplink(int32_t EntryPoint);
};

