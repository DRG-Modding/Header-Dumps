// BlueprintGeneratedClass BP_Portal.BP_Portal_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_Portal_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* SM_Prim_GeoSphere_20segments; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	USceneCaptureComponent2D* NewVar_1; // 0x238(0x08)
	UObject* SceneReference; // 0x240(0x08)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Portal(int32_t EntryPoint);
};

