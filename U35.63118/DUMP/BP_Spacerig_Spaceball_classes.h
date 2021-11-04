// BlueprintGeneratedClass BP_Spacerig_Spaceball.BP_Spacerig_Spaceball_C
// Size: 0x360 (Inherited: 0x278)
struct ABP_Spacerig_Spaceball_C : AGem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	USingleUsableComponent* SingleUsable; // 0x280(0x08)
	USpotLightComponent* SpotLight12; // 0x288(0x08)
	USpotLightComponent* SpotLight11; // 0x290(0x08)
	USpotLightComponent* SpotLight10; // 0x298(0x08)
	USpotLightComponent* SpotLight9; // 0x2a0(0x08)
	USpotLightComponent* SpotLight8; // 0x2a8(0x08)
	USpotLightComponent* SpotLight7; // 0x2b0(0x08)
	USpotLightComponent* SpotLight6; // 0x2b8(0x08)
	USpotLightComponent* SpotLight5; // 0x2c0(0x08)
	USpotLightComponent* SpotLight4; // 0x2c8(0x08)
	USpotLightComponent* SpotLight3; // 0x2d0(0x08)
	USpotLightComponent* SpotLight1; // 0x2d8(0x08)
	USpotLightComponent* SpotLight2; // 0x2e0(0x08)
	USphereComponent* UseSphere; // 0x2e8(0x08)
	UStaticMeshComponent* SM_spaceball_01; // 0x2f0(0x08)
	USphereComponent* Collision; // 0x2f8(0x08)
	UCarriableComponent* Carriable; // 0x300(0x08)
	APlayerCharacter* KickedBy; // 0x308(0x08)
	FVector ImpactNormal; // 0x310(0x0c)
	FVector ImpactPoint; // 0x31c(0x0c)
	FVector TraceDirection; // 0x328(0x0c)
	USoundBase* ImpactSound; // 0x338(0x08)
	FVector throwForce; // 0x340(0x0c)
	bool HasShowedTutorial; // 0x34c(0x01)
	UActorComponent* LastBounce; // 0x350(0x08)
	FName LastUseKey; // 0x358(0x08)

	void ShootBall(float ChipValue);
	void PlayKickAnim(APlayerCharacter* Kicker);
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_4_CarriableEvent__DelegateSignature();
	void BndEvt__Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
	void Throw(FVector force);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void BndEvt__Collision_K2Node_ComponentBoundEvent_11_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_6_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_7_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_8_UsableChangedSignature__DelegateSignature(bool CanUse);
	void ExecuteUbergraph_BP_Spacerig_Spaceball(int32_t EntryPoint);
};

