// BlueprintGeneratedClass BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C
// Size: 0x508 (Inherited: 0x4f9)
struct ABP_NetworkPlayGameMode_C : ABP_GameMode_C {
	char UnknownData_4F9[0x7]; // 0x4f9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)

	struct UObject* GetDefaultPawnClassForController(struct AController* InController); // Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.GetDefaultPawnClassForController
	void RecieveAllDwarvesDown(); // Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.RecieveAllDwarvesDown
	void ExecuteUbergraph_BP_NetworkPlayGameMode(int32_t EntryPoint); // Function BP_NetworkPlayGameMode.BP_NetworkPlayGameMode_C.ExecuteUbergraph_BP_NetworkPlayGameMode
};

