// BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
// Size: 0x378 (Inherited: 0x321)
struct ABP_MuleLeg_C : ABP_Gem_C {
	char UnknownData_321[0x7]; // 0x321(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x330(0x08)
	struct UStaticMeshComponent* Distress_Sphere; // 0x338(0x08)
	struct UPointLightComponent* PointLight; // 0x340(0x08)
	float Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4; // 0x348(0x04)
	float Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4; // 0x34c(0x04)
	char Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4; // 0x350(0x01)
	char UnknownData_351[0x7]; // 0x351(0x07)
	struct UTimelineComponent* Beacon; // 0x358(0x08)
	bool IsVisibleOnScanner; // 0x360(0x01)
	char UnknownData_361[0x7]; // 0x361(0x07)
	struct TArray<struct ABP_MiniMule_Salvage_C*> PingingMules; // 0x368(0x10)

	void UpdateFX(); // Function BP_MuleLeg.BP_MuleLeg_C.UpdateFX
	void InitVisibleOnScanner(); // Function BP_MuleLeg.BP_MuleLeg_C.InitVisibleOnScanner
	void SetPingedByMule(struct ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged); // Function BP_MuleLeg.BP_MuleLeg_C.SetPingedByMule
	void OnRep_IsVisibleOnScanner(); // Function BP_MuleLeg.BP_MuleLeg_C.OnRep_IsVisibleOnScanner
	void Beacon__FinishedFunc(); // Function BP_MuleLeg.BP_MuleLeg_C.Beacon__FinishedFunc
	void Beacon__UpdateFunc(); // Function BP_MuleLeg.BP_MuleLeg_C.Beacon__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_MuleLeg.BP_MuleLeg_C.ReceiveBeginPlay
	void DisableDistressSphere(); // Function BP_MuleLeg.BP_MuleLeg_C.DisableDistressSphere
	void SetVisibleOnScanner(); // Function BP_MuleLeg.BP_MuleLeg_C.SetVisibleOnScanner
	void OnDropped_Event_1(); // Function BP_MuleLeg.BP_MuleLeg_C.OnDropped_Event_1
	void OnPickedUp_Event(); // Function BP_MuleLeg.BP_MuleLeg_C.OnPickedUp_Event
	void Ping Beacon(); // Function BP_MuleLeg.BP_MuleLeg_C.Ping Beacon
	void OnDisableLegSpheres_Event(); // Function BP_MuleLeg.BP_MuleLeg_C.OnDisableLegSpheres_Event
	void ExecuteUbergraph_BP_MuleLeg(int32_t EntryPoint); // Function BP_MuleLeg.BP_MuleLeg_C.ExecuteUbergraph_BP_MuleLeg
};

