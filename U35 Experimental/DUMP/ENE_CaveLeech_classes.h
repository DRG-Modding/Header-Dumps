// BlueprintGeneratedClass ENE_CaveLeech.ENE_CaveLeech_C
// Size: 0x498 (Inherited: 0x3f0)
struct AENE_CaveLeech_C : ACaveLeech {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* ParticleSystem; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* RetractSpot; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* HeadAudio; 
	UPROPERTY(BlueprintReadWrite) UPointLightComponent* PointLight; 
	UPROPERTY(BlueprintReadWrite) UOutlineComponent* outline; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* HitCollider; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USphereComponent* HeadCollision; 
	UPROPERTY(BlueprintReadWrite) USkeletalMeshComponent* TopMesh; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* Mouth; 
	UPROPERTY(BlueprintReadWrite) float Light_on_Light_value_5D62893F4543BADC6EB650BB2288E402; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Light_on__Direction_5D62893F4543BADC6EB650BB2288E402; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Light_on; 
	UPROPERTY(BlueprintReadWrite) float Light_off_Light_value_FB1F6FB448F184C53818E18AA6CA6E7E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Light_off__Direction_FB1F6FB448F184C53818E18AA6CA6E7E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Light_off; 
	UPROPERTY(BlueprintReadWrite) float Emissive_on_Glow_value_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Emissive_on__Direction_8FD7DFD6484E2EAF8A2D1D97C4E37F6E; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Emissive_on; 
	UPROPERTY(BlueprintReadWrite) float Emissive_off_Glow_value_E8DBA0094826FB48DB3D0A9B7129C074; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Emissive_off__Direction_E8DBA0094826FB48DB3D0A9B7129C074; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Emissive_off; 
	UPROPERTY(BlueprintReadWrite) UMaterialInstance* Emission ; 

	UFUNCTION(BlueprintCallable) USkeletalMeshComponent* GetMesh();
	UFUNCTION(BlueprintCallable) FVector GetTargetCenterMass();
	UFUNCTION(BlueprintCallable) void PlayAudioHead(USoundBase* NewSound);
	UFUNCTION(BlueprintCallable) FVector GetMouthLocation();
	UFUNCTION(BlueprintCallable) void UserConstructionScript();
	UFUNCTION(BlueprintCallable) void Emissive_on__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Emissive_on__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Emissive_off__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Emissive_off__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Light_off__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Light_off__UpdateFunc();
	UFUNCTION(BlueprintCallable) void Light_on__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Light_on__UpdateFunc();
	UFUNCTION(BlueprintCallable) void BP_OnBite(UHealthComponent* TargetHealth);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void BP_OnStateChanged(enum class ECaveLeechState NewState);
	UFUNCTION(BlueprintCallable) void ShowHead(bool bNewVisibility);
	UFUNCTION(BlueprintCallable) void OnDeath();
	UFUNCTION(BlueprintCallable) void OnFrozen(AActor* Source);
	UFUNCTION(BlueprintCallable) void OnUnFrozen();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_CaveLeech(int32_t EntryPoint);
};

