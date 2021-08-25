// BlueprintGeneratedClass BP_FloatingLightPlant2.BP_FloatingLightPlant2_C
// Size: 0x304 (Inherited: 0x220)
struct ABP_FloatingLightPlant2_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPointLightComponent* PointLight; // 0x228(0x08)
	struct USimpleObjectInfoComponent* SimpleObjectInfo; // 0x230(0x08)
	struct UCapsuleComponent* Capsule; // 0x238(0x08)
	struct USkeletalMeshComponent* SK_FloatingLightPlant_A; // 0x240(0x08)
	struct UPathfinderCollisionComponent* PathfinderCollision; // 0x248(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x250(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x258(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x260(0x08)
	struct USphereComponent* ProximityTrigger; // 0x268(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x270(0x08)
	float VariationLoop_Variation_1D8B412C4585AB2E56DAE8A298D8B484; // 0x278(0x04)
	char VariationLoop__Direction_1D8B412C4585AB2E56DAE8A298D8B484; // 0x27c(0x01)
	char UnknownData_27D[0x3]; // 0x27d(0x03)
	struct UTimelineComponent* VariationLoop; // 0x280(0x08)
	float FloaterValues_Brightness_D91E97D14BA4C776610A308453452A23; // 0x288(0x04)
	float FloaterValues_Height_D91E97D14BA4C776610A308453452A23; // 0x28c(0x04)
	char FloaterValues__Direction_D91E97D14BA4C776610A308453452A23; // 0x290(0x01)
	char UnknownData_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* FloaterValues; // 0x298(0x08)
	float BaseFloaterHeight; // 0x2a0(0x04)
	float FloaterHeightVariation; // 0x2a4(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x2a8(0x08)
	float BaseMaterialEmmisive; // 0x2b0(0x04)
	float TimelineBrightnessChangeOnHit; // 0x2b4(0x04)
	float TimelineVariationWhileFloating; // 0x2b8(0x04)
	float TimelineBrightness; // 0x2bc(0x04)
	float TimelineHeight; // 0x2c0(0x04)
	float BaseIntensity; // 0x2c4(0x04)
	float BaseFloaterScale; // 0x2c8(0x04)
	bool HIdeFloater; // 0x2cc(0x01)
	char UnknownData_2CD[0x3]; // 0x2cd(0x03)
	struct FName Param_EmmisiveMult; // 0x2d0(0x08)
	struct FName Param_DisplacementSpeed; // 0x2d8(0x08)
	struct FName Param_DisplacementIntensity; // 0x2e0(0x08)
	float BaseMaterialDisplacement; // 0x2e8(0x04)
	char UnknownData_2EC[0x4]; // 0x2ec(0x04)
	struct FMulticastInlineDelegate OnChangeState; // 0x2f0(0x10)
	float HideDuration; // 0x300(0x04)

	void OnRep_HIdeFloater(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.OnRep_HIdeFloater
	void VariationLoop__FinishedFunc(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.VariationLoop__FinishedFunc
	void VariationLoop__UpdateFunc(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.VariationLoop__UpdateFunc
	void FloaterValues__FinishedFunc(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.FloaterValues__FinishedFunc
	void FloaterValues__UpdateFunc(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.FloaterValues__UpdateFunc
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature(float Damage, struct UDamageClass* DamageClass, struct AActor* DamageCauser, bool anyHealthLost); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_HitSig__DelegateSignature
	void Hide(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.Hide
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature
	void OnTerrainPointRemoved(); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.OnTerrainPointRemoved
	void ExecuteUbergraph_BP_FloatingLightPlant2(int32_t EntryPoint); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.ExecuteUbergraph_BP_FloatingLightPlant2
	void OnChangeState__DelegateSignature(bool IsOpen, bool IsHIt); // Function BP_FloatingLightPlant2.BP_FloatingLightPlant2_C.OnChangeState__DelegateSignature
};

