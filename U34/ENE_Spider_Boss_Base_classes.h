// BlueprintGeneratedClass ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C
// Size: 0x544 (Inherited: 0x4b4)
struct AENE_Spider_Boss_Base_C : AENE_SpiderBase_Large_C {
	char UnknownData_4B4[0x4]; // 0x4b4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct TMap<struct APlayerCharacter*, float> Player to Damage Map; // 0x4c0(0x50)
	struct UFSDAchievement* DesignatedDecoy; // 0x510(0x08)
	struct UFSDAchievement* PestControl; // 0x518(0x08)
	struct UFSDAchievement* JustAnotherBugHunt; // 0x520(0x08)
	struct UFSDAchievement* WithoutAPaddle; // 0x528(0x08)
	struct UFSDAchievement* BigGameHunter; // 0x530(0x08)
	int32_t PlayerKills; // 0x538(0x04)
	struct FName AnalyticsName; // 0x53c(0x08)

	void Check Without A Paddle Achievement(); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.Check Without A Paddle Achievement
	void DifficultyAsInt(int32_t Difficulty); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.DifficultyAsInt
	void OnBossFightCompleted(); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnBossFightCompleted
	void FindMostDamagedPlayer(struct APlayerCharacter* Designated Decoy); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.FindMostDamagedPlayer
	void ReceiveBeginPlay(); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.ReceiveBeginPlay
	void OnDamagedPlayer(struct APlayerCharacter* Player, float amount); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnDamagedPlayer
	void OnAllDwarvesDown(); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.OnAllDwarvesDown
	void ExecuteUbergraph_ENE_Spider_Boss_Base(int32_t EntryPoint); // Function ENE_Spider_Boss_Base.ENE_Spider_Boss_Base_C.ExecuteUbergraph_ENE_Spider_Boss_Base
};

