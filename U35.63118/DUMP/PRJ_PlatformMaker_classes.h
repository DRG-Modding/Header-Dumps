// BlueprintGeneratedClass PRJ_PlatformMaker.PRJ_PlatformMaker_C
// Size: 0x380 (Inherited: 0x338)
struct APRJ_PlatformMaker_C : AProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	UStaticMeshComponent* Projectile; // 0x340(0x08)
	float Timeline_0_NewTrack_1_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x348(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6344ADF74893FE5BE85A6CA2C1A57EE3; // 0x34c(0x01)
	UTimelineComponent* Timeline_1; // 0x350(0x08)
	float Diameter; // 0x358(0x04)
	float PlatformCreationDelay (seconds); // 0x35c(0x04)
	UStaticMesh* PlatformCarverMesh; // 0x360(0x08)
	FVector PlatformScale; // 0x368(0x0c)
	UTerrainMaterial* FoamMaterial; // 0x378(0x08)

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

