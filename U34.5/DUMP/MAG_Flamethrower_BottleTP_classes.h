// BlueprintGeneratedClass MAG_Flamethrower_BottleTP.MAG_Flamethrower_BottleTP_C
// Size: 0x258 (Inherited: 0x238)
struct AMAG_Flamethrower_BottleTP_C : AMagazine {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UFirstPersonStaticMeshComponent* FirstPersonStaticMesh; // 0x240(0x08)
	UCapsuleComponent* Capsule; // 0x248(0x08)
	USceneComponent* Scene; // 0x250(0x08)

	bool Attached(AActor* Parent);
	bool Released();
	void DoRelease();
	void OnItemSkinned(USkinEffect* Skin);
	void ExecuteUbergraph_MAG_Flamethrower_BottleTP(int32_t EntryPoint);
};

