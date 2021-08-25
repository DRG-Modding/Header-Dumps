// BlueprintGeneratedClass PRJ_PlatformMaker.PRJ_PlatformMaker_C
// Size: 0x338 (Inherited: 0x2f0)
struct APRJ_PlatformMaker_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UStaticMeshComponent* Projectile; // 0x2f8(0x08)
	float Timeline_0_NewTrack_1_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x300(0x04)
	char Timeline_0__Direction_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x304(0x01)
	char UnknownData_305[0x3]; // 0x305(0x03)
	struct UTimelineComponent* Timeline_1; // 0x308(0x08)
	float Diameter; // 0x310(0x04)
	float PlatformCreationDelay (seconds); // 0x314(0x04)
	struct UStaticMesh* PlatformCarverMesh; // 0x318(0x08)
	struct FVector PlatformScale; // 0x320(0x0c)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct UTerrainMaterial* FoamMaterial; // 0x330(0x08)

	void Timeline_0__FinishedFunc(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Timeline_0__UpdateFunc
	void OnImpacted(bool PredictedImpact, struct FHitResult HitResult); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.OnImpacted
	void ReceiveBeginPlay(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ReceiveBeginPlay
	void Set Carver mesh(struct UStaticMesh* Mesh to use); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.Set Carver mesh
	void SetCarverMeshScale(struct FVector Scale); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.SetCarverMeshScale
	void UseLessFallDamageMaterial(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseLessFallDamageMaterial
	void UseBugRepellantMaterial(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseBugRepellantMaterial
	void UseFallDmgAndBugRepellant(); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.UseFallDmgAndBugRepellant
	void ExecuteUbergraph_PRJ_PlatformMaker(int32_t EntryPoint); // Function PRJ_PlatformMaker.PRJ_PlatformMaker_C.ExecuteUbergraph_PRJ_PlatformMaker
};

