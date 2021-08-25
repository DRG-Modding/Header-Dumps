// BlueprintGeneratedClass BP_LightPost01.BP_LightPost01_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_LightPost01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Static Mesh; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	struct UPointLightComponent* PointLight; // 0x238(0x08)
	struct FLinearColor Light Color; // 0x240(0x10)
	float Light Intensity; // 0x250(0x04)
	float Light Attenuation; // 0x254(0x04)
	struct TArray<struct UStaticMesh*> Mesh; // 0x258(0x10)
	int32_t Mesh to use; // 0x268(0x04)
	float MaterialGlow; // 0x26c(0x04)
	bool Flicker; // 0x270(0x01)
	char UnknownData_271[0x3]; // 0x271(0x03)
	int32_t TimesToFlash; // 0x274(0x04)
	bool Casts Shadows; // 0x278(0x01)
	char UnknownData_279[0x3]; // 0x279(0x03)
	struct FVector Light Offset; // 0x27c(0x0c)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x288(0x08)

	void UserConstructionScript(); // Function BP_LightPost01.BP_LightPost01_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_LightPost01.BP_LightPost01_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_LightPost01(int32_t EntryPoint); // Function BP_LightPost01.BP_LightPost01_C.ExecuteUbergraph_BP_LightPost01
};

