// BlueprintGeneratedClass BP_ModularLamp.BP_ModularLamp_C
// Size: 0x268 (Inherited: 0x220)
struct ABP_ModularLamp_C : AActor {
	UPointLightComponent* Light; // 0x220(0x08)
	UStaticMeshComponent* Mesh; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)
	enum class ENUM_ModularLamps MeshSelection; // 0x238(0x01)
	FLinearColor LightColor; // 0x23c(0x10)
	float LightIntensity; // 0x24c(0x04)
	float LightAttenuation; // 0x250(0x04)
	float LightFalloffExponent; // 0x254(0x04)
	FVector LightOffset; // 0x258(0x0c)
	float MaterialModifier; // 0x264(0x04)

	FSTRUCT_Lamp GetMeshStructByEnum(enum class ENUM_ModularLamps Index);
	void SetLightColor(FLinearColor LightColor);
	void UserConstructionScript();
};

