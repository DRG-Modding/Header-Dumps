// BlueprintGeneratedClass BP_Count_Randoms.BP_Count_Randoms_C
// Size: 0x254 (Inherited: 0x220)
struct ABP_Count_Randoms_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget1; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	UBP_Count_Randoms_Widget_C* Widget; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float Start; // 0x244(0x04)
	float End; // 0x248(0x04)
	float NewDepth; // 0x24c(0x04)
	float currentDepth; // 0x250(0x04)

	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Count_Randoms(int32_t EntryPoint);
};

