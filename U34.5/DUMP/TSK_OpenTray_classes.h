// BlueprintGeneratedClass TSK_OpenTray.TSK_OpenTray_C
// Size: 0xb9 (Inherited: 0xa8)
struct UTSK_OpenTray_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	FName TrayOpen; // 0xb0(0x08)
	bool Open; // 0xb8(0x01)

	void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);
	void ExecuteUbergraph_TSK_OpenTray(int32_t EntryPoint);
};

