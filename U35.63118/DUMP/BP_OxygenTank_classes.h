// BlueprintGeneratedClass BP_OxygenTank.BP_OxygenTank_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_OxygenTank_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* FrontPlane; // 0x228(0x08)
	UStaticMeshComponent* SM_Screen_005; // 0x230(0x08)
	UParticleSystemComponent* P_GasCanister_air_Mule1; // 0x238(0x08)
	UStaticMeshComponent* SM_GasCanister; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)

	void ReceiveBeginPlay();
	void OnOxygenActivationChanged_Event_1(bool IsActive);
	void ExecuteUbergraph_BP_OxygenTank(int32_t EntryPoint);
};

