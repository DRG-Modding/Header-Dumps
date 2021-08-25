// BlueprintGeneratedClass PRJ_ZipLineGun.PRJ_ZipLineGun_C
// Size: 0x350 (Inherited: 0x278)
struct APRJ_ZipLineGun_C : AZipLineProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UStaticMeshComponent* Screw_A; // 0x280(0x08)
	struct UPointLightComponent* Light_Start; // 0x288(0x08)
	struct USkeletalMeshComponent* SK_ZipPole_B; // 0x290(0x08)
	struct UStaticMeshComponent* SM_ZipPole_Projectile_A; // 0x298(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a0(0x08)
	struct UInstantUsable* InstantUsable; // 0x2a8(0x08)
	struct UParticleSystemComponent* Particle_Endpoint; // 0x2b0(0x08)
	struct UParticleSystemComponent* Trail; // 0x2b8(0x08)
	struct UPointLightComponent* Light_End; // 0x2c0(0x08)
	struct USceneComponent* EndPoint; // 0x2c8(0x08)
	struct UCableComponent* Cable; // 0x2d0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2d8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	struct FVector Start; // 0x2e8(0x0c)
	struct FVector End; // 0x2f4(0x0c)
	bool IsSet; // 0x300(0x01)
	char UnknownData_301[0x3]; // 0x301(0x03)
	float Progress; // 0x304(0x04)
	float LifeTime; // 0x308(0x04)
	struct FLinearColor LineColor; // 0x30c(0x10)
	float LineThickness; // 0x31c(0x04)
	struct UMaterialInstanceDynamic* CylLightEnd_DM; // 0x320(0x08)
	struct UMaterialInstanceDynamic* CylLightStart_DM; // 0x328(0x08)
	struct FLinearColor LightColorEnd; // 0x330(0x10)
	struct FLinearColor LightColorStart; // 0x340(0x10)

	void GetNearestPointOnLine(struct FVector WorldPosition, struct FVector LineStart, struct FVector LineEnd, struct FVector NearestLinePosition); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.GetNearestPointOnLine
	void Finish Zip Line(); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.Finish Zip Line
	void UserConstructionScript(); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.UserConstructionScript
	void On Hit(); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.On Hit
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(struct APlayerCharacter* User); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature
	void OnShoot(struct FVector Origin, struct FVector EndLocation); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.OnShoot
	void ReceiveTick(float DeltaSeconds); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveTick
	void SetCollider(); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.SetCollider
	void ReceiveBeginPlay(); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ReceiveBeginPlay
	void All_ConnectWithZipLine(struct FVector Location, float VerticalSpeed); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.All_ConnectWithZipLine
	void ExecuteUbergraph_PRJ_ZipLineGun(int32_t EntryPoint); // Function PRJ_ZipLineGun.PRJ_ZipLineGun_C.ExecuteUbergraph_PRJ_ZipLineGun
};

