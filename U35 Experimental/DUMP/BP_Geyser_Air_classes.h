// BlueprintGeneratedClass BP_Geyser_Air.BP_Geyser_Air_C
// Size: 0x321 (Inherited: 0x220)
struct ABP_Geyser_Air_C : AActor {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UDamageComponent* Damage; 
	UPROPERTY(BlueprintReadWrite) UAudioComponent* BublingAudio; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver_Geyser; 
	UPROPERTY(BlueprintReadWrite) ULevelGenerationCarverComponent* LevelGenerationCarver; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Cube_1-1-1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh2; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh1; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* StaticMesh; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* Sphere; 
	UPROPERTY(BlueprintReadWrite) UStaticMeshComponent* PreviewMesh; 
	UPROPERTY(BlueprintReadWrite) UExplosionComponent* Explosion; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect4; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect3; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect2; 
	UPROPERTY(BlueprintReadWrite) UTerrainDetectComponent* TerrainDetect1; 
	UPROPERTY(BlueprintReadWrite) UBillboardComponent* Billboard; 
	UPROPERTY(BlueprintReadWrite) UTerrainPlacementComponent* terrainPlacement; 
	UPROPERTY(BlueprintReadWrite) USimpleObjectInfoComponent* SimpleObjectInfo; 
	UPROPERTY(BlueprintReadWrite) UCapsuleComponent* Capsule; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Erupt; 
	UPROPERTY(BlueprintReadWrite) UParticleSystemComponent* Particle_Idle; 
	UPROPERTY(BlueprintReadWrite) UPathfinderCollisionComponent* PathfinderCollision; 
	UPROPERTY(BlueprintReadWrite) UBP_DamageTriggerComponent_C* BP_DamageTriggerComponent; 
	UPROPERTY(BlueprintReadWrite) USceneComponent* SharedRoot; 
	UPROPERTY(BlueprintReadWrite) float Shake_Scale_3CF492A746BF10F4696B82A05FBA1A02; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Shake__Direction_3CF492A746BF10F4696B82A05FBA1A02; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Shake; 
	UPROPERTY(BlueprintReadWrite) FVector2D  Max; 
	UPROPERTY(BlueprintReadWrite) FVector2D  Max; 
	UPROPERTY(BlueprintReadWrite) float TraceDown; 
	UPROPERTY(BlueprintReadWrite) bool VolcanoEruptionDanger; 
	UPROPERTY(BlueprintReadWrite) float AirPush; 
	UPROPERTY(BlueprintReadWrite) FVector StartScale; 
	UPROPERTY(BlueprintReadWrite) bool Explode; 

	UFUNCTION(BlueprintCallable) void OnRep_Explode();
	UFUNCTION(BlueprintCallable) void OnRep_VolcanoEruptionDanger();
	UFUNCTION(BlueprintCallable) void Shake__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Shake__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void EnterGeyser();
	UFUNCTION(BlueprintCallable) void PlayDamageSound(FVector Location);
	UFUNCTION(BlueprintCallable) void OpenGeyser();
	UFUNCTION(BlueprintCallable) void CloseGeyser();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect1_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect2_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect3_K2Node_ComponentBoundEvent_3_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BndEvt__TerrainDetect4_K2Node_ComponentBoundEvent_4_PointRemovedEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable) void BOOM();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_BP_Geyser_Air(int32_t EntryPoint);
};

