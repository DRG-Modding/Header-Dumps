// BlueprintGeneratedClass BP_PetComponent.BP_PetComponent_C
// Size: 0xe8 (Inherited: 0xb8)
struct UBP_PetComponent_C : UPetComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	FText PetName; // 0xc0(0x18)
	UParticleSystem* PetParticles; // 0xd8(0x08)
	UParticleSystemComponent* Emitter; // 0xe0(0x08)

	void ModifyTemperature(ASpiderEnemy* Pet);
	void SetGameplayTags(AFSDPawn* self2);
	void ActivateMaterial(USkeletalMeshComponent* Mesh);
	void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(UObject* Loaded);
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceiveBeginPlay();
	void OnDeath_Event_1(UHealthComponentBase* HealthComponent);
	void ReceiveOwningPlayerChanged();
	void ExecuteUbergraph_BP_PetComponent(int32_t EntryPoint);
};

