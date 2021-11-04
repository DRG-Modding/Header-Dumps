// BlueprintGeneratedClass MAG_BaseClass.MAG_BaseClass_C
// Size: 0x25d (Inherited: 0x238)
struct AMAG_BaseClass_C : AMagazine {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UFirstPersonStaticMeshComponent* Mesh; // 0x240(0x08)
	UBoxComponent* Box; // 0x248(0x08)
	USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	float ChangeFovDelay; // 0x258(0x04)
	bool ApplySkin; // 0x25c(0x01)

	bool Attached(AActor* Parent);
	bool Released();
	void DoRelease();
	void OnItemSkinned(USkinEffect* Skin);
	void ExecuteUbergraph_MAG_BaseClass(int32_t EntryPoint);
};

