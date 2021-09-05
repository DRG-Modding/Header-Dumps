// BlueprintGeneratedClass PRJ_ZipLineGun.PRJ_ZipLineGun_C
// Size: 0x350 (Inherited: 0x278)
struct APRJ_ZipLineGun_C : AZipLineProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	UStaticMeshComponent* Screw_A; // 0x280(0x08)
	UPointLightComponent* Light_Start; // 0x288(0x08)
	USkeletalMeshComponent* SK_ZipPole_B; // 0x290(0x08)
	UStaticMeshComponent* SM_ZipPole_Projectile_A; // 0x298(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x2a0(0x08)
	UInstantUsable* InstantUsable; // 0x2a8(0x08)
	UParticleSystemComponent* Particle_Endpoint; // 0x2b0(0x08)
	UParticleSystemComponent* Trail; // 0x2b8(0x08)
	UPointLightComponent* Light_End; // 0x2c0(0x08)
	USceneComponent* EndPoint; // 0x2c8(0x08)
	UCableComponent* Cable; // 0x2d0(0x08)
	UCapsuleComponent* Capsule; // 0x2d8(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2e0(0x08)
	FVector Start; // 0x2e8(0x0c)
	FVector End; // 0x2f4(0x0c)
	bool IsSet; // 0x300(0x01)
	float Progress; // 0x304(0x04)
	float LifeTime; // 0x308(0x04)
	FLinearColor LineColor; // 0x30c(0x10)
	float LineThickness; // 0x31c(0x04)
	UMaterialInstanceDynamic* CylLightEnd_DM; // 0x320(0x08)
	UMaterialInstanceDynamic* CylLightStart_DM; // 0x328(0x08)
	FLinearColor LightColorEnd; // 0x330(0x10)
	FLinearColor LightColorStart; // 0x340(0x10)

	void GetNearestPointOnLine(FVector WorldPosition, FVector LineStart, FVector LineEnd, FVector NearestLinePosition);
	void Finish Zip Line();
	void UserConstructionScript();
	void On Hit();
	void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	void OnShoot(FVector Origin, FVector EndLocation);
	void ReceiveTick(float DeltaSeconds);
	void SetCollider();
	void ReceiveBeginPlay();
	void All_ConnectWithZipLine(FVector Location, float VerticalSpeed);
	void ExecuteUbergraph_PRJ_ZipLineGun(int32_t EntryPoint);
};

