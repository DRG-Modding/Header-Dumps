// BlueprintGeneratedClass BP_GooCannon_GooPuddle_ImprovedSlow.BP_GooCannon_GooPuddle_ImprovedSlow_C
// Size: 0x330 (Inherited: 0x321)
struct ABP_GooCannon_GooPuddle_ImprovedSlow_C : ABP_GooCannon_GooPuddle_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)

	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_GooCannon_GooPuddle_ImprovedSlow(int32_t EntryPoint);
};

