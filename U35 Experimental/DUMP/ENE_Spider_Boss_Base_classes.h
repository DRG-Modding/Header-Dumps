// BlueprintGeneratedClass ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C
// Size: 0x544 (Inherited: 0x4b4)
struct AENE_Spider_Boss_Base_C : AENE_SpiderBase_Large_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) TMap<APlayerCharacter*, float> Player to Damage Map; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* DesignatedDecoy; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* PestControl; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* JustAnotherBugHunt; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* WithoutAPaddle; 
	UPROPERTY(BlueprintReadWrite) UFSDAchievement* BigGameHunter; 
	UPROPERTY(BlueprintReadWrite) int32_t PlayerKills; 
	UPROPERTY(BlueprintReadWrite) FName AnalyticsName; 

	UFUNCTION(BlueprintCallable) void Check Without A Paddle Achievement();
	UFUNCTION(BlueprintCallable) void DifficultyAsInt(int32_t Difficulty);
	UFUNCTION(BlueprintCallable) void OnBossFightCompleted();
	UFUNCTION(BlueprintCallable) void FindMostDamagedPlayer(APlayerCharacter* Designated Decoy);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void OnDamagedPlayer(APlayerCharacter* Player, float amount);
	UFUNCTION(BlueprintCallable) void OnAllDwarvesDown();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ENE_Spider_Boss_Base(int32_t EntryPoint);
};

