// BlueprintGeneratedClass BP_LureTarget.BP_LureTarget_C
// Size: 0x378 (Inherited: 0x220)
struct ABP_LureTarget_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UFriendlyHealthComponent* FriendlyHealth; // 0x228(0x08)
	struct UFakeFallComponent* FakeFall; // 0x230(0x08)
	struct UWidgetComponent* Widget1; // 0x238(0x08)
	struct UWidgetComponent* Widget; // 0x240(0x08)
	struct USkeletalMeshComponent* Mesh_Hologram; // 0x248(0x08)
	struct UPointLightComponent* PointLight; // 0x250(0x08)
	struct UStaticMeshComponent* Mesh_Projector; // 0x258(0x08)
	struct UParticleSystemComponent* P_Grenade_Lure_HolloStreaks; // 0x260(0x08)
	struct UCapsuleComponent* Capsule; // 0x268(0x08)
	struct UDamageComponent* Damage; // 0x270(0x08)
	struct UObjectAttackerPositioning* ObjectAttackerPositioning; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	float GlitchAnimationRate_Visibility_C039C82E4E9A2669384696BB798667AF; // 0x288(0x04)
	float GlitchAnimationRate_Animation_Rate_C039C82E4E9A2669384696BB798667AF; // 0x28c(0x04)
	char GlitchAnimationRate__Direction_C039C82E4E9A2669384696BB798667AF; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* GlitchAnimationRate; // 0x298(0x08)
	float Glitch2_Y_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a0(0x04)
	float Glitch2_X_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a4(0x04)
	float Glitch2_Z_6D7D66B2467FD3C0288C8BA13855B201; // 0x2a8(0x04)
	char Glitch2__Direction_6D7D66B2467FD3C0288C8BA13855B201; // 0x2ac(0x01)
	char UnknownData_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Glitch2; // 0x2b0(0x08)
	float Glitch_Y_96E18DAF461D1987E60A9D86D3431FCD; // 0x2b8(0x04)
	float Glitch_X_96E18DAF461D1987E60A9D86D3431FCD; // 0x2bc(0x04)
	float Glitch_Z_96E18DAF461D1987E60A9D86D3431FCD; // 0x2c0(0x04)
	char Glitch__Direction_96E18DAF461D1987E60A9D86D3431FCD; // 0x2c4(0x01)
	char UnknownData_2C5[0x3]; // 0x2c5(0x03)
	struct UTimelineComponent* Glitch; // 0x2c8(0x08)
	float Disappear_Y_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d0(0x04)
	float Disappear_X_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d4(0x04)
	float Disappear_Z_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2d8(0x04)
	char Disappear__Direction_B748642F45FA83EEDB7F8DB0E524EFA5; // 0x2dc(0x01)
	char UnknownData_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* Disappear; // 0x2e0(0x08)
	float GrowHologramZ_Y_F6411B824C449290031E39820C54F8D0; // 0x2e8(0x04)
	float GrowHologramZ_X_F6411B824C449290031E39820C54F8D0; // 0x2ec(0x04)
	float GrowHologramZ_Z_F6411B824C449290031E39820C54F8D0; // 0x2f0(0x04)
	char GrowHologramZ__Direction_F6411B824C449290031E39820C54F8D0; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* GrowHologramZ; // 0x2f8(0x08)
	float LifeTime; // 0x300(0x04)
	char UnknownData_304[0x4]; // 0x304(0x04)
	struct UMaterialInstanceDynamic* Dynamic Material; // 0x308(0x08)
	struct FLinearColor FinalColour; // 0x310(0x10)
	struct FLinearColor InitialColour; // 0x320(0x10)
	struct UObject* Animation; // 0x330(0x08)
	struct TArray<struct UAnimSequence*> Anim; // 0x338(0x10)
	struct UMaterialInstanceDynamic* Base Dynamic Material; // 0x348(0x08)
	float RandomZ; // 0x350(0x04)
	float RandomY; // 0x354(0x04)
	float RandomX; // 0x358(0x04)
	char UnknownData_35C[0x4]; // 0x35c(0x04)
	struct UAnimSequence* MainAnimation; // 0x360(0x08)
	bool HasGlitched; // 0x368(0x01)
	char UnknownData_369[0x7]; // 0x369(0x07)
	struct UParticleSystemComponent* LureFX; // 0x370(0x08)

	bool GetIsTargetable(); // Function BP_LureTarget.BP_LureTarget_C.GetIsTargetable
	struct FVector GetTargetCenterMass(); // Function BP_LureTarget.BP_LureTarget_C.GetTargetCenterMass
	struct UHealthComponentBase* GetTargetHealthComponent(); // Function BP_LureTarget.BP_LureTarget_C.GetTargetHealthComponent
	void ShowDamageEffects(struct UParticleSystem* Particles, struct FVector Location, struct FRotator Orientation); // Function BP_LureTarget.BP_LureTarget_C.ShowDamageEffects
	void UserConstructionScript(); // Function BP_LureTarget.BP_LureTarget_C.UserConstructionScript
	void GrowHologramZ__FinishedFunc(); // Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__FinishedFunc
	void GrowHologramZ__UpdateFunc(); // Function BP_LureTarget.BP_LureTarget_C.GrowHologramZ__UpdateFunc
	void Disappear__FinishedFunc(); // Function BP_LureTarget.BP_LureTarget_C.Disappear__FinishedFunc
	void Disappear__UpdateFunc(); // Function BP_LureTarget.BP_LureTarget_C.Disappear__UpdateFunc
	void Glitch__FinishedFunc(); // Function BP_LureTarget.BP_LureTarget_C.Glitch__FinishedFunc
	void Glitch__UpdateFunc(); // Function BP_LureTarget.BP_LureTarget_C.Glitch__UpdateFunc
	void Glitch2__FinishedFunc(); // Function BP_LureTarget.BP_LureTarget_C.Glitch2__FinishedFunc
	void Glitch2__UpdateFunc(); // Function BP_LureTarget.BP_LureTarget_C.Glitch2__UpdateFunc
	void GlitchAnimationRate__FinishedFunc(); // Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__FinishedFunc
	void GlitchAnimationRate__UpdateFunc(); // Function BP_LureTarget.BP_LureTarget_C.GlitchAnimationRate__UpdateFunc
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature(float Health); // Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_HealthChangedSig__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_LureTarget.BP_LureTarget_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void ReceiveBeginPlay(); // Function BP_LureTarget.BP_LureTarget_C.ReceiveBeginPlay
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature
	void BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature(float Health); // Function BP_LureTarget.BP_LureTarget_C.BndEvt__FriendlyHealth_K2Node_ComponentBoundEvent_3_HealthChangedSig__DelegateSignature
	void ExecuteUbergraph_BP_LureTarget(int32_t EntryPoint); // Function BP_LureTarget.BP_LureTarget_C.ExecuteUbergraph_BP_LureTarget
};

