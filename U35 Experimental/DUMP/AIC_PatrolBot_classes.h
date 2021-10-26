// BlueprintGeneratedClass AIC_PatrolBot.AIC_PatrolBot_C
// Size: 0x360 (Inherited: 0x358)
struct AAIC_PatrolBot_C : AEnemyAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)

	void SetActive(bool boolValue);
	void ReceivePossess(APawn* PossessedPawn);
	void SetReadyToHack(bool boolValue);
	void Hacked(APlayerCharacter* HackingPlayer);
	void ActivateDrone();
	void ExecuteUbergraph_AIC_PatrolBot(int32_t EntryPoint);
};

