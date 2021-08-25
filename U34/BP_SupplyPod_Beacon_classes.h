// BlueprintGeneratedClass BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C
// Size: 0x2f0 (Inherited: 0x220)
struct ABP_SupplyPod_Beacon_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* Hologram; // 0x228(0x08)
	struct UStaticMeshComponent* Mesh_Hologram1; // 0x230(0x08)
	struct UStaticMeshComponent* Mesh_Hologram3; // 0x238(0x08)
	struct UStaticMeshComponent* Mesh_Hologram2; // 0x240(0x08)
	struct UPointLightComponent* PointLight; // 0x248(0x08)
	struct USkeletalMeshComponent* Mesh_Beacon; // 0x250(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	struct UStaticMeshComponent* SM_Light032; // 0x260(0x08)
	struct UStaticMeshComponent* SM_Light031; // 0x268(0x08)
	struct UStaticMeshComponent* SM_Light02; // 0x270(0x08)
	struct UStaticMeshComponent* SM_Light03; // 0x278(0x08)
	struct UWidgetComponent* Widget; // 0x280(0x08)
	struct UWidgetComponent* Widget1; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMeshComponent0; // 0x290(0x08)
	struct UStaticMeshComponent* StaticMeshComponent03; // 0x298(0x08)
	struct UStaticMeshComponent* StaticMeshComponent02; // 0x2a0(0x08)
	struct UStaticMeshComponent* GlowingBit; // 0x2a8(0x08)
	struct USceneComponent* GFX; // 0x2b0(0x08)
	struct USceneComponent* Scene; // 0x2b8(0x08)
	float Light_Animation_0_1_Anim_EE03D2E1499A9CE852A1BBA23175E329; // 0x2c0(0x04)
	char Light_Animation__Direction_EE03D2E1499A9CE852A1BBA23175E329; // 0x2c4(0x01)
	char UnknownData_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Light Animation; // 0x2c8(0x08)
	float LightIntensity; // 0x2d0(0x04)
	struct FLinearColor LightColor; // 0x2d4(0x10)
	float GlowAdd; // 0x2e4(0x04)
	struct FName NewVar_1; // 0x2e8(0x08)

	void UserConstructionScript(); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.UserConstructionScript
	void Light Animation__FinishedFunc(); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__FinishedFunc
	void Light Animation__UpdateFunc(); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.Light Animation__UpdateFunc
	void ReceiveTick(float DeltaSeconds); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveTick
	void ReceiveBeginPlay(); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_SupplyPod_Beacon(int32_t EntryPoint); // Function BP_SupplyPod_Beacon.BP_SupplyPod_Beacon_C.ExecuteUbergraph_BP_SupplyPod_Beacon
};

