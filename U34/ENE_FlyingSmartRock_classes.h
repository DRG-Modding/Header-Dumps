// BlueprintGeneratedClass ENE_FlyingSmartRock.ENE_FlyingSmartRock_C
// Size: 0x474 (Inherited: 0x398)
struct AENE_FlyingSmartRock_C : AEnemyDeepPathfinderCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UParticleSystemComponent* P_FlyingRock_Birth; // 0x3a0(0x08)
	struct UParticleSystemComponent* Trail; // 0x3a8(0x08)
	struct UPointLightComponent* PointLight; // 0x3b0(0x08)
	struct USphereComponent* Sphere; // 0x3b8(0x08)
	struct UStaticMeshComponent* Core; // 0x3c0(0x08)
	struct UAudioComponent* RockAttack_FloatingLoop_Cue; // 0x3c8(0x08)
	struct UAudioComponent* PrepareToAttack_Cue; // 0x3d0(0x08)
	struct UDamageComponent* Damage; // 0x3d8(0x08)
	struct UOutlineComponent* outline; // 0x3e0(0x08)
	struct UEnemyComponent* enemy; // 0x3e8(0x08)
	float Timeline_1_ScaleMesh_EC054E764BE887708377689ABBE38A90; // 0x3f0(0x04)
	char Timeline_1__Direction_EC054E764BE887708377689ABBE38A90; // 0x3f4(0x01)
	char UnknownData_3F5[0x3]; // 0x3f5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x3f8(0x08)
	float Timeline_0_Size_3A168B64422F3454BD6578A9FC2C38D3; // 0x400(0x04)
	char Timeline_0__Direction_3A168B64422F3454BD6578A9FC2C38D3; // 0x404(0x01)
	char UnknownData_405[0x3]; // 0x405(0x03)
	struct UTimelineComponent* Timeline_1; // 0x408(0x08)
	float AttackTell_ParticleScale_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x410(0x04)
	float AttackTell_Light_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x414(0x04)
	char AttackTell__Direction_AADFBFDA4F8A42D878B608A53FD58DB2; // 0x418(0x01)
	char UnknownData_419[0x7]; // 0x419(0x07)
	struct UTimelineComponent* AttackTell; // 0x420(0x08)
	struct FTimerHandle TimeLOS; // 0x428(0x08)
	float AttackDistance; // 0x430(0x04)
	struct FVector CoreSize; // 0x434(0x0c)
	float LightRadiusBoost; // 0x440(0x04)
	float LightIntensityBoost; // 0x444(0x04)
	struct UMaterialInstanceDynamic* DynamicMaterial_Core; // 0x448(0x08)
	float EmissiveBoost; // 0x450(0x04)
	char UnknownData_454[0x4]; // 0x454(0x04)
	struct UParticleSystemComponent* ConnectionParticles; // 0x458(0x08)
	struct AEscortDestination* Heartstone; // 0x460(0x08)
	struct FVector FinalMeshSize; // 0x468(0x0c)

	void UserConstructionScript(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.UserConstructionScript
	void AttackTell__FinishedFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.AttackTell__FinishedFunc
	void AttackTell__UpdateFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.AttackTell__UpdateFunc
	void Timeline_0__FinishedFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.Timeline_0__FinishedFunc
	void Timeline_0__UpdateFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.Timeline_0__UpdateFunc
	void Timeline_1__FinishedFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.Timeline_1__FinishedFunc
	void Timeline_1__UpdateFunc(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.Timeline_1__UpdateFunc
	void BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(struct UHealthComponentBase* HealthComponent); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.BndEvt__HealthComponent_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature
	void CollideDamageDie(struct AActor* OtherActor); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.CollideDamageDie
	void ReceiveBeginPlay(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ReceiveBeginPlay
	void CheckTargetLOS(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.CheckTargetLOS
	void AttackTargetEffects(struct FVector TargetLocation); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.AttackTargetEffects
	void StopTell(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.StopTell
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
	void ScaleCore(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ScaleCore
	void ReceiveTick(float DeltaSeconds); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ReceiveTick
	void SpawnConnectionParticles(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.SpawnConnectionParticles
	void RemoveConnectionParticles(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.RemoveConnectionParticles
	void ReceiveDestroyed(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ReceiveDestroyed
	void ScaleMesh(); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ScaleMesh
	void ExecuteUbergraph_ENE_FlyingSmartRock(int32_t EntryPoint); // Function ENE_FlyingSmartRock.ENE_FlyingSmartRock_C.ExecuteUbergraph_ENE_FlyingSmartRock
};

