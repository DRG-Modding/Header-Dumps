// BlueprintGeneratedClass MAG_BurstPistol.MAG_BurstPistol_C
// Size: 0x238 (Inherited: 0x220)
struct AMAG_BurstPistol_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)

	bool Attached(struct AActor* Parent); // Function MAG_BurstPistol.MAG_BurstPistol_C.Attached
	bool Released(); // Function MAG_BurstPistol.MAG_BurstPistol_C.Released
	void DoRelease(); // Function MAG_BurstPistol.MAG_BurstPistol_C.DoRelease
	void ExecuteUbergraph_MAG_BurstPistol(int32_t EntryPoint); // Function MAG_BurstPistol.MAG_BurstPistol_C.ExecuteUbergraph_MAG_BurstPistol
};

