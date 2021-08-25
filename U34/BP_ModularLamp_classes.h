// BlueprintGeneratedClass BP_ModularLamp.BP_ModularLamp_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_ModularLamp_C : AActor {
	struct UPointLightComponent* Light; // 0x220(0x08)
	struct UStaticMeshComponent* Mesh; // 0x228(0x08)
	struct USceneComponent* Scene; // 0x230(0x08)
	char MeshSelection; // 0x238(0x01)
	char UnknownData_239[0x3]; // 0x239(0x03)
	struct FLinearColor LightColor; // 0x23c(0x10)
	float LightIntensity; // 0x24c(0x04)
	float LightAttenuation; // 0x250(0x04)
	float LightFalloffExponent; // 0x254(0x04)
	struct FVector LightOffset; // 0x258(0x0c)
	float MaterialModifier; // 0x264(0x04)

	struct FSTRUCT_Lamp GetMeshStructByEnum(char Index); // Function BP_ModularLamp.BP_ModularLamp_C.GetMeshStructByEnum
	void SetLightColor(struct FLinearColor LightColor); // Function BP_ModularLamp.BP_ModularLamp_C.SetLightColor
	void UserConstructionScript(); // Function BP_ModularLamp.BP_ModularLamp_C.UserConstructionScript
};

