// BlueprintGeneratedClass BP_SentryGun_MoveMarker.BP_SentryGun_MoveMarker_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_SentryGun_MoveMarker_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x228(0x08)
	UWidgetComponent* DistanceWidget; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UMaterialInterface* Material; // 0x240(0x08)

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SentryGun_MoveMarker(int32_t EntryPoint);
};

