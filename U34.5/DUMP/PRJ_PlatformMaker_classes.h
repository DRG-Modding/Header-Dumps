// BlueprintGeneratedClass PRJ_PlatformMaker.PRJ_PlatformMaker_C
// Size: 0x338 (Inherited: 0x2f0)
struct APRJ_PlatformMaker_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	UStaticMeshComponent* Projectile; // 0x2f8(0x08)
	float Timeline_0_NewTrack_1_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x300(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x304(0x01)
	UTimelineComponent* Timeline_1; // 0x308(0x08)
	float Diameter; // 0x310(0x04)
	float PlatformCreationDelay (seconds); // 0x314(0x04)
	UStaticMesh* PlatformCarverMesh; // 0x318(0x08)
	FVector PlatformScale; // 0x320(0x0c)
	UTerrainMaterial* FoamMaterial; // 0x330(0x08)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnImpacted(bool PredictedImpact, FHitResult HitResult);
	void ReceiveBeginPlay();
	void Set Carver mesh(UStaticMesh* Mesh to use);
	void SetCarverMeshScale(FVector Scale);
	void UseLessFallDamageMaterial();
	void UseBugRepellantMaterial();
	void UseFallDmgAndBugRepellant();
	void ExecuteUbergraph_PRJ_PlatformMaker(int32_t EntryPoint);
};

