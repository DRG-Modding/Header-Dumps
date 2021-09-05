// BlueprintGeneratedClass BP_GuntowerActivationPlatfrom.BP_GuntowerActivationPlatfrom_C
// Size: 0x2e0 (Inherited: 0x290)
struct ABP_GuntowerActivationPlatfrom_C : AGuntowerActivationPlatform {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UStaticMeshComponent* Cylinder; // 0x298(0x08)
	UAudioComponent* GunTowerUICount_Cue; // 0x2a0(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a8(0x08)
	UOutlineComponent* outline; // 0x2b0(0x08)
	UWidgetComponent* ProgressScreen; // 0x2b8(0x08)
	UPointLightComponent* PointLight; // 0x2c0(0x08)
	TArray<FColor> LightColors; // 0x2c8(0x10)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x2d8(0x08)

	void SetLightColor(FColor LightColor);
	void DisableLight();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDisabledChanged(bool IsDisabled);
	void OnPlayersInsideChanged(int32_t PlayersInside);
	void OnShutDown();
	void OnFinished();
	void ExecuteUbergraph_BP_GuntowerActivationPlatfrom(int32_t EntryPoint);
};

