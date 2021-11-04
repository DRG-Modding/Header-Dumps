// BlueprintGeneratedClass BP_Endscreen_Lamp.BP_Endscreen_Lamp_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Endscreen_Lamp_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Static Mesh; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)
	UPointLightComponent* PointLight; // 0x238(0x08)
	bool Survived; // 0x240(0x01)
	float Light Intensity; // 0x244(0x04)
	float Light Attenuation; // 0x248(0x04)
	float MaterialGlow; // 0x24c(0x04)
	FVector Light Offset; // 0x250(0x0c)
	UMaterialInstanceDynamic* DynamicMaterial; // 0x260(0x08)

	void UpdateLights();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Endscreen_Lamp(int32_t EntryPoint);
};

