// BlueprintGeneratedClass BP_OxygenTank.BP_OxygenTank_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_OxygenTank_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* FrontPlane; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Screen_005; // 0x230(0x08)
	struct UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x238(0x08)
	struct UStaticMeshComponent* SM_GasCanister; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ReceiveBeginPlay(); // Function BP_OxygenTank.BP_OxygenTank_C.ReceiveBeginPlay
	void OnOxygenActivationChanged_Event_1(bool IsActive); // Function BP_OxygenTank.BP_OxygenTank_C.OnOxygenActivationChanged_Event_1
	void ExecuteUbergraph_BP_OxygenTank(int32_t EntryPoint); // Function BP_OxygenTank.BP_OxygenTank_C.ExecuteUbergraph_BP_OxygenTank
};

