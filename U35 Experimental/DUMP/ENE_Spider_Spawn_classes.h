// BlueprintGeneratedClass ENE_Spider_Spawn.ENE_Spider_Spawn_C
// Size: 0x4bd (Inherited: 0x480)
struct AENE_Spider_Spawn_C : AENE_Spider_Swarmer_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float Spawn_Time_B1CBC18A4B11AF202D22269E86350761; 
	UPROPERTY(BlueprintReadWrite) float Spawn_Z_B1CBC18A4B11AF202D22269E86350761; 
	UPROPERTY(BlueprintReadWrite) enum class ETimelineDirection Spawn__Direction_B1CBC18A4B11AF202D22269E86350761; 
	UPROPERTY(BlueprintReadWrite) UTimelineComponent* Spawn; 
	UPROPERTY(BlueprintReadWrite) FVector SpawnLocation; 
	UPROPERTY(BlueprintReadWrite) FVector TargetLocation; 
	UPROPERTY(BlueprintReadWrite) float ZSpawnOffset; 
	UPROPERTY(BlueprintReadWrite) bool UseSpawnAnimation; 

	UFUNCTION(BlueprintCallable) void OnRep_TargetLocation();
	UFUNCTION(BlueprintCallable) void Spawn__FinishedFunc();
	UFUNCTION(BlueprintCallable) void Spawn__UpdateFunc();
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Spawn Behavior();
	UFUNCTION(BlueprintCallable) void Play Spawn();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Spawn(int32_t EntryPoint);
};

