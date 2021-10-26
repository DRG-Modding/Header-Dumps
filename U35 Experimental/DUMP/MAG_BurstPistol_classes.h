// BlueprintGeneratedClass MAG_BurstPistol.MAG_BurstPistol_C
// Size: 0x238 (Inherited: 0x220)
struct AMAG_BurstPistol_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)

	bool Attached(AActor* Parent);
	bool Released();
	void DoRelease();
	void ExecuteUbergraph_MAG_BurstPistol(int32_t EntryPoint);
};

