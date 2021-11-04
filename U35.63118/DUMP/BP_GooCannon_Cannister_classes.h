// BlueprintGeneratedClass BP_GooCannon_Cannister.BP_GooCannon_Cannister_C
// Size: 0x284 (Inherited: 0x25d)
struct ABP_GooCannon_Cannister_C : AMAG_BaseClass_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	UFirstPersonStaticMeshComponent* Bar; // 0x268(0x08)
	float Timeline_0_NewTrack_0_FBE0858B42174801F4BF1E8D85338A2E; // 0x270(0x04)
	enum class ETimelineDirection Timeline_0__Direction_FBE0858B42174801F4BF1E8D85338A2E; // 0x274(0x01)
	UTimelineComponent* Timeline_1; // 0x278(0x08)
	float StartZScale; // 0x280(0x04)

	bool Attached(AActor* Parent);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_GooCannon_Cannister(int32_t EntryPoint);
};

