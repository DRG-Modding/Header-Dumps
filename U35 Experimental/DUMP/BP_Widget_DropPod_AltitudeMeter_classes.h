// BlueprintGeneratedClass BP_Widget_DropPod_AltitudeMeter.BP_Widget_DropPod_AltitudeMeter_C
// Size: 0x254 (Inherited: 0x220)
struct ABP_Widget_DropPod_AltitudeMeter_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget1; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	UWidget_DropPod_AltitudeMeter_C* Widget; // 0x238(0x08)
	float Duration; // 0x240(0x04)
	float Start; // 0x244(0x04)
	float End; // 0x248(0x04)
	float NewDepth; // 0x24c(0x04)
	float currentDepth; // 0x250(0x04)

	void TriggerCountdown();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnMissionChanged(UGeneratedMission* OutGeneratedMission);
	void ExecuteUbergraph_BP_Widget_DropPod_AltitudeMeter(int32_t EntryPoint);
};

