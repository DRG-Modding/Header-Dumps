// BlueprintGeneratedClass BP_CaretakerMortarAction.BP_CaretakerMortarAction_C
// Size: 0x154 (Inherited: 0xe0)
struct UBP_CaretakerMortarAction_C : UBP_CaretakerActionBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe0(0x08)
	int32_t BurstCount; // 0xe8(0x04)
	float TimeBetweenShots; // 0xec(0x04)
	int32_t BaseBurstSize; // 0xf0(0x04)
	FTransform Origin; // 0x100(0x30)
	FName LastSelectedSocket; // 0x130(0x08)
	FVector LastSelectedTargetLocation; // 0x138(0x0c)
	APlayerCharacter* LastSelectedTarget; // 0x148(0x08)
	int32_t ExtraBurstSizePerAditionalPlayer; // 0x150(0x04)

	void GetEstimatedStartDuration(float StartDuration);
	void LaunchProjectile(FVector TargetLocation);
	void OnStarted();
	void FireMortar();
	void OnTriggered();
	void OnStopped();
	void FireBurst();
	void All_ShowPhaseBombLaunch(FName AttachPointName);
	void ExecuteUbergraph_BP_CaretakerMortarAction(int32_t EntryPoint);
};

