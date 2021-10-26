// BlueprintGeneratedClass BP_CaretakerActionBase.BP_CaretakerActionBase_C
// Size: 0xe0 (Inherited: 0xb8)
struct UBP_CaretakerActionBase_C : UCaretakerActionComponent {
	TArray<FName> DroneLaunchSockets; // 0xb8(0x10)
	TArray<FName> PhaseBombSockets; // 0xc8(0x10)
	float EstimatedStartDuration; // 0xd8(0x04)
	float InitialDelay; // 0xdc(0x04)

	void GetEstimatedStartDuration(float StartDuration);
	void GetClosestPhaseBombSocket(FVector Location, FName Result);
	bool HasAutority();
	void GetClosestLaunchLocation(FVector TargetLocation, FVector Result);
	FVector GetRandomLaunchLocation();
};

