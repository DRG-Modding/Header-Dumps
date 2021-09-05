// BlueprintGeneratedClass BP_MuleLeg.BP_MuleLeg_C
// Size: 0x3a0 (Inherited: 0x321)
struct ABP_MuleLeg_C : ABP_Gem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UAudioComponent* MiniMuleLegPickUp; // 0x330(0x08)
	UAudioComponent* MiniMuleLegDrop; // 0x338(0x08)
	UAudioComponent* AudioPingWhenPickedUp; // 0x340(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x348(0x08)
	UStaticMeshComponent* Distress_Sphere; // 0x350(0x08)
	UPointLightComponent* PointLight; // 0x358(0x08)
	float Beacon_Alpha_5F66972149AD0193977EA08FF82B6FB4; // 0x360(0x04)
	float Beacon_Scale_5F66972149AD0193977EA08FF82B6FB4; // 0x364(0x04)
	enum class ETimelineDirection Beacon__Direction_5F66972149AD0193977EA08FF82B6FB4; // 0x368(0x01)
	UTimelineComponent* Beacon; // 0x370(0x08)
	bool IsVisibleOnScanner; // 0x378(0x01)
	TArray<ABP_MiniMule_Salvage_C*> PingingMules; // 0x380(0x10)
	TArray<ABP_MiniMule_Salvage_C*> AllMules; // 0x390(0x10)

	void GetDistToNearestMULE(float OutDist);
	void UpdateBeacon();
	void InitVisibleOnScanner();
	void SetPingedByMule(ABP_MiniMule_Salvage_C* InMiniMule, bool InPinged);
	void OnRep_IsVisibleOnScanner();
	void Beacon__FinishedFunc();
	void Beacon__UpdateFunc();
	void ReceiveBeginPlay();
	void DisableDistressSphere();
	void SetVisibleOnScanner();
	void OnDropped_Event_1();
	void OnPickedUp_Event();
	void Ping Beacon();
	void OnDisableLegSpheres_Event();
	void Ping While Carried();
	void ExecuteUbergraph_BP_MuleLeg(int32_t EntryPoint);
};

