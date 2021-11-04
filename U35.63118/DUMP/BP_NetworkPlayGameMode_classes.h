// BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
// Size: 0x538 (Inherited: 0x529)
struct ABP_NetworkPlayGameMode_C : ABP_GameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x530(0x08)

	UObject* GetDefaultPawnClassForController(AController* InController);
	void RecieveAllDwarvesDown();
	void ExecuteUbergraph_BP_NetworkPlayGameMode(int32_t EntryPoint);
};

