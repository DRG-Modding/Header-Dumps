// BlueprintGeneratedClass Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C
// Size: 0x192 (Inherited: 0x170)
struct UTutorial_Hint_Resupply_C : UTutorialHintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	UResourceData* ResourceType; // 0x178(0x08)
	UCappedResource* Resource; // 0x180(0x08)
	float MinimumAmount; // 0x188(0x04)
	float DelayBeforeActive; // 0x18c(0x04)
	bool HasMinedNitraSinceLastTutorial; // 0x190(0x01)
	bool IsTutorialActive; // 0x191(0x01)

	void ReceiveOnInitialized();
	void ReceiveOnHidden();
	void ResourceAdded(UCappedResource* Resource, float Amount);
	void ExecuteUbergraph_Tutorial_Hint_Resupply(int32_t EntryPoint);
};

