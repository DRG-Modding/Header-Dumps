// BlueprintGeneratedClass BP_SuckingPlant_.BP_SuckingPlant__C
// Size: 0x3b4 (Inherited: 0x280)
struct ABP_SuckingPlant__C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UAudioComponent* SuckingPlantMove; // 0x288(0x08)
	struct UAudioComponent* SuckingPlantLoop; // 0x290(0x08)
	struct UAudioComponent* SuckingPlantClose; // 0x298(0x08)
	struct UAudioComponent* SuckingPlantOpen; // 0x2a0(0x08)
	struct UParticleSystemComponent* SuckingPSys; // 0x2a8(0x08)
	struct USphereComponent* MouthBlocker; // 0x2b0(0x08)
	struct UCapsuleComponent* Capsule; // 0x2b8(0x08)
	struct USkeletalMeshComponent* PlantBody; // 0x2c0(0x08)
	struct UTerrainPlacementComponent* terrainPlacement; // 0x2c8(0x08)
	struct UTerrainDetectComponent* TerrainDetect; // 0x2d0(0x08)
	struct USimpleHealthComponent* SimpleHealth; // 0x2d8(0x08)
	struct UPawnSensingComponent* PawnSensing; // 0x2e0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2e8(0x08)
	float Pulsating_shell_Pulse_351B8E04438E55A34AD7599F13872713; // 0x2f0(0x04)
	char Pulsating_shell__Direction_351B8E04438E55A34AD7599F13872713; // 0x2f4(0x01)
	char UnknownData_2F5[0x3]; // 0x2f5(0x03)
	struct UTimelineComponent* Pulsating shell; // 0x2f8(0x08)
	char Move_towards_target__Direction_3E7A86F94B91CDEC852EE0BAD9B36A13; // 0x300(0x01)
	char UnknownData_301[0x7]; // 0x301(0x07)
	struct UTimelineComponent* Move towards target; // 0x308(0x08)
	float Sucking_Duration_Model_Emissive_intensity___7C306C17493093A48A5774B653EC9DCE; // 0x310(0x04)
	char Sucking_Duration__Direction_7C306C17493093A48A5774B653EC9DCE; // 0x314(0x01)
	char UnknownData_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* Sucking Duration; // 0x318(0x08)
	struct FRotator Target Look At Rotation; // 0x320(0x0c)
	char UnknownData_32C[0x4]; // 0x32c(0x04)
	struct TArray<struct APlayerCharacter*> Players inside; // 0x330(0x10)
	struct APawn* Current Target; // 0x340(0x08)
	float Suck Duration; // 0x348(0x04)
	float Reload Time; // 0x34c(0x04)
	float Time Until New Target; // 0x350(0x04)
	float Vertical movement force; // 0x354(0x04)
	float sucking force; // 0x358(0x04)
	char PlantState; // 0x35c(0x01)
	char UnknownData_35D[0x3]; // 0x35d(0x03)
	struct UMaterialInstanceDynamic* Membrane Material; // 0x360(0x08)
	struct UMaterialInstanceDynamic* Shell material; // 0x368(0x08)
	float Original Shell Intensity; // 0x370(0x04)
	float Original Membrane intensity; // 0x374(0x04)
	struct FMulticastInlineDelegate OnRotationChange; // 0x378(0x10)
	struct FVector Current Rotation; // 0x388(0x0c)
	float Pulse time; // 0x394(0x04)
	struct FTimerHandle Pulse timer; // 0x398(0x08)
	float Max membrane pulse; // 0x3a0(0x04)
	struct FVector Previous Rotation; // 0x3a4(0x0c)
	float safe distance from mouthblocker; // 0x3b0(0x04)

	void Is actor too close(struct FVector actor location, bool is too close); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Is actor too close
	void OnRep_Current Target(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.OnRep_Current Target
	void Handle Materials(float % Membrane, float % Glow); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Handle Materials
	void OnRep_Current Rotation(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.OnRep_Current Rotation
	void OnRep_PlantState(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.OnRep_PlantState
	void Suck In Target Element(struct APlayerCharacter* Input Character); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Suck In Target Element
	void UserConstructionScript(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.UserConstructionScript
	void Sucking Duration__FinishedFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Sucking Duration__FinishedFunc
	void Sucking Duration__UpdateFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Sucking Duration__UpdateFunc
	void Sucking Duration__Stop Particle System__EventFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Sucking Duration__Stop Particle System__EventFunc
	void Move towards target__FinishedFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Move towards target__FinishedFunc
	void Move towards target__UpdateFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Move towards target__UpdateFunc
	void Pulsating shell__FinishedFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Pulsating shell__FinishedFunc
	void Pulsating shell__UpdateFunc(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Pulsating shell__UpdateFunc
	void ReceiveBeginPlay(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.ReceiveBeginPlay
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_SeePawnDelegate__DelegateSignature
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void Suck In Players(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Suck In Players
	void Reload Ability(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Reload Ability
	void Move To Target(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Move To Target
	void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_5_PointRemovedEvent__DelegateSignature
	void Pulse Shell(); // Function BP_SuckingPlant_.BP_SuckingPlant__C.Pulse Shell
	void BndEvt__MouthBlocker_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_SuckingPlant_.BP_SuckingPlant__C.BndEvt__MouthBlocker_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	void ExecuteUbergraph_BP_SuckingPlant_(int32_t EntryPoint); // Function BP_SuckingPlant_.BP_SuckingPlant__C.ExecuteUbergraph_BP_SuckingPlant_
	void OnRotationChange__DelegateSignature(struct FVector Target Rotation); // Function BP_SuckingPlant_.BP_SuckingPlant__C.OnRotationChange__DelegateSignature
};

