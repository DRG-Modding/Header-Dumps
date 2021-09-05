// BlueprintGeneratedClass BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C
// Size: 0xa1c (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Damaged_C : ABP_DropPod_Escape_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x9a8(0x08)
	UStaticMeshComponent* DistressLamp1; // 0x9b0(0x08)
	UStaticMeshComponent* DistressLamp3; // 0x9b8(0x08)
	UChildActorComponent* FuelLineConnector; // 0x9c0(0x08)
	ULevelGenerationDebris* LevelGenerationDebris; // 0x9c8(0x08)
	URoomCarverComponent* RoomCarver; // 0x9d0(0x08)
	UMeshCarverComponent* DrillCarver; // 0x9d8(0x08)
	UMeshCarverComponent* DropHoleCarver; // 0x9e0(0x08)
	ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x9e8(0x08)
	UPointLightComponent* PointLight4_1; // 0x9f0(0x08)
	UStaticMeshComponent* DistressLamp2; // 0x9f8(0x08)
	UStaticMeshComponent* DistressLamp; // 0xa00(0x08)
	float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE; // 0xa08(0x04)
	enum class ETimelineDirection DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE; // 0xa0c(0x01)
	UTimelineComponent* DistressLightIntensity; // 0xa10(0x08)
	float DistressLightIntensity_; // 0xa18(0x04)

	void Handle PhotosenitivityDamagedPod();
	void DistressLightIntensity__FinishedFunc();
	void DistressLightIntensity__UpdateFunc();
	void ReceiveBeginPlay();
	void OnMuleLoaded();
	void OnMatchStarted_Event_1();
	void OnPoweringUp();
	void OnPoweredUp();
	void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32_t EntryPoint);
};

