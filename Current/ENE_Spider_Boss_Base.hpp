#ifndef UE4SS_SDK_ENE_Spider_Boss_Base_HPP
#define UE4SS_SDK_ENE_Spider_Boss_Base_HPP

class AENE_Spider_Boss_Base_C : public AENE_SpiderBase_Large_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TMap<APlayerCharacter*, float> Player to Damage Map;
    class UFSDAchievement* DesignatedDecoy;
    class UFSDAchievement* PestControl;
    class UFSDAchievement* JustAnotherBugHunt;
    class UFSDAchievement* WithoutAPaddle;
    class UFSDAchievement* BigGameHunter;
    int32 PlayerKills;
    FName AnalyticsName;
    float Movement Speed Penalty Reduction;

    void Check Without A Paddle Achievement();
    void DifficultyAsInt(int32& Difficulty);
    void OnBossFightCompleted();
    void FindMostDamagedPlayer(class APlayerCharacter*& Designated Decoy);
    void ReceiveBeginPlay();
    void OnDamagedPlayer(class APlayerCharacter* Player, float Amount);
    void OnAllDwarvesDown();
    void ExecuteUbergraph_ENE_Spider_Boss_Base(int32 EntryPoint);
};

#endif
