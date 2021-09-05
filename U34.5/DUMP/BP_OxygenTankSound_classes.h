// BlueprintGeneratedClass BP_OxygenTankSound.BP_OxygenTankSound_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_OxygenTankSound_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAudioComponent* Audio; // 0x228(0x08)
	USoundAttenuation* OverrideAttenuation; // 0x230(0x08)

	void ReceiveBeginPlay();
	void OnOxygenActivationChanged_Event_1(bool IsActive);
	void ExecuteUbergraph_BP_OxygenTankSound(int32_t EntryPoint);
};

