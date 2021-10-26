// BlueprintGeneratedClass BP_PointOfInterest.BP_PointOfInterest_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_PointOfInterest_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Sphere; // 0x228(0x08)
	UFirstPersonWidgetComponent* FirstPersonWidget; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UTexture2D* Icon; // 0x240(0x08)

	void Init(UTexture2D* Texture);
	void ReceiveBeginPlay();
	void Finished_Event();
	void ExecuteUbergraph_BP_PointOfInterest(int32_t EntryPoint);
};

