// BlueprintGeneratedClass BP_AmberEvent.BP_AmberEvent_C
// Size: 0x448 (Inherited: 0x3a8)
struct ABP_AmberEvent_C : AAmberEvent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule1; 
	UPROPERTY(BlueprintReadWrite) URoomCarverComponent* RoomCarver; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* SM_Prim_Cylinder_06sides; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) UMeshCarverComponent* MeshCarver; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* AmberLaserActivated; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) URestrictedResourceBank* RestrictedResourceBank; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* StartButton1; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* StartButton2; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* StartButton4; 
	UPROPERTY(BlueprintReadWrite) UChildActorComponent* StartButton3; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 

	UFUNCTION(BlueprintCallable) void SpawnEnemies();
	UFUNCTION(BlueprintCallable) void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(APlayerCharacter* User);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnEventFinished(bool eventSuccess);
	UFUNCTION(BlueprintCallable) void OnEventTriggered();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_AmberEvent(int32_t EntryPoint);
};

