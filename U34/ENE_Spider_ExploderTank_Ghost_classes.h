// BlueprintGeneratedClass ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C
// Size: 0x588 (Inherited: 0x570)
struct AENE_Spider_ExploderTank_Ghost_C : AENE_Spider_ExploderTank_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UAudioComponent* Audio; // 0x578(0x08)
	struct UStaticMeshComponent* TerrainScannerMesh; // 0x580(0x08)

	bool GetIsTargetable(); // Function ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C.GetIsTargetable
	void ReceiveBeginPlay(); // Function ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C.ReceiveBeginPlay
	void OnUnFrozen(); // Function ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C.OnUnFrozen
	void ExecuteUbergraph_ENE_Spider_ExploderTank_Ghost(int32_t EntryPoint); // Function ENE_Spider_ExploderTank_Ghost.ENE_Spider_ExploderTank_Ghost_C.ExecuteUbergraph_ENE_Spider_ExploderTank_Ghost
};

