// BlueprintGeneratedClass BP_Phys_Bauble01.BP_Phys_Bauble01_C
// Size: 0x284 (Inherited: 0x220)
struct ABP_Phys_Bauble01_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Mesh; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* UseCapsule; 
	UPROPERTY(BlueprintReadWrite) UGravityChangedComponent* GravityChanged; 
	UPROPERTY(BlueprintReadWrite) UInstantUsable* InstantUsable; 
	UPROPERTY(BlueprintReadWrite) bool CanTriggerSound; 
	UPROPERTY(BlueprintReadWrite) FVector KickSoundLocation; 
	UPROPERTY(BlueprintReadWrite) APlayerCharacter* KickedBy; 
	UPROPERTY(BlueprintReadWrite) TArray<UStaticMesh*> MeshesToChooseFrom; 
	UPROPERTY(BlueprintReadWrite) TArray<UMaterialInterface*> Mats_Wrapper; 
	UPROPERTY(BlueprintReadWrite) int32_t NumberOfImpacts; 

	UFUNCTION(BlueprintCallable) void OnRep_KickSoundLocation();
	UFUNCTION(BlueprintCallable) void BndEvt__StaticMeshComponent0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	UFUNCTION(BlueprintCallable) void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Play_Kick(APlayerCharacter* Kicker);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Phys_Bauble01(int32_t EntryPoint);
};

