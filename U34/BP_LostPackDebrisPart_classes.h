// BlueprintGeneratedClass BP_LostPackDebrisPart.BP_LostPackDebrisPart_C
// Size: 0x25c (Inherited: 0x220)
struct ABP_LostPackDebrisPart_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	struct UStaticMeshComponent* DebrisMesh; // 0x230(0x08)
	struct USphereComponent* Sphere; // 0x238(0x08)
	struct UDropToTerrainComponent* DropToTerrain; // 0x240(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x248(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x250(0x08)
	int32_t Version; // 0x258(0x04)

	void OnRep_Version(); // Function BP_LostPackDebrisPart.BP_LostPackDebrisPart_C.OnRep_Version
	void ReceiveBeginPlay(); // Function BP_LostPackDebrisPart.BP_LostPackDebrisPart_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_LostPackDebrisPart(int32_t EntryPoint); // Function BP_LostPackDebrisPart.BP_LostPackDebrisPart_C.ExecuteUbergraph_BP_LostPackDebrisPart
};

