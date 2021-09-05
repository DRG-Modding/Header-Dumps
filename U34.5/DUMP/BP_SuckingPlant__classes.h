// BlueprintGeneratedClass BP_SuckingPlant_.BP_SuckingPlant__C
// Size: 0x3b4 (Inherited: 0x280)
struct ABP_SuckingPlant__C : APawn {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	UAudioComponent* SuckingPlantMove; // 0x288(0x08)
	UAudioComponent* SuckingPlantLoop; // 0x290(0x08)
	UAudioComponent* SuckingPlantClose; // 0x298(0x08)
	UAudioComponent* SuckingPlantOpen; // 0x2a0(0x08)
	UParticleSystemComponent* SuckingPSys; // 0x2a8(0x08)
	USphereComponent* MouthBlocker; // 0x2b0(0x08)
	UCapsuleComponent* Capsule; // 0x2b8(0x08)
	USkeletalMeshComponent* PlantBody; // 0x2c0(0x08)
	UTerrainPlacementComponent* terrainPlacement; // 0x2c8(0x08)
	UTerrainDetectComponent* TerrainDetect; // 0x2d0(0x08)
	USimpleHealthComponent* SimpleHealth; // 0x2d8(0x08)
	UPawnSensingComponent* PawnSensing; // 0x2e0(0x08)
	USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)
	float Pulsating_shell_Pulse_351B8E04438E55A34AD7599F13872713; // 0x2f0(0x04)
	enum class ETimelineDirection Pulsating_shell__Direction_351B8E04438E55A34AD7599F13872713; // 0x2f4(0x01)
	UTimelineComponent* Pulsating shell; // 0x2f8(0x08)
	enum class ETimelineDirection Move_towards_target__Direction_3E7A86F94B91CDEC852EE0BAD9B36A13; // 0x300(0x01)
	UTimelineComponent* Move towards target; // 0x308(0x08)
	float Sucking_Duration_Model_Emissive_intensity___7C306C17493093A48A5774B653EC9DCE; // 0x310(0x04)
	enum class ETimelineDirection Sucking_Duration__Direction_7C306C17493093A48A5774B653EC9DCE; // 0x314(0x01)
	UTimelineComponent* Sucking Duration; // 0x318(0x08)
	FRotator Target Look At Rotation; // 0x320(0x0c)
	TArray<APlayerCharacter*> Players inside; // 0x330(0x10)
	APawn* Current Target; // 0x340(0x08)
	float Suck Duration; // 0x348(0x04)
	float Reload Time; // 0x34c(0x04)
	float Time Until New Target; // 0x350(0x04)
	float Vertical movement force; // 0x354(0x04)
	float sucking force; // 0x358(0x04)
	enum class E_SPlantReloadSteps PlantState; // 0x35c(0x01)
	UMaterialInstanceDynamic* Membrane Material; // 0x360(0x08)
	UMaterialInstanceDynamic* Shell material; // 0x368(0x08)
	float Original Shell Intensity; // 0x370(0x04)
	float Original Membrane intensity; // 0x374(0x04)
	FMulticastInlineDelegate OnRotationChange; // 0x378(0x10)
	FVector Current Rotation; // 0x388(0x0c)
	float Pulse time; // 0x394(0x04)
	FTimerHandle Pulse timer; // 0x398(0x08)
	float Max membrane pulse; // 0x3a0(0x04)
	FVector Previous Rotation; // 0x3a4(0x0c)
	float safe distance from mouthblocker; // 0x3b0(0x04)

	void Is actor too close(FVector actor location, bool is too close);
	void OnRep_Current Target();
	void Handle Materials(float % Membrane, float % Glow);
	void OnRep_Current Rotation();
	void OnRep_PlantState();
	void Suck In Target Element(APlayerCharacter* Input Character);
	void UserConstructionScript();
	void Sucking Duration__FinishedFunc();
	void Sucking Duration__UpdateFunc();
	void Sucking Duration__Stop Particle System__EventFunc();
	void Move towards target__FinishedFunc();
	void Move towards target__UpdateFunc();
	void Pulsating shell__FinishedFunc();
	void Pulsating shell__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
	void Suck In Players();
	void Reload Ability();
	void Move To Target();
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature();
	void Pulse Shell();
	void BndEvt__MouthBlocker_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ExecuteUbergraph_BP_SuckingPlant_(int32_t EntryPoint);
	void OnRotationChange__DelegateSignature(FVector Target Rotation);
};

