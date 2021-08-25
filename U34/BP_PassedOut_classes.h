// BlueprintGeneratedClass BP_PassedOut.BP_PassedOut_C
// Size: 0x141 (Inherited: 0x108)
struct UBP_PassedOut_C : UPassedOutStateComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct FTransform Start Transform; // 0x110(0x30)
	bool WakeInBed; // 0x140(0x01)

	void AllPassedOut(bool AllPassedOut); // Function BP_PassedOut.BP_PassedOut_C.AllPassedOut
	void ReceiveBeginPlay(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveBeginPlay
	void BeginFadeToBlack(); // Function BP_PassedOut.BP_PassedOut_C.BeginFadeToBlack
	void ReceiveStateEnter(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveStateEnter
	void ReceiveStateExit(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveStateExit
	void Turn Off Juke Box(); // Function BP_PassedOut.BP_PassedOut_C.Turn Off Juke Box
	void Remove Drinking Mugs(); // Function BP_PassedOut.BP_PassedOut_C.Remove Drinking Mugs
	void ReceiveTeamPassedOut(); // Function BP_PassedOut.BP_PassedOut_C.ReceiveTeamPassedOut
	void ExecuteUbergraph_BP_PassedOut(int32_t EntryPoint); // Function BP_PassedOut.BP_PassedOut_C.ExecuteUbergraph_BP_PassedOut
};

