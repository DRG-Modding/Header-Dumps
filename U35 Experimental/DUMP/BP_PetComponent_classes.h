// BlueprintGeneratedClass BP_PetComponent.BP_PetComponent_C
// Size: 0xe8 (Inherited: 0xb8)
struct UBP_PetComponent_C : UPetComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) FText PetName; 
	UPROPERTY(BlueprintReadWrite) UParticleSystem* PetParticles; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Emitter; 

	UFUNCTION(BlueprintCallable) void ModifyTemperature(ASpiderEnemy* Pet);
	UFUNCTION(BlueprintCallable) void SetGameplayTags(AFSDPawn* self2);
	UFUNCTION(BlueprintCallable) void ActivateMaterial(USkeletalMeshComponent* Mesh);
	UFUNCTION(BlueprintCallable) void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(UObject* Loaded);
	UFUNCTION(BlueprintCallable) void OnDeath(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDeath_Event_1(UHealthComponentBase* HealthComponent);
	UFUNCTION(BlueprintCallable) void ReceiveOwningPlayerChanged();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_PetComponent(int32_t EntryPoint);
};

