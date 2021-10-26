// BlueprintGeneratedClass BP_Mainfacility_ShieldEmitter_ForceFieldProjector.BP_Mainfacility_ShieldEmitter_ForceFieldProjector_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_Mainfacility_ShieldEmitter_ForceFieldProjector_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USimpleObjectInfoComponent* SimpleObjectInfo; // 0x228(0x08)
	UChildActorComponent* RHologram; // 0x230(0x08)
	UChildActorComponent* LHologram; // 0x238(0x08)
	UStaticMeshComponent* RShield; // 0x240(0x08)
	UStaticMeshComponent* LShield; // 0x248(0x08)
	UArrowComponent* LLaunchDirection; // 0x250(0x08)
	UArrowComponent* RLaunchDirection; // 0x258(0x08)
	UStaticMeshComponent* LBattery; // 0x260(0x08)
	UStaticMeshComponent* RBattery; // 0x268(0x08)
	USingleUsableComponent* LUsable; // 0x270(0x08)
	USingleUsableComponent* RUsable; // 0x278(0x08)
	USphereComponent* LUseCollision; // 0x280(0x08)
	USphereComponent* RUseCollision; // 0x288(0x08)
	USkeletalMeshComponent* Body; // 0x290(0x08)
	USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	bool Open; // 0x2a0(0x01)
	bool LUsed; // 0x2a1(0x01)
	bool RUsed; // 0x2a2(0x01)
	int32_t Uses; // 0x2a4(0x04)
	float LaunchAnimTIme; // 0x2a8(0x04)
	FMulticastInlineDelegate ShieldDeactivated; // 0x2b0(0x10)
	float LaunchPower; // 0x2c0(0x04)
	UParticleSystemComponent* LSmokeParticles; // 0x2c8(0x08)
	UParticleSystemComponent* RSmokeParticles; // 0x2d0(0x08)
	UMaterialInstanceDynamic* LightMaterial; // 0x2d8(0x08)

	void OnRep_Open();
	void Expose();
	void GetConnectorPoints(FTransform ConnectorL, FTransform ConnectorR);
	void LaunchBattery(ABP_ShieldBattery_C* Battery, USceneComponent* Direction, float force);
	void OnRep_RUsed();
	void OnRep_LUsed();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__RUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void BndEvt__LUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User, enum class EInputKeys Key);
	void LUse_All();
	void RUsed_All();
	void Launch plates();
	void Cheat_Deactivate();
	void BndEvt__RUsable_K2Node_ComponentBoundEvent_2_UsableChangedSignature__DelegateSignature(bool CanUse);
	void UpdateRHologram();
	void BndEvt__LUsable_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
	void UpdateLHologram();
	void ExecuteUbergraph_BP_Mainfacility_ShieldEmitter_ForceFieldProjector(int32_t EntryPoint);
	void ShieldDeactivated__DelegateSignature();
};

