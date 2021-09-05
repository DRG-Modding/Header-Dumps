// BlueprintGeneratedClass ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C
// Size: 0x544 (Inherited: 0x4b4)
struct AENE_Spider_Boss_Base_C : AENE_SpiderBase_Large_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	TMap<APlayerCharacter*, float> Player to Damage Map; // 0x4c0(0x50)
	UFSDAchievement* DesignatedDecoy; // 0x510(0x08)
	UFSDAchievement* PestControl; // 0x518(0x08)
	UFSDAchievement* JustAnotherBugHunt; // 0x520(0x08)
	UFSDAchievement* WithoutAPaddle; // 0x528(0x08)
	UFSDAchievement* BigGameHunter; // 0x530(0x08)
	int32_t PlayerKills; // 0x538(0x04)
	FName AnalyticsName; // 0x53c(0x08)

	void Check Without A Paddle Achievement();
	void DifficultyAsInt(int32_t Difficulty);
	void OnBossFightCompleted();
	void FindMostDamagedPlayer(APlayerCharacter* Designated Decoy);
	void ReceiveBeginPlay();
	void OnDamagedPlayer(APlayerCharacter* Player, float amount);
	void OnAllDwarvesDown();
	void ExecuteUbergraph_ENE_Spider_Boss_Base(int32_t EntryPoint);
};

