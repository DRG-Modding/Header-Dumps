#ifndef UE4SS_SDK_BP_BeastMaster_HPP
#define UE4SS_SDK_BP_BeastMaster_HPP

class UBP_BeastMaster_C : public UBeastMasterComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ASpiderEnemy* PossibleTarget;
    class ASpiderEnemy* FriendedEnemy;
    FGameplayTagQuery Filter;
    UClass* LoadedFriendable;
    TSoftClassPtr<UObject> Friendable;
    float MaxAttackDMGMod;
    FText HoldText;
    FTimerHandle HoldTimer;
    float HoldProgress;
    float HoldDuration;
    class ASpiderEnemy* ActiveTarget;
    class USingleUsableComponent* UsableComponent;
    class ASpiderEnemy* CurrentTarget;

    void UpdateHoldProgress();
    void ChangeAttacks(class ASpiderEnemy* enemy);
    class AFSDPlayerController* GetPlayerController();
    void SetupStatusEffects(class ASpiderEnemy* enemy);
    void GetPlayerCharacter(class APlayerCharacter*& AsPlayer Character);
    void GetPerk(class UFloatPerkAsset*& Perks Beast Master);
    bool CanBefriend(class ASpiderEnemy* enemy);
    void OnLoaded_8AE17C7C4ABC357330FD319C5F5E7796(UClass* Loaded);
    void ReceiveBeginPlay();
    void OnTargetChanged(class AActor* NewTarget, class UPrimitiveComponent* NewPrimitive);
    void Server_Befriend(class ASpiderEnemy* Spider);
    void Setup Shouts();
    void OnFriendedEnemyDeath(class UHealthComponentBase* HealthComponent);
    void usedBy(class APlayerCharacter* User, EInputKeys Key);
    void BeginUse(class APlayerCharacter* User, EInputKeys Key);
    void EndUse();
    void TrackingUpdate();
    void CustomEvent_0();
    void ExecuteUbergraph_BP_BeastMaster(int32 EntryPoint);
};

#endif
