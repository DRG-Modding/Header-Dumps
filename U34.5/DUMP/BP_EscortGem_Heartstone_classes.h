// BlueprintGeneratedClass BP_EscortGem_Heartstone.BP_EscortGem_Heartstone_C
// Size: 0x360 (Inherited: 0x321)
struct ABP_EscortGem_Heartstone_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UAudioComponent* HeartStoneGemIdle; // 0x330(0x08)
	UParticleSystemComponent* P_OmoranHeartStoneMagic_01; // 0x338(0x08)
	UPointLightComponent* PointLight; // 0x340(0x08)
	UOutlineComponent* outline; // 0x348(0x08)
	float Timeline_0_NewTrack_0_0B9A7E48466E6979BF52FEBAB3551DF1; // 0x350(0x04)
	enum class ETimelineDirection Timeline_0__Direction_0B9A7E48466E6979BF52FEBAB3551DF1; // 0x354(0x01)
	UTimelineComponent* Timeline_1; // 0x358(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Receive_OnDeposited(APlayerCharacter* fromPlayer);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EscortGem_Heartstone(int32_t EntryPoint);
};

