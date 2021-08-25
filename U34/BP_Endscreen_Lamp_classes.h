// BlueprintGeneratedClass BP_Endscreen_Lamp.BP_Endscreen_Lamp_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_Endscreen_Lamp_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Static Mesh; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	struct UPointLightComponent* PointLight; // 0x238(0x08)
	bool Survived; // 0x240(0x01)
	char UnknownData_241[0x3]; // 0x241(0x03)
	float Light Intensity; // 0x244(0x04)
	float Light Attenuation; // 0x248(0x04)
	float MaterialGlow; // 0x24c(0x04)
	struct FVector Light Offset; // 0x250(0x0c)
	char UnknownData_25C[0x4]; // 0x25c(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x260(0x08)

	void UpdateLights(); // Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UpdateLights
	void UserConstructionScript(); // Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_Endscreen_Lamp(int32_t EntryPoint); // Function BP_Endscreen_Lamp.BP_Endscreen_Lamp_C.ExecuteUbergraph_BP_Endscreen_Lamp
};

