// BlueprintGeneratedClass BP_DepthCount.BP_DepthCount_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_DepthCount_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget Pinger; // 0x228(0x08)
	UWidgetComponent* DepthWidget; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UBP_DepthCountWidget_C* Widget; // 0x240(0x08)
	float Duration; // 0x248(0x04)
	float Start; // 0x24c(0x04)
	float End; // 0x250(0x04)
	float NewDepth; // 0x254(0x04)
	float currentDepth; // 0x258(0x04)

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DepthCount(int32_t EntryPoint);
};

