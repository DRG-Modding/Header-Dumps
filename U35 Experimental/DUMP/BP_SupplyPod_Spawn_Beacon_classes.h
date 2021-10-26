// BlueprintGeneratedClass BP_SupplyPod_Spawn_Beacon.BP_SupplyPod_Spawn_Beacon_C
// Size: 0x2f4 (Inherited: 0x220)
struct ABP_SupplyPod_Spawn_Beacon_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* Hologram; // 0x228(0x08)
	UStaticMeshComponent* Mesh_Hologram1; // 0x230(0x08)
	UStaticMeshComponent* Mesh_Hologram3; // 0x238(0x08)
	UStaticMeshComponent* Mesh_Hologram2; // 0x240(0x08)
	UPointLightComponent* PointLight; // 0x248(0x08)
	USkeletalMeshComponent* Mesh_Beacon; // 0x250(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x258(0x08)
	UStaticMeshComponent* SM_Light032; // 0x260(0x08)
	UStaticMeshComponent* SM_Light031; // 0x268(0x08)
	UStaticMeshComponent* SM_Light02; // 0x270(0x08)
	UStaticMeshComponent* SM_Light03; // 0x278(0x08)
	UWidgetComponent* Widget; // 0x280(0x08)
	UWidgetComponent* Widget1; // 0x288(0x08)
	UStaticMeshComponent* StaticMeshComponent0; // 0x290(0x08)
	UStaticMeshComponent* StaticMeshComponent03; // 0x298(0x08)
	UStaticMeshComponent* StaticMeshComponent02; // 0x2a0(0x08)
	UStaticMeshComponent* GlowingBit; // 0x2a8(0x08)
	USceneComponent* GFX; // 0x2b0(0x08)
	USceneComponent* Scene; // 0x2b8(0x08)
	float Light_Animation_0_1_Anim_E164D22C46553D83DD4416AB36BC320A; // 0x2c0(0x04)
	enum class ETimelineDirection Light_Animation__Direction_E164D22C46553D83DD4416AB36BC320A; // 0x2c4(0x01)
	UTimelineComponent* Light Animation; // 0x2c8(0x08)
	float LightIntensity; // 0x2d0(0x04)
	FLinearColor LightColor; // 0x2d4(0x10)
	float GlowAdd; // 0x2e4(0x04)
	FName NewVar_1; // 0x2e8(0x08)
	float TimeToLive; // 0x2f0(0x04)

	void UserConstructionScript();
	void Light Animation__FinishedFunc();
	void Light Animation__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SupplyPod_Spawn_Beacon(int32_t EntryPoint);
};

