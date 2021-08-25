// BlueprintGeneratedClass BP_DepthCount.BP_DepthCount_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_DepthCount_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UWidgetComponent* Widget Pinger; // 0x228(0x08)
	struct UWidgetComponent* DepthWidget; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UBP_DepthCountWidget_C* Widget; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float Start; // 0x24c(0x04)
	float End; // 0x250(0x04)
	float NewDepth; // 0x254(0x04)
	float currentDepth; // 0x258(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_DepthCount.BP_DepthCount_C.ReceiveTick
	void ReceiveBeginPlay(); // Function BP_DepthCount.BP_DepthCount_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_DepthCount(int32_t EntryPoint); // Function BP_DepthCount.BP_DepthCount_C.ExecuteUbergraph_BP_DepthCount
};

