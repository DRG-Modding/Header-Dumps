// BlueprintGeneratedClass Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C
// Size: 0x192 (Inherited: 0x170)
struct UTutorial_Hint_LowOnAmmo_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UResourceData* ResourceType; // 0x178(0x08)
	UCappedResource* Resource; // 0x180(0x08)
	float MinimumAmount; // 0x188(0x04)
	float DelayBeforeActive; // 0x18c(0x04)
	bool HasMinedNitraSinceLastTutorial; // 0x190(0x01)
	bool IsTutorialActive; // 0x191(0x01)

	void ReceiveOnInitialized();
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
	void OnResourceMined(UCappedResource* Resource, float Amount);
	void ExecuteUbergraph_Tutorial_Hint_LowOnAmmo(int32_t EntryPoint);
};

