// BlueprintGeneratedClass BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C
// Size: 0x2e0 (Inherited: 0x290)
struct ABP_GuntowerActivationPlatfrom_C : AGuntowerActivationPlatform {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x298(0x08)
	struct UAudioComponent* GunTowerUICount_Cue; // 0x2a0(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a8(0x08)
	struct UOutlineComponent* outline; // 0x2b0(0x08)
	struct UWidgetComponent* ProgressScreen; // 0x2b8(0x08)
	struct UPointLightComponent* PointLight; // 0x2c0(0x08)
	struct TArray<struct FColor> LightColors; // 0x2c8(0x10)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x2d8(0x08)

	void SetLightColor(struct FColor LightColor); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.SetLightColor
	void DisableLight(); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.DisableLight
	void UserConstructionScript(); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.ReceiveBeginPlay
	void OnDisabledChanged(bool IsDisabled); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.OnDisabledChanged
	void OnPlayersInsideChanged(int32_t PlayersInside); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.OnPlayersInsideChanged
	void OnShutDown(); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.OnShutDown
	void OnFinished(); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.OnFinished
	void ExecuteUbergraph_BP_GuntowerActivationPlatfrom(int32_t EntryPoint); // Function BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C.ExecuteUbergraph_BP_GuntowerActivationPlatfrom
};

