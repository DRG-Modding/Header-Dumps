// BlueprintGeneratedClass BP_SpectatorBase.BP_SpectatorBase_C
// Size: 0x2c0 (Inherited: 0x2a8)
struct ABP_SpectatorBase_C : ASpectatorPawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	UAudioComponent* Menu Music; // 0x2b0(0x08)
	UAudioComponent* Menu_StaticRadio; // 0x2b8(0x08)

	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SpectatorBase(int32_t EntryPoint);
};

