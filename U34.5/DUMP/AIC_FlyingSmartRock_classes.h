// BlueprintGeneratedClass AIC_FlyingSmartRock.AIC_FlyingSmartRock_C
// Size: 0x368 (Inherited: 0x358)
struct AAIC_FlyingSmartRock_C : AFSDAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	AENE_Jelly_Passive_Mother_C* Mother; // 0x360(0x08)

	AENE_Jelly_Passive_Mother_C* FindNewMother();
	void ReceiveBeginPlay();
	void OnDeath(UHealthComponentBase* HealthComponent);
	void ReceivePossess(APawn* PossessedPawn);
	void ExecuteUbergraph_AIC_FlyingSmartRock(int32_t EntryPoint);
};

