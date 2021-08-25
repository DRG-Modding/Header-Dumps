// BlueprintGeneratedClass Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C
// Size: 0x192 (Inherited: 0x170)
struct UTutorial_Hint_Resupply_C : UTutorialHintComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct UResourceData* ResourceType; // 0x178(0x08)
	struct UCappedResource* Resource; // 0x180(0x08)
	float MinimumAmount; // 0x188(0x04)
	float DelayBeforeActive; // 0x18c(0x04)
	bool HasMinedNitraSinceLastTutorial; // 0x190(0x01)
	bool IsTutorialActive; // 0x191(0x01)

	void ReceiveOnInitialized(); // Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnInitialized
	void ReceiveOnHidden(); // Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ReceiveOnHidden
	void ResourceAdded(struct UCappedResource* Resource, float amount); // Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ResourceAdded
	void ExecuteUbergraph_Tutorial_Hint_Resupply(int32_t EntryPoint); // Function Tutorial_Hint_Resupply.Tutorial_Hint_Resupply_C.ExecuteUbergraph_Tutorial_Hint_Resupply
};

