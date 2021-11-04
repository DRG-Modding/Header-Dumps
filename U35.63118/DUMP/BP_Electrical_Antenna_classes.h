// BlueprintGeneratedClass BP_Electrical_Antenna.BP_Electrical_Antenna_C
// Size: 0x251 (Inherited: 0x220)
struct ABP_Electrical_Antenna_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Mesh; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Timeline_0_NewTrack_0_E582EA524803E9C74EB2B5B181BF700F; // 0x240(0x04)
	enum class ETimelineDirection Timeline_0__Direction_E582EA524803E9C74EB2B5B181BF700F; // 0x244(0x01)
	UTimelineComponent* Timeline_1; // 0x248(0x08)
	bool Active; // 0x250(0x01)

	void OnRep_Active();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void DeactivateAnenna();
	void Retract();
	void ExecuteUbergraph_BP_Electrical_Antenna(int32_t EntryPoint);
};

