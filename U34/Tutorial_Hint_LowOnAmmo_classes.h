// BlueprintGeneratedClass Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C
// Size: 0x192 (Inherited: 0x170)
struct UTutorial_Hint_LowOnAmmo_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct UResourceData* ResourceType; // 0x178(0x08)
	struct UCappedResource* Resource; // 0x180(0x08)
	float MinimumAmount; // 0x188(0x04)
	float DelayBeforeActive; // 0x18c(0x04)
	bool HasMinedNitraSinceLastTutorial; // 0x190(0x01)
	bool IsTutorialActive; // 0x191(0x01)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ReceiveOnInitialized
	void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01); // Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnSupplyStatusChangedEvent
	void OnResourceMined(struct UCappedResource* Resource, float amount); // Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.OnResourceMined
	void ExecuteUbergraph_Tutorial_Hint_LowOnAmmo(int32_t EntryPoint); // Function Tutorial_Hint_LowOnAmmo.Tutorial_Hint_LowOnAmmo_C.ExecuteUbergraph_Tutorial_Hint_LowOnAmmo
};

