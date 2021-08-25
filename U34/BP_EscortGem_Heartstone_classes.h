// BlueprintGeneratedClass BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C
// Size: 0x360 (Inherited: 0x321)
struct ABP_EscortGem_Heartstone_C : ABP_Gem_C {
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UAudioComponent* HeartStoneGemIdle; // 0x330(0x08)
	struct UParticleSystemComponent* P_OmoranHeartStoneMagic_01; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	struct UOutlineComponent* outline; // 0x348(0x08)
	float Timeline_0_NewTrack_0_0B9A7E48466E6979BF52FEBAB3551DF1; // 0x350(0x04)
	char Timeline_0__Direction_0B9A7E48466E6979BF52FEBAB3551DF1; // 0x354(0x01)
	char UnknownData_355[0x3]; // 0x355(0x03)
	struct UTimelineComponent* Timeline_1; // 0x358(0x08)

	void Timeline_0__FinishedFunc(); // Function BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C.Timeline_0__UpdateFunc
	void Receive_OnDeposited(struct APlayerCharacter* fromPlayer); // Function BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C.Receive_OnDeposited
	void ReceiveBeginPlay(); // Function BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_EscortGem_Heartstone(int32_t EntryPoint); // Function BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C.ExecuteUbergraph_BP_EscortGem_Heartstone
};

