// BlueprintGeneratedClass ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C
// Size: 0x588 (Inherited: 0x570)
struct AENE_Spider_ExploderTank_Ghost_C : AENE_Spider_ExploderTank_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	UAudioComponent* Audio; // 0x578(0x08)
	UStaticMeshComponent* TerrainScannerMesh; // 0x580(0x08)

	bool GetIsTargetable();
	void ReceiveBeginPlay();
	void OnUnFrozen();
	void ExecuteUbergraph_ENE_Spider_ExploderTank_Ghost(int32_t EntryPoint);
};

