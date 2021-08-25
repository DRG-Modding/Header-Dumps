// BlueprintGeneratedClass BP_OxygenTankSound.BP_OxygenTankSound_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_OxygenTankSound_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Audio; // 0x228(0x08)
	struct USoundAttenuation* OverrideAttenuation; // 0x230(0x08)

	void ReceiveBeginPlay(); // Function BP_OxygenTankSound.BP_OxygenTankSound_C.ReceiveBeginPlay
	void OnOxygenActivationChanged_Event_1(bool IsActive); // Function BP_OxygenTankSound.BP_OxygenTankSound_C.OnOxygenActivationChanged_Event_1
	void ExecuteUbergraph_BP_OxygenTankSound(int32_t EntryPoint); // Function BP_OxygenTankSound.BP_OxygenTankSound_C.ExecuteUbergraph_BP_OxygenTankSound
};

