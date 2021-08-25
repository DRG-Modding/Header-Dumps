// BlueprintGeneratedClass BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C
// Size: 0xa1c (Inherited: 0x9a8)
struct ABP_DropPod_Escape_Damaged_C : ABP_DropPod_Escape_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a8(0x08)
	struct UStaticMeshComponent* DistressLamp1; // 0x9b0(0x08)
	struct UStaticMeshComponent* DistressLamp3; // 0x9b8(0x08)
	struct UChildActorComponent* FuelLineConnector; // 0x9c0(0x08)
	struct ULevelGenerationDebris* LevelGenerationDebris; // 0x9c8(0x08)
	struct URoomCarverComponent* RoomCarver; // 0x9d0(0x08)
	struct UMeshCarverComponent* DrillCarver; // 0x9d8(0x08)
	struct UMeshCarverComponent* DropHoleCarver; // 0x9e0(0x08)
	struct ULevelGenerationCarverComponent* LevelGenerationCarver; // 0x9e8(0x08)
	struct UPointLightComponent* PointLight4_1; // 0x9f0(0x08)
	struct UStaticMeshComponent* DistressLamp2; // 0x9f8(0x08)
	struct UStaticMeshComponent* DistressLamp; // 0xa00(0x08)
	float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE; // 0xa08(0x04)
	char DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE; // 0xa0c(0x01)
	char UnknownData_A0D[0x3]; // 0xa0d(0x03)
	struct UTimelineComponent* DistressLightIntensity; // 0xa10(0x08)
	float DistressLightIntensity_; // 0xa18(0x04)

	void Handle PhotosenitivityDamagedPod(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.Handle PhotosenitivityDamagedPod
	void DistressLightIntensity__FinishedFunc(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.DistressLightIntensity__FinishedFunc
	void DistressLightIntensity__UpdateFunc(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.DistressLightIntensity__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.ReceiveBeginPlay
	void OnMuleLoaded(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.OnMuleLoaded
	void OnMatchStarted_Event_1(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.OnMatchStarted_Event_1
	void OnPoweringUp(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.OnPoweringUp
	void OnPoweredUp(); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.OnPoweredUp
	void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32_t EntryPoint); // Function BP_DropPod_Escape_Damaged.BP_DropPod_Escape_Damaged_C.ExecuteUbergraph_BP_DropPod_Escape_Damaged
};

