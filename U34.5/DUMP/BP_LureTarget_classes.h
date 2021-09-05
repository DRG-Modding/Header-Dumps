// BlueprintGeneratedClass BP_LureTarget.BP_LureTarget_C
// Size: 0x378 (Inherited: 0x220)
struct ABP_LureTarget_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UFriendlyHealthComponent* FriendlyHealth; // 0x228(0x08)
	UFakeFallComponent* FakeFall; // 0x230(0x08)
	UWidgetComponent* Widget1; // 0x238(0x08)
	UWidgetComponent* Widget; // 0x240(0x08)
	USkeletalMeshComponent* Mesh_Hologram; // 0x248(0x08)
	UPointLightComponent* PointLight; // 0x250(0x08)
	UStaticMeshComponent* Mesh_Projector; // 0x258(0x08)
	UParticleSystemComponent* P_Grenade_Lure_HolloStreaks; // 0x260(0x08)
	UCapsuleComponent* Capsule; // 0x268(0x08)
	UDamageComponent* Damage; // 0x270(0x08)
	UObjectAttackerPositioning* ObjectAttackerPositioning; // 0x278(0x08)
	USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float GlitchAnimationRate_Visibility_C039C82E4E9A2669384696BB798667AF; // 0x288(0x04)
	float GlitchAnimationRate_Animation_Rate_C039C82E4E9A2669384696BB798667AF; // 0x28c(0x04)
	enum class ETimelineDirection GlitchAnimationRate__Direction_C039C82E4E9A2669384696BB798667AF; // 0x290(0x01)
	UTimelineComponent* GlitchAnimationRate; // 0x298(0x08)
	float Glitch2_Y_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a0(0x04)
	float Glitch2_X_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a4(0x04)
	float Glitch2_Z_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a8(0x04)
	enum class ETimelineDirection Glitch2__Direction_6D7D66B2467FD3C0288C8BA13855B201; // 0x2ac(0x01)
	UTimelineComponent* Glitch2; // 0x2b0(0x08)
	float Glitch_Y_96E18DAF461D1987E60A9D86D3431FCD; // 0x2b8(0x04)
	float Glitch_X_96E18DAF461D1987E60A9D86D3431FCD; // 0x2bc(0x04)
	float Glitch_Z_96E18DAF461D1987E60A9D86D3431FCD; // 0x2c0(0x04)
	enum class ETimelineDirection Glitch__Direction_96E18DAF461D1987E60A9D86D3431FCD; // 0x2c4(0x01)
	UTimelineComponent* Glitch; // 0x2c8(0x08)
	float Disappear_Y_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d0(0x04)
	float Disappear_X_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d4(0x04)
	float Disappear_Z_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d8(0x04)
	enum class ETimelineDirection Disappear__Direction_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2dc(0x01)
	UTimelineComponent* Disappear; // 0x2e0(0x08)
	float GrowHologramZ_Y_F6411B824C449290031E39820C54F8D0; // 0x2e8(0x04)
	float GrowHologramZ_X_F6411B824C449290031E39820C54F8D0; // 0x2ec(0x04)
	float GrowHologramZ_Z_F6411B824C449290031E39820C54F8D0; // 0x2f0(0x04)
	enum class ETimelineDirection GrowHologramZ__Direction_F6411B824C449290031E39820C54F8D0; // 0x2f4(0x01)
	UTimelineComponent* GrowHologramZ; // 0x2f8(0x08)
	float LifeTime; // 0x300(0x04)
	UMaterialInstanceDynamic* Dynamic Material; // 0x308(0x08)
	FLinearColor FinalColour; // 0x310(0x10)
	FLinearColor InitialColour; // 0x320(0x10)
	UObject* Animation; // 0x330(0x08)
	TArray<UAnimSequence*> Anim; // 0x338(0x10)
	UMaterialInstanceDynamic* Base Dynamic Material; // 0x348(0x08)
	float RandomZ; // 0x350(0x04)
	float RandomY; // 0x354(0x04)
	float RandomX; // 0x358(0x04)
	UAnimSequence* MainAnimation; // 0x360(0x08)
	bool HasGlitched; // 0x368(0x01)
	UParticleSystemComponent* LureFX; // 0x370(0x08)

	bool GetIsTargetable();
	FVector GetTargetCenterMass();
	UHealthComponentBase* GetTargetHealthComponent();
	void ShowDamageEffects(UParticleSystem* Particles, FVector Location, FRotator Orientation);
	void SetScaleDownLerp(float Z, float Y, float X);
	void SetScaleUpLerp(float Z, float Y, float X);
	void SetScaleLerpFromRandom(float ZRandomConnection, float YRandomConnection, float XRandomConnection);
	void UserConstructionScript();
	void GrowHologramZ__FinishedFunc();
	void GrowHologramZ__UpdateFunc();
	void Disappear__FinishedFunc();
	void Disappear__UpdateFunc();
	void Glitch__FinishedFunc();
	void Glitch__UpdateFunc();
	void Glitch2__FinishedFunc();
	void Glitch2__UpdateFunc();
	void GlitchAnimationRate__FinishedFunc();
	void GlitchAnimationRate__UpdateFunc();
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LureTarget(int32_t EntryPoint);
};

